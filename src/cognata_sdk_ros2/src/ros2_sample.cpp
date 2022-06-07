//
// ros2_sample.cpp - Cognata SDK ROS2 sample cpp file
//
// Copyright Cognata Ltd. (c) 2018 - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited
// All trade-marks, trade names, service marks and logos referenced herein belong to their respective companies
// Proprietary and confidential

#include <thread>    // sleep
#include <algorithm> // max

#include <CognataSim.h> // SDK

#include "keyPress.hpp" // simple keyboard handling for windows and Linux
#include "ros2_sample.hpp"
#include "ros_utility_funcs.hpp"

using rclcpp::executors::MultiThreadedExecutor;
using namespace Cognata::SDK;

SampleCode::SampleCode()
{}

SampleCode::~SampleCode()
{}

void SampleCode::run(int argc, char **argv)
{
    parseCommandLineParameters(argc, argv);
    
    rosInitialize();

    createSimulation();
    connectToSimulation();
    waitForSimulationToLoad();
    setConfigureVersions();

    queryEngineVersion();
    queryTerrain();
    queryAllCarsInitalInformation();
    queryAllMovingObjectsInitialInformation();
    queryGlobalSensors();
    queryEgoCarSensors();
    
    modifyDOGTParams();

    registerSensors();
    registerGlobalSensors();

    configureSimulation();

    startSimulation();
    initKeyboard();
    printSampleMenu();
    initSimEngineCarDriver();

    sampleMainLoop();

    rclcpp::shutdown(); // Close ROS
    disconnect();
}

void SampleCode::rosInitialize()
{
    /// ROS Init
    rclcpp::init(0, nullptr);

    //Node init & ros multithread executer thread start
    MultiThreadedExecutor::SharedPtr rosExecutor;
    TRY_CATCH(m_SubscriberNode = rclcpp::Node::make_shared("subscriber_node");)
    TRY_CATCH(m_PublisherNode = rclcpp::Node::make_shared("publisher_node");)
    TRY_CATCH(rosExecutor = std::make_shared<MultiThreadedExecutor>();)
    rosExecutor->add_node(m_SubscriberNode);
    rosExecutor->add_node(m_PublisherNode);
    std::thread executor_thread(std::bind(&MultiThreadedExecutor::spin, rosExecutor));
    executor_thread.detach();

    // Callback & subscriber for DRIVER commands :
    // A positive value is a flag for turning on the AI Driving. A negative is a flag for turning on the Manual (SDK) Driving.
    // Please note that this flag is only a sample for convenience. The Simulation Engine switches to manual driving when any 
    // car control driving command is recieved (gas, steering, brakes, acceleration).
    m_CarDriverSubsciber = m_SubscriberNode->create_subscription<std_msgs::msg::Int8>
                                        (DRIVER_CMD_TOPIC,
                                        rclcpp::SystemDefaultsQoS(),
                                        std::bind(&SampleCode::carDriverCallback,
                                        this,
                                        std::placeholders::_1));
    //Command publisher to send commands from keyboard input
    m_CarDriverPublisher = m_PublisherNode->
                    create_publisher<std_msgs::msg::Int8>(DRIVER_CMD_TOPIC, 1);

    //Callback & subscriber for Car GAS commands. Gas valid values : [0..1]
    m_CarGasCMDSubsciber = m_SubscriberNode->create_subscription<std_msgs::msg::Float32>
                                        (GAS_CMD_TOPIC,
                                        rclcpp::SystemDefaultsQoS(),
                                        std::bind(&SampleCode::carGasCMDCallback,
                                        this,
                                        std::placeholders::_1));
    //Command publisher to send commands from keyboard input
    m_CarGasCMDPublisher = m_PublisherNode->
                    create_publisher<std_msgs::msg::Float32>(GAS_CMD_TOPIC, 1);
    
    //Callback & subscriber for Car BRAKE commands. Braking valid values : [0..1] (regardless of gas)
    m_CarBrakeCMDSubsciber = m_SubscriberNode->create_subscription<std_msgs::msg::Float32>
                                        (BRAKE_CMD_TOPIC,
                                        rclcpp::SystemDefaultsQoS(),
                                        std::bind(&SampleCode::carBrakeCMDCallback,
                                        this,
                                        std::placeholders::_1));
    //Command publisher to send commands from keyboard input
    m_CarBrakeCMDPublisher = m_PublisherNode->
                    create_publisher<std_msgs::msg::Float32>(BRAKE_CMD_TOPIC, 1);

    //Callback & subscriber for Car STEERING commands. Steering valid values : [-1..1]
    m_CarSteerCMDSubsciber = m_SubscriberNode->create_subscription<std_msgs::msg::Float32>
                                        (STEER_CMD_TOPIC,
                                        rclcpp::SystemDefaultsQoS(),
                                        std::bind(&SampleCode::carSteerCMDCallback,
                                        this,
                                        std::placeholders::_1));
    //Command publisher to send commands from keyboard input
    m_CarSteerCMDPublisher = m_PublisherNode->
                    create_publisher<std_msgs::msg::Float32>(STEER_CMD_TOPIC, 1);

    //Callback & subscriber for Car ACCELERATION commands. Acceleration valid values : [-1..1].
    // This is in fact gas-brakes (gas_value minus brakes_value) and it overrides gas&brakes values in the 
    // Simulation Engine, as well as in this sample code.
    m_CarAccelerationCMDSubsciber = m_SubscriberNode->create_subscription<std_msgs::msg::Float32>
                                        (ACCELERATION_CMD_TOPIC,
                                        rclcpp::SystemDefaultsQoS(),
                                        std::bind(&SampleCode::carAccelerationCMDCallback,
                                        this,
                                        std::placeholders::_1));
    //Command publisher to send commands from keyboard input
    m_CarAccelerationCMDPublisher = m_PublisherNode->
                    create_publisher<std_msgs::msg::Float32>(ACCELERATION_CMD_TOPIC, 1);
}

void SampleCode::createSimulation()
{
    // Create simulation and connect to server
    TRY_CATCH(m_Sim = std::make_unique<CognataSim>();)
    RCLCPP_INFO(rclcpp::get_logger("info"),
                                "Starting Cognata Simulation version: %s",
                                                m_Sim->getSDKVersion().c_str());

    TRY_CATCH(m_ClosestTarget = std::make_shared<ClosestTarget>();)
    TRY_CATCH(m_EgoData = std::make_shared<EgoData>();)

    // register loading state (before connection)
    OEM_LoadingHandler *myLoadingStateHandler = new OEM_LoadingHandler();
    m_Sim->registerLoadingStateCallback(*myLoadingStateHandler);
}

void SampleCode::showUsage()
{
    IMPORTANT_MSG(usageString << std::endl);
}

bool SampleCode::isValidArgumentValue(int argc, char **argv, int argNameIdx)
{
    int argValueIdx = argNameIdx + 1;
    return ((argc > argValueIdx) &&
            (argv[argValueIdx][0] != '-'));
}

void SampleCode::parseCommandLineParameters(int argc, char **argv)
{
    // Note : By default the Simulation Engine starts with an AI driver, so regardless of the setting here
    // we would have to send a message to the Simulation Engine if we want to start in Manual/SDK Driver mode. 
    m_ServerEgoCarUseAI = false;
    m_ClientEgoCarUseAI = false;

    // parse command line parameters
    m_OptimizeRendering = false;
    if (argc < 3)
    {
        RCLCPP_ERROR(rclcpp::get_logger("error"), "Wrong number of command line arguments");
        showUsage();
        throw WRONG_NUMBER_OF_ARGUMENTS;
    }

    //build connection string from arg's
    m_ConnectionString = argv[1];
    m_ConnectionString += " ";
    m_ConnectionString += argv[2];

    bool invalidArgs = false;
    for (int i = 3; i < argc; i++)
    {
        std::string arg = argv[i];

        if (arg.compare("--silent") == 0)
        {
            m_Verbose = false;
        }

        if (arg.compare("--optimize-rendering") == 0)
        {
            RCLCPP_INFO(rclcpp::get_logger("info"), "Using optimize-rendering command");

            m_OptimizeRendering = true;
        }

        if (arg.compare("--ai") == 0)
        {   // Note :  this is the default Simulation Engine's state.
            RCLCPP_INFO(rclcpp::get_logger("info"), "Ego car driving with AI Driver");
            m_ServerEgoCarUseAI = true;
            m_ClientEgoCarUseAI = true;
        }

        if (arg.compare("--physics-step") == 0)
        {
            if (!isValidArgumentValue(argc, argv, i))
            {
                invalidArgs = true;
                break;
            }
            m_PhysicsStep = std::stoi(argv[i + 1]);
            if (m_PhysicsStep <= 0)
            {
                invalidArgs = true;
                break;
            }
        }

        if (arg.compare("--render-fps") == 0)
        {
            if (!isValidArgumentValue(argc, argv, i))
            {
                invalidArgs = true;
                break;
            }
            m_RenderFPS = std::stoi(argv[i + 1]);
            if (m_RenderFPS <= 0)
            {
                invalidArgs = true;
                break;
            }
        }

        if (arg.compare("--wakeup-every-steps") == 0)
        {
            if (!isValidArgumentValue(argc, argv, i))
            {
                invalidArgs = true;
                break;
            }
            m_WakeupEverySteps = std::stoi(argv[i + 1]);
            if (m_WakeupEverySteps <= 0)
            {
                invalidArgs = true;
                break;
            }
        }
    }

    if (invalidArgs)
    {
        RCLCPP_ERROR(rclcpp::get_logger("error"), "Invalid arguments!");
        showUsage();
        throw INVALID_ARGUMENTS;
    }

    RCLCPP_INFO(rclcpp::get_logger("info"), "Connection String: %s",
                                                    m_ConnectionString.c_str());
}

void SampleCode::connectToSimulation()
{
    m_Err = COGNATA_ERR_CONNECTION_FAILED;
    RCLCPP_INFO(rclcpp::get_logger("info"), "Connecting to engine");

    while (m_Err != COGNATA_ERR_OK)
    {
        m_Err = m_Sim->connectToEngine(m_ConnectionString);
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }

    THROW_IF_ERR("Failed to connect to server.", SERVER_CONNECTION_FAILED);

    RCLCPP_INFO(rclcpp::get_logger("info"), "Connected to engine");
}

void SampleCode::waitForSimulationToLoad()
{
    RCLCPP_INFO(rclcpp::get_logger("info"), "Loading Scene");
    bool isLoading = true;

    while (isLoading)
    {
        m_Err = m_Sim->isLoadingScene(isLoading);
        THROW_IF_ERR("isLoadingScene Failed.", QUERY_LOADING_SCENE_FAILED);
    }

    RCLCPP_INFO(rclcpp::get_logger("info"), "Loading Finished");
}

void SampleCode::queryEngineVersion()
{
    // Engine version
    std::string versions;
    RCLCPP_INFO(rclcpp::get_logger("info"), "Get Engine Version");

    m_Err = m_Sim->getEngineVersion(versions);

    THROW_IF_ERR("Failed to get Engine version", QUERY_ENGINE_VERSION_FAILED);

    RCLCPP_INFO(rclcpp::get_logger("info"), "Cognata Engine version: %s", 
                                                              versions.c_str());
}

void SampleCode::queryTerrain()
{
    // Terrain
    std::string terrainName;
    RCLCPP_INFO(rclcpp::get_logger("info"), "Get Terrain");
    m_Err = m_Sim->getTerrain(terrainName);

    THROW_IF_ERR("Failed to get Terrain", QUERY_TERRAIN_FAILED);

    RCLCPP_INFO(rclcpp::get_logger("info"), "Terrain: %s", terrainName.c_str());
}

void SampleCode::queryAllCarsInitalInformation()
{
    std::vector<CarQueryReport> carList;
    RCLCPP_INFO(rclcpp::get_logger("info"), "Get cars");

    m_Err = m_Sim->getCarsInfo(carList);
    THROW_IF_ERR("getCarInfo Failed.", QUERY_CARS_INFO_FAILED);

    for (auto car : carList)
    {
        RCLCPP_INFO(rclcpp::get_logger("info"), "=========================");
        RCLCPP_INFO(rclcpp::get_logger("info"), "Car:");
        RCLCPP_INFO(rclcpp::get_logger("info"), "Name = %s", 
                                                 car.name().c_str());
        RCLCPP_INFO(rclcpp::get_logger("info"), "Brand = %s", 
                                                 car.brand().c_str());
        SDKVector3 velocity = car.velocity();
        RCLCPP_INFO(rclcpp::get_logger("info"), 
                                      "Velocity = %f, %f, %f", 
                                      velocity.x(), velocity.y(), velocity.z());
        SDKVector3 acceleration = car.acceleration();
        RCLCPP_INFO(rclcpp::get_logger("info"), 
                          "Acceleration = %f, %f, %f", 
                          acceleration.x(), acceleration.y(), acceleration.z());
        RCLCPP_INFO(rclcpp::get_logger("info"), 
                                       "ROI Object Id = %d", 
                                       car.roiobjectid());
        SDKBoundingBox carBoundingbox = car.boundingbox();
        SDKVector3 position = carBoundingbox.transform().position();
        RCLCPP_INFO(rclcpp::get_logger("info"), 
                                      "Position = %f, %f, %f", 
                                      position.x(), position.y(), position.z());
        SDKVector3 rotation = carBoundingbox.transform().rotation();
        RCLCPP_INFO(rclcpp::get_logger("info"), "Rotation = %f, %f, %f", 
                                      rotation.x(), rotation.y(), rotation.z());
        RCLCPP_INFO(rclcpp::get_logger("info"), "height = %f", 
                                                       carBoundingbox.height());
        RCLCPP_INFO(rclcpp::get_logger("info"), "width = %f", 
                                                        carBoundingbox.width());
        RCLCPP_INFO(rclcpp::get_logger("info"), "length = %f", 
                                                       carBoundingbox.length());
        RCLCPP_INFO(rclcpp::get_logger("info"), "lane id = %d", 
                                                 car.locationparams().laneid());
        RCLCPP_INFO(rclcpp::get_logger("info"), "Politeness = %f", 
                                            car.behaviourparams().politeness());
        RCLCPP_INFO(rclcpp::get_logger("info"), "SafetyTime = %f", 
                                            car.behaviourparams().safetytime());
        RCLCPP_INFO(rclcpp::get_logger("info"), "Comfortable Braking = %f", 
                                    car.behaviourparams().comfortablebraking());
        RCLCPP_INFO(rclcpp::get_logger("info"), "Desired Speed = %f", 
                                          car.behaviourparams().desiredspeed());
        RCLCPP_INFO(rclcpp::get_logger("info"), "Desired Interval = %f", 
                                       car.behaviourparams().desiredinterval());
        RCLCPP_INFO(rclcpp::get_logger("info"), "=========================");
    }
}

void SampleCode::queryAllMovingObjectsInitialInformation()
{
    std::vector<MovingObjectQueryReport> movingObjectList;
    RCLCPP_INFO(rclcpp::get_logger("info"), "Get MovingObjects");

    m_Err = m_Sim->getMovingObjectInfo(movingObjectList);
    if (m_Err != COGNATA_ERR_OK)
    {
        RCLCPP_ERROR(rclcpp::get_logger("error"), 
                    "getMovingObjectInfo Failed. Return code: %s",
                    CognataErr_Name(m_Err).c_str());
    }
    else
    {
        for (auto obj : movingObjectList)
        {
            RCLCPP_INFO(rclcpp::get_logger("info"), "=========================");
            RCLCPP_INFO(rclcpp::get_logger("info"), "Moving Obj:");
            RCLCPP_INFO(rclcpp::get_logger("info"), "Name = %s", 
                                                            obj.name().c_str());
            RCLCPP_INFO(rclcpp::get_logger("info"), "Brand = %s", 
                                                           obj.brand().c_str());
            RCLCPP_INFO(rclcpp::get_logger("info"), "ROI Object Id = %d", 
                                                             obj.roiobjectid());
                                                             
            SDKBoundingBox objBoundingbox = obj.boundingbox();
            SDKVector3 position = objBoundingbox.transform().position();
            SDKVector3 rotation = objBoundingbox.transform().rotation();

            RCLCPP_INFO(rclcpp::get_logger("info"), 
                                           "Position = %f, %f, %f", 
                                           position.x(), position.y(), position.z());
            RCLCPP_INFO(rclcpp::get_logger("info"), 
                                           "Rotation = %f, %f, %f", 
                                           rotation.x(), rotation.y(), rotation.z());
            RCLCPP_INFO(rclcpp::get_logger("info"), 
                                           "height = %f", 
                                           objBoundingbox.height());
            RCLCPP_INFO(rclcpp::get_logger("info"), 
                                           "width = %f", 
                                           objBoundingbox.width());
            RCLCPP_INFO(rclcpp::get_logger("info"), 
                                           "length = %f", 
                                           objBoundingbox.length());
            RCLCPP_INFO(rclcpp::get_logger("info"), 
                                           "lane id = %d", 
                                           obj.locationparams().laneid());

            int numOfPathPoints = obj.path().waypoints_size();
            RCLCPP_INFO(rclcpp::get_logger("info"), 
                              "Number of waypoints: %d (X,Y)", numOfPathPoints);
            for (int i = 0; i < numOfPathPoints; ++i)
            {
                RCLCPP_INFO(rclcpp::get_logger("info"), "waypoint %d (%f , %f)", 
                    i, obj.path().waypoints(i).x(), obj.path().waypoints(i).y());
            }
            RCLCPP_INFO(rclcpp::get_logger("info"), "=========================");
        }
    }
}
void SampleCode ::queryGlobalSensors()
{
    std::vector<GlobalSensorQueryReport> globalSensorList;
    RCLCPP_INFO(rclcpp::get_logger("info"), "Get Global sensors");
    m_Err = m_Sim->getGlobalSensors(globalSensorList);
    THROW_IF_ERR("getGlobalSensors", QUERY_GLOBAL_SENSORS_FAILD);

    m_DogtSensorList.clear();
    // go over all global sensors and print their params
    for (auto sensor : globalSensorList)
    {
        RCLCPP_INFO(rclcpp::get_logger("info"), "=========================");
        RCLCPP_INFO(rclcpp::get_logger("info"), "Sensor:");
        RCLCPP_INFO(rclcpp::get_logger("info"), "Name = %s", sensor.name().c_str());
        RCLCPP_INFO(rclcpp::get_logger("info"), "ID = %d", sensor.sensorid());
        RCLCPP_INFO(rclcpp::get_logger("info"), "FPS = %d", sensor.fps());

        switch (sensor.QueryType_case())
        {

        case GlobalSensorQueryReport::kDOGTReport:
        {
            m_DogtSensorList.push_back(sensor);

            RCLCPP_INFO(rclcpp::get_logger("info"), "Found DOGT Sensor at id: %d",
                                                        (int)sensor.sensorid());
            break;
        }

        default:
            break;
        }

        RCLCPP_INFO(rclcpp::get_logger("info"), "=========================");
    }
}

void SampleCode::queryEgoCarSensors()
{
    // query ego car sensors
    std::vector<SensorQueryReport> sensorList;
    RCLCPP_INFO(rclcpp::get_logger("info"), "Get sensors");
    m_Err = m_Sim->getSensorsInfo(sensorList);
    THROW_IF_ERR("getSensorInfo Failed", QUERY_SENSORS_FAILED);

    m_ROISensorList.clear();
    m_CarTelemetriesSensorList.clear();
    m_GpsSensorList.clear();
    m_RadarSensorList.clear();
    m_RgbCameraSensorList.clear();
    m_DcsDepthCameraSensorList.clear();
    m_DchDepthCameraSensorList.clear();
    m_LdoLidarSensorList.clear();
    m_LdgLidarSensorList.clear();
    m_EngineToClientSensorList.clear();
    m_ClassLabelingSensorList.clear();
    m_InstanceLabelingSensorList.clear();
    m_LaneDetectorSensorList.clear();

    for (auto sensor : sensorList)
    {
        RCLCPP_INFO(rclcpp::get_logger("info"), "=========================");
        RCLCPP_INFO(rclcpp::get_logger("info"), "Sensor:");
        RCLCPP_INFO(rclcpp::get_logger("info"), 
                                       "Name = %s", 
                                       sensor.name().c_str());
        SDKVector3 position = sensor.transform().position();
        RCLCPP_INFO(rclcpp::get_logger("info"), 
                                      "Position = %f, %f, %f", 
                                      position.x(), position.y(), position.z());
        SDKVector3 rotation = sensor.transform().rotation();
        RCLCPP_INFO(rclcpp::get_logger("info"), 
                                      "Rotation(Roll, Pitch, Yaw) = %f, %f, %f",
                                      rotation.x(), rotation.y(), rotation.z());

        switch (sensor.QueryType_case())
        {
        case SensorQueryReport::kRoiReport:
            {
                RCLCPP_INFO(rclcpp::get_logger("info"), "*** ROI sensor Position is irrelevant ***");
                m_ROISensorList.push_back(sensor);
                if (m_ROISensorList.size() > 1)
                {
                    RCLCPP_WARN(rclcpp::get_logger("info"), 
                    "*** more than 1 ROI sensor found, this should not happen! ***");
                }
            } break;
        case SensorQueryReport::kGpsReport:
            {
                m_GpsSensorList.push_back(sensor);

                m_GPSPosition[0] = position.x();
                m_GPSPosition[1] = position.y();
                m_GPSPosition[2] = position.z();
                RCLCPP_INFO(rclcpp::get_logger("info"), 
                                               "Found GPS Sensor at id: %d",
                                               (int)sensor.sensorid());
            } break;
        case SensorQueryReport::kRgbCameraReport:
            {
                m_RgbCameraSensorList.push_back(sensor);

                RGBCameraConfig rgbConfig = sensor.rgbcamerareport();
                RCLCPP_INFO(rclcpp::get_logger("info"), "Camera Width: %d",
                                                        rgbConfig.width());
                RCLCPP_INFO(rclcpp::get_logger("info"), "Camera height: %d",
                                                        rgbConfig.height());
                RCLCPP_INFO(rclcpp::get_logger("info"), "Horizontal FOV: %f",
                                                        rgbConfig.hfov());
                RCLCPP_INFO(rclcpp::get_logger("info"), "Vertical FOV: %f",
                                                        rgbConfig.vfov());
            } break;
        case SensorQueryReport::kRadarReport:
            {
                m_RadarSensorList.push_back(sensor);
            } break;
        case SensorQueryReport::kDepthCameraReport:
            {
                DepthCameraConfig depthConfig = sensor.depthcamerareport();

                if (depthConfig.dcdatatype() == 0)
                {
                    m_DchDepthCameraSensorList.push_back(sensor);
                }
                else
                {
                    m_DcsDepthCameraSensorList.push_back(sensor);
                }
                
                RCLCPP_INFO(rclcpp::get_logger("info"), 
                                               "Depth Camera Width: %d",
                                               depthConfig.width());
                RCLCPP_INFO(rclcpp::get_logger("info"),
                                               "Depth Camera height: %d",
                                               depthConfig.height());
                RCLCPP_INFO(rclcpp::get_logger("info"),
                                               "Depth Camera Horizontal FOV: %f",
                                               depthConfig.hfov());
                RCLCPP_INFO(rclcpp::get_logger("info"),
                                               "Depth Camera Vertical FOV: %f",
                                               depthConfig.vfov());
                RCLCPP_INFO(rclcpp::get_logger("info"),
                                               "DC Data Type: %d",
                                               depthConfig.dcdatatype());
            } break;
        case SensorQueryReport::kLidarReport:
            {
                LidarConfig lidarConfig = sensor.lidarreport();
                
                if (lidarConfig.slr() == 0)
                {
                    m_LdoLidarSensorList.push_back(sensor);
                }
                else
                {
                    m_LdgLidarSensorList.push_back(sensor);
                }
            } break;
        case SensorQueryReport::kSlClassReport:
            {
                m_ClassLabelingSensorList.push_back(sensor);
                RCLCPP_INFO(rclcpp::get_logger("info"),
                                    "Found SL Class Sensor at id: %d, name: %s",
                                    (int)sensor.sensorid());
            } break;
        case SensorQueryReport::kSlInstanceReport:
            {
                m_InstanceLabelingSensorList.push_back(sensor);
                RCLCPP_INFO(rclcpp::get_logger("info"), 
                                           "Found SL Instance Sensor at id: %d",
                                           (int)sensor.sensorid());
            } break;
        case SensorQueryReport::kE2CReport:
            {
                m_EngineToClientSensorList.push_back(sensor);
            } break;
        case SensorQueryReport::kLaneDetectorReport:
            {
                m_LaneDetectorSensorList.push_back(sensor);
            } break;
        case SensorQueryReport::kCarTelemetriesReportFieldNumber:
            {
                m_CarTelemetriesSensorList.push_back(sensor);
            } break;
        default:
            break;
        }

        RCLCPP_INFO(rclcpp::get_logger("info"), "=========================");
    }

    // if the engine reqested ROI with no GPS, alert the user that it is not possible and do not register the ROI sensor
    if ((m_ROISensorList.empty() == false) && (m_GpsSensorList.empty() == true))
    {
        RCLCPP_ERROR(rclcpp::get_logger("error"), 
            "ROI Sensor cannot be used without a GPS Sensor. ROI Sensor will be turned off");
        m_ROISensorList.clear();
    }
}

void SampleCode::modifyDOGTParams()
{
    // modify dynamic object GT params
    if (m_DogtSensorList.empty() == false)
    {
        VERBOSE_MSG("Modify Dynamic Object GT" << std::endl);
        //TODO: defensivness vs more than one ROI sensor? same telemetries, dogt etc

        for (const auto& sensorInfo : m_DogtSensorList)
        {
            DOGTModifiable* dogtModifiable = new DOGTModifiable();
            dogtModifiable->set_fps(27);
            dogtModifiable->set_record(true);
            m_Err = m_Sim->setSensorParam<DOGTModifiable>(
                               (uint32_t)sensorInfo.sensorid(), dogtModifiable);

            THROW_IF_ERR("setSensorParam (Dynamic Object GT) Failed.", 
                                                       SET_SENSOR_PARAM_FAILED);
        }
    }
}

void SampleCode::registerSensors()
{
    // Register Sensors
    // -----------------------------------------------------------
    // Register your Sensor Handlers here
    
    if (m_ROISensorList.empty() == false)
    {
        RCLCPP_INFO(rclcpp::get_logger("info"), "Register ROI Sensor ");
        for (const auto& sensorInfo : m_ROISensorList)
        {
            std::shared_ptr<OEM_ROIProcessing> sensor;
            TRY_CATCH(sensor = std::make_shared<OEM_ROIProcessing>(m_EgoData,
                                                                   m_ClosestTarget,
                                                                   sensorInfo,
                                                                   m_PublisherNode);
                                                                   )

            m_MyROIProcessing.push_back(sensor);
            m_Err = m_Sim->registerSensor<ROIOutput>(EgoCarNumber,
                                                (uint32_t)sensorInfo.sensorid(),
                                                *sensor);

            THROW_IF_ERR("registerSensor (ROI) Failed.", REGISTER_ROI_FAILED);
        }
    }

    if (m_GpsSensorList.empty() == false)
    {
        RCLCPP_INFO(rclcpp::get_logger("info"), "Register GPS Sensors");
        for (const auto& sensorInfo : m_GpsSensorList)
        {
            std::shared_ptr<OEM_GPSProcessing> sensor;
            TRY_CATCH(sensor = std::make_shared<OEM_GPSProcessing>(m_EgoData,
                                                                   m_GPSPosition,
                                                                   sensorInfo,
                                                                   m_PublisherNode);
                                                                   )

            m_MyGPSProcessing.push_back(sensor);
            m_Err = m_Sim->registerSensor<GPSOutput>(EgoCarNumber,
                                                (uint32_t)sensorInfo.sensorid(),
                                                *sensor);

            THROW_IF_ERR("registerSensor (GPS) Failed.", REGISTER_GPS_FAILED);
        }
    }

    if (m_LdoLidarSensorList.empty() == false)
    {
        RCLCPP_INFO(rclcpp::get_logger("info"), "Register Lidar Sensor ");
        for (const auto& sensorInfo : m_LdoLidarSensorList)
        {
            std::shared_ptr<OEM_LdoLidarProcessing> sensor;
            TRY_CATCH(sensor = std::make_shared<OEM_LdoLidarProcessing>(m_EgoData,
                                                                        m_GPSPosition,
                                                                        sensorInfo,
                                                                        m_PublisherNode);
                                                                        )
            
            m_MyLdoLidarProcessing.push_back(sensor);
            m_Err = m_Sim->registerSensor<LidarOutput>(EgoCarNumber,
                                                (uint32_t)sensorInfo.sensorid(),
                                                *sensor);

            THROW_IF_ERR("registerSensor (LDO Lidar) Failed.", REGISTER_LIDAR_FAILED);
        }
    }

    if (m_LdgLidarSensorList.empty() == false)
    {
        RCLCPP_INFO(rclcpp::get_logger("info"), "Register Lidar Sensor ");
        for (const auto& sensorInfo : m_LdgLidarSensorList)
        {
            std::shared_ptr<OEM_LdgLidarProcessing> sensor;
            TRY_CATCH(sensor = std::make_shared<OEM_LdgLidarProcessing>(m_EgoData,
                                                                        m_GPSPosition,
                                                                        sensorInfo,
                                                                        m_PublisherNode);
                                                                        )
            
            m_MyLdgLidarProcessing.push_back(sensor);
            m_Err = m_Sim->registerSensor<LidarOutput>(EgoCarNumber,
                                                (uint32_t)sensorInfo.sensorid(),
                                                *sensor);

            THROW_IF_ERR("registerSensor (LDG Lidar) Failed.", REGISTER_LIDAR_FAILED);
        }
    }

    if (m_RgbCameraSensorList.empty() == false)
    {
        RCLCPP_INFO(rclcpp::get_logger("info"), "Register RGBCamera Sensor ");
        for (const auto& sensorInfo : m_RgbCameraSensorList)
        {
            std::shared_ptr<OEM_RGBCameraProcessing> sensor;
            TRY_CATCH(sensor = std::make_shared<OEM_RGBCameraProcessing>(m_EgoData,
                                                                         m_GPSPosition,
                                                                         sensorInfo,
                                                                         m_PublisherNode);)
            
            m_MyRGBCameraProcessing.push_back(sensor);
            m_Err = m_Sim->registerSensor<RGBCameraOutput>(EgoCarNumber,
                                                (uint32_t)sensorInfo.sensorid(),
                                                *sensor);

            THROW_IF_ERR("registerSensor (RGB Camera) Failed.", REGISTER_RGB_FAILED);
        }
    }

    if (m_DchDepthCameraSensorList.empty() == false)
    {
        RCLCPP_INFO(rclcpp::get_logger("info"), "Register DepthCamers Sensor ");
        for (const auto& sensorInfo : m_DchDepthCameraSensorList)
        {
            std::shared_ptr<OEM_DchDepthCameraProcessing> sensor;
            TRY_CATCH(sensor = std::make_shared<OEM_DchDepthCameraProcessing>(m_EgoData,
                                                                              m_GPSPosition,
                                                                              sensorInfo,
                                                                              m_PublisherNode);
                                                                              )

            m_MyDchDepthCameraProcessing.push_back(sensor);
            m_Err = m_Sim->registerSensor<DepthCameraOutput>(EgoCarNumber,
                                                (uint32_t)sensorInfo.sensorid(),
                                                *sensor);

            THROW_IF_ERR("registerSensor (Dch Depth Camera) Failed.",
                                                      REGISTER_DEPTHCAM_FAILED);
        }       
    }

    if (m_DcsDepthCameraSensorList.empty() == false)
    {
        RCLCPP_INFO(rclcpp::get_logger("info"), "Register DepthCamers Sensor ");
        for (const auto& sensorInfo : m_DcsDepthCameraSensorList)
        {
            std::shared_ptr<OEM_DcsDepthCameraProcessing> sensor;
            TRY_CATCH(sensor = std::make_shared<OEM_DcsDepthCameraProcessing>(m_EgoData,
                                                                              m_GPSPosition,
                                                                              sensorInfo,
                                                                              m_PublisherNode);
                                                                              )
            
            m_MyDcsDepthCameraProcessing.push_back(sensor);
            m_Err = m_Sim->registerSensor<DepthCameraOutput>(EgoCarNumber,
                                                (uint32_t)sensorInfo.sensorid(),
                                                *sensor);

            THROW_IF_ERR("registerSensor (Depth Camera) Failed.",
                                                      REGISTER_DEPTHCAM_FAILED);
        }       
    }

    if (m_RadarSensorList.empty() == false)
    {
        RCLCPP_INFO(rclcpp::get_logger("info"), "Register Radar Sensor ");
        for (const auto& sensorInfo : m_RadarSensorList)
        {
            std::shared_ptr<OEM_RadarProcessing> sensor;
            TRY_CATCH(sensor = std::make_shared<OEM_RadarProcessing>(m_EgoData,
                                                                     m_GPSPosition,
                                                                     sensorInfo,
                                                                     m_PublisherNode);)
            
            m_MyRadarProcessing.push_back(sensor);
            m_Err = m_Sim->registerSensor<RadarOutput>(EgoCarNumber,
                                                      (uint32_t)sensorInfo.sensorid(),
                                                      *sensor);

            THROW_IF_ERR("registerSensor (Radar) Failed.", REGISTER_Radar_FAILED);
        }       
    }

    if (m_EngineToClientSensorList.empty() == false)
    {
        RCLCPP_INFO(rclcpp::get_logger("info"), "Register E2C Sensor ");
        for (const auto& sensorInfo : m_EngineToClientSensorList)
        {
            std::shared_ptr<OEM_E2CCProcessing> sensor;
            TRY_CATCH(sensor = std::make_shared<OEM_E2CCProcessing>();)
            
            m_MyE2CProcessing.push_back(sensor);
            m_Err = m_Sim->registerSensor<E2COutput>(EgoCarNumber,
                                                    (uint32_t)sensorInfo.sensorid(),
                                                    *sensor);

            THROW_IF_ERR("registerSensor (E2C) Failed.", REGISTER_E2C_FAILED);
        }
    }

    if (m_LaneDetectorSensorList.empty() == false)
    {
        RCLCPP_INFO(rclcpp::get_logger("info"), "Register LaneDetector sensors ");
        for (const auto& sensorInfo : m_LaneDetectorSensorList)
        {
            std::shared_ptr<OEM_LaneDetectorProcessing> sensor;
            TRY_CATCH(sensor = std::make_shared<OEM_LaneDetectorProcessing>(m_EgoData,
                                                                            sensorInfo,
                                                                            m_PublisherNode);)
            
            m_MyLDProcessing.push_back(sensor);
            m_Err = m_Sim->registerSensor<LaneDetectorOutput>(EgoCarNumber,
                                                (uint32_t)sensorInfo.sensorid(),
                                                *sensor);

            THROW_IF_ERR("registerSensor (LaneDetector) Failed.",
                                                REGISTER_LANE_DETECTOR_FAILED);
        }
    }

    if (m_CarTelemetriesSensorList.empty() == false)
    {
        RCLCPP_INFO(rclcpp::get_logger("info"), "Register Car Telemetries sensor ");

        for (const auto& sensorInfo : m_CarTelemetriesSensorList)
        {
            std::shared_ptr<OEM_CarTelemetriesProcessing> sensor;
            TRY_CATCH(sensor = std::make_shared<OEM_CarTelemetriesProcessing>(
                                                                sensorInfo,
                                                                m_PublisherNode);)
            
            m_MyTelemetriesProcessing.push_back(sensor);
            m_Err = m_Sim->registerSensor<CarTelemetriesOutput>(EgoCarNumber,
                                                (uint32_t)sensorInfo.sensorid(),
                                                *sensor);

            THROW_IF_ERR("registerSensor (Car Telemetries) Failed.",
                                               REGISTER_CAR_TELEMETRIES_FAILED);
        }
    }

    if (m_ClassLabelingSensorList.empty() == false)
    {
        RCLCPP_INFO(rclcpp::get_logger("info"), "Register Semantic Class Labeling Sensor ");
        for (const auto& sensorInfo : m_ClassLabelingSensorList)
        {
            std::shared_ptr<OEM_SCLProcessing> sensor;
            TRY_CATCH(sensor = std::make_shared<OEM_SCLProcessing>(m_EgoData,
                                                                   m_GPSPosition,
                                                                   sensorInfo,
                                                                   m_PublisherNode);)

            m_MySClassLProcessing.push_back(sensor);
            m_Err = m_Sim->registerSensor<SemanticClassLabelingOutput>(
                                                EgoCarNumber,
                                                (uint32_t)sensorInfo.sensorid(),
                                                *sensor);

            THROW_IF_ERR("registerSensor (SCL) Failed.", REGISTER_SCL_FAILED);
        }       
    }

    if (m_InstanceLabelingSensorList.empty() == false)
    {
        RCLCPP_INFO(rclcpp::get_logger("info"), "Register Semantic Instance Labeling Sensor ");
        for (const auto& sensorInfo : m_InstanceLabelingSensorList)
        {
            std::shared_ptr<OEM_SILProcessing> sensor;
            TRY_CATCH(sensor = std::make_shared<OEM_SILProcessing>(m_EgoData,
                                                                   m_GPSPosition,
                                                                   sensorInfo,
                                                                   m_PublisherNode);)
            
            m_MySInstanceLProcessing.push_back(sensor);
            m_Err = m_Sim->registerSensor<SemanticInstanceLabelingOutput>(
                                                EgoCarNumber,
                                                (uint32_t)sensorInfo.sensorid(),
                                                *sensor);

            THROW_IF_ERR("registerSensor (SIL) Failed.", REGISTER_SCL_FAILED);
        }
    }
}

void SampleCode::registerGlobalSensors()
{
    // Place your code here:
    // --------------------
    // Register your Global Sensor Handlers

    // Connecting the Dynamic Object Ground Truth reports

    RCLCPP_INFO(rclcpp::get_logger("info"), "Register DOGT Sensor ");
    for (const auto& sensorInfo : m_DogtSensorList)
    {
        if (m_DogtSensorList.size() > 1)
        {
            RCLCPP_WARN(rclcpp::get_logger("info"), 
            "*** more than 1 DOGT sensor found, this should not happen! ***");
        }
        std::shared_ptr<OEM_DOGTProcessing> sensor;
        TRY_CATCH(sensor = std::make_shared<OEM_DOGTProcessing>(m_EgoData,
                                                                sensorInfo,
                                                                m_PublisherNode);)

        m_MyDOGTProcessing.push_back(sensor);
        m_Err = m_Sim->registerSensor<DynamicObjectGroundTruthOutput>(
                                                (uint32_t)sensorInfo.sensorid(),
                                                *sensor);

        THROW_IF_ERR("registerSensor (DOGT) Failed.", REGISTER_DOGT_FAILED);
    }
}

void SampleCode::configureSimulation()
{
    // Place your code here:
    // --------------------
    // Change the following code if you want to configure the simulation

    // set configuration parameters
    ConfigurationCommand *configurationCommand = new ConfigurationCommand();

    // time step configuration
    TimeStepConfig *timeStepConfig = new TimeStepConfig();

    configurationCommand->set_optimizerendering(m_OptimizeRendering);

    if (m_PhysicsStep >= 0)
    {
        timeStepConfig->set_fixeddeltatime((float)(m_PhysicsStep) / 1000.0f);
        RCLCPP_INFO(rclcpp::get_logger("info"), "Fixed Delta Time: %f",
                                              timeStepConfig->fixeddeltatime());
    }
    else
    {
        RCLCPP_ERROR(rclcpp::get_logger("error"),
                            "Invalid Fixed Delta Time: %d. Unexpected results.",
                            m_PhysicsStep);
    }

    if (m_RenderFPS > 0)
    {
        timeStepConfig->set_fps((uint32_t)m_RenderFPS);
        RCLCPP_INFO(rclcpp::get_logger("info"), "FPS: %d", timeStepConfig->fps());
    }
    else
    {
        RCLCPP_ERROR(rclcpp::get_logger("error"),
                                         "Invalid FPS: %d. Unexpected results.",
                                         m_RenderFPS);
    }

    if (m_WakeupEverySteps >= 0)
    {
        timeStepConfig->set_wakeupeverysteps((float)m_WakeupEverySteps);
        RCLCPP_INFO(rclcpp::get_logger("info"), "Wakeup Every Steps: %f",
                                            timeStepConfig->wakeupeverysteps());
    }
    else
    {
        RCLCPP_ERROR(rclcpp::get_logger("error"),
                          "Invalid Wakeup Every Steps: %d. Unexpected results.",
                          m_WakeupEverySteps);
    }
    configurationCommand->set_allocated_timestepconfig(timeStepConfig);

    // set configuration
    m_Err = m_Sim->setConfiguration(configurationCommand);

    THROW_IF_ERR("setConfiguration Failed.", SET_CONFIGURATION_FAILED);
}

void SampleCode::setConfigureVersions()
{
    VersionCommand *pVersionCommand = new VersionCommand();
    pVersionCommand->set_sdkversion(m_Sim->getSDKVersion());
    pVersionCommand->set_oemversion("ROS2Client v-0.14.0");

    m_Err = m_Sim->setVersionCommand(pVersionCommand);

    THROW_IF_ERR("setConfigureVersions Failed.", SET_CONFIGURATION_FAILED);
}

void SampleCode::startSimulation()
{
    // Start the simulation (in blocking mode)
    // ---------------------------------------

    RCLCPP_INFO(rclcpp::get_logger("info"), "Starting simulation (blocking)");

    m_Err = m_Sim->start(BLOCKING);

    THROW_IF_ERR("Failed to start simulation.", START_SIMULATION_FAILED);
}

void SampleCode::printSampleMenu()
{
    // Sample code menu
    if (m_ServerEgoCarUseAI == true)
    {
        RCLCPP_INFO(rclcpp::get_logger("info"), "Using Engine AI");
    }
	else
	{
		RCLCPP_INFO(rclcpp::get_logger("info"), "Using SDK driving");
	}

    if (m_OptimizeRendering == true)
    {
        RCLCPP_INFO(rclcpp::get_logger("info"), "Using Optimize Rendering");
    }

    RCLCPP_INFO(rclcpp::get_logger("info"), "-----------------");
    RCLCPP_INFO(rclcpp::get_logger("info"), "Keyboard commands:");
    RCLCPP_INFO(rclcpp::get_logger("info"), "-----------------");

    RCLCPP_INFO(rclcpp::get_logger("info"), "'1' - Increase Gas");
    RCLCPP_INFO(rclcpp::get_logger("info"), "'2' - Decrease Gas");
    RCLCPP_INFO(rclcpp::get_logger("info"), "'3' - Increase Brake");
    RCLCPP_INFO(rclcpp::get_logger("info"), "'4' - Decrease Brake");
	RCLCPP_INFO(rclcpp::get_logger("info"), "'W' - Increase Acceleration / Decrease Brake");
    RCLCPP_INFO(rclcpp::get_logger("info"), "'S' - Decrease Acceleration / Increase Brake");
    RCLCPP_INFO(rclcpp::get_logger("info"), "'A' - Turn Left");
    RCLCPP_INFO(rclcpp::get_logger("info"), "'D' - Turn Right");

    RCLCPP_INFO(rclcpp::get_logger("info"), "'P' - Pause/Resume simulation");
    RCLCPP_INFO(rclcpp::get_logger("info"), "'M' - Enable Manual Driving. Disables Engine AI driving");
	RCLCPP_INFO(rclcpp::get_logger("info"), "'N' - Enable Using Engine AI. Disables Manual driving");

    RCLCPP_INFO(rclcpp::get_logger("info"), "'Q' - Exit the simulation");
}


void SampleCode::initSimEngineCarDriver()
{
    // By default the Simulation Engine starts with an AI driver.
    // If we want to START the simulation with Manual/SDK driving we need to trigger it by sending ANY driving command.
    if (m_ServerEgoCarUseAI == false)
    {
        m_Err = m_Sim->sendCarControlAccelerationCmd(EgoCarNumber,m_SrvGas - m_SrvBrake);
        THROW_IF_ERR("Send manual driver failed for partial message.", SEND_PARTIAL_MANUAL_DRIVER_FAILED);
        RCLCPP_INFO(rclcpp::get_logger("info"), "Initializing Sim Engine driver to Manual / SDK driving.");
    }
    else
    {
        // do nothing.
    }
    
}

void SampleCode::sampleMainLoop()
{
    // main Simulation loop - thread blocking
    // -----------------------------------------------------------
    m_IsRunning = true;

    while (m_IsRunning)
    {
        m_KeyPressed = -1;

        m_Err = m_Sim->isRunning(m_IsRunning);

        THROW_IF_ERR("isRunning failed.", QUERY_SIMULATION_RUNNING_FAILED);

        if (m_Pause == false)
        {
            // By calling advanceFramesAndBlockForMessages the OEM framework:
            // 1) Signals ready for next sensor frames to Simulation
            // 2) Activates SDK data listening loop;
            // 3) Blocks the thread until a message is received
            // 4) Advance to next frame
            m_Err = m_Sim->advanceFramesAndBlockForMessages(m_MessageTimeoutInSec); // thread blocking call

            if (m_Err == COGNATA_ERR_DISCONNECTED)
            {
                RCLCPP_FATAL(rclcpp::get_logger("error"), 
                    "advanceFramesAndBlockForMessages disconnected.Return code: %s", 
                    CognataErr_Name(m_Err).c_str());
                throw ADVANCE_FRAMES_DISCONNECTED;
            }

            THROW_IF_ERR("advanceFramesAndBlockForMessages failed.", 
                                                         ADVANCE_FRAMES_FAILED);

            // get data and place it in sensor class member
            m_Err = m_Sim->dispatchMessages();

            THROW_IF_ERR("dispatchMessages failed.", DISPATCH_MESSAGES_FAILED);

            // Place your code here:
            // ---------------------
        }

        // Based on sensor data processing send new commands to simulated ego car
        // Send car commands to control the vehicle
        // ----------------------------------------------------------------------
        // Place your code here:
        // ---------------------
        // Here you generate new ego car commands based on Sensor Fusion and Policy
        sendNewCommands();
    }
}

void SampleCode::sendNewCommands()
{
    // Read and publish keyboard input
    processKeypress();

    getSimulationParams();

    // check for exit key
    if (m_KeyPressed == 'Q')
    {
        releaseKeyboard();
        RCLCPP_INFO(rclcpp::get_logger("info"), "Q pressed, exiting");
        m_Err = m_Sim->stop(22, "Sample disengagement");
        m_IsRunning = false;
    }
}

void SampleCode::disconnect()
{
    // Disconnect - House keeping, cleaning resources even though the resources will be closed properly
    // -----------------------------------------------------------------------------------
    RCLCPP_INFO(rclcpp::get_logger("info"), "disconnecting");

    m_Err = m_Sim->disconnectFromEngine();

    THROW_IF_ERR("disconnect failed.", DISCONNECT_FAILED);
}

void SampleCode::recalcAcceleration()
{
    m_ClientAcceleration = m_ClientGas - m_ClientBrake;
}

void SampleCode::increaseAcceleration()
{
    recalcAcceleration();
    if (m_ClientAcceleration >= 0)
    {
        m_ClientAcceleration = std::min(m_ClientAcceleration + k_GasStep, k_GasMax);
        m_ClientGas = m_ClientAcceleration;
        m_ClientBrake = 0.0f;
    }
    else
    {
        m_ClientAcceleration = std::min(m_ClientAcceleration + k_BrakeStep, k_BrakeMax);
        if (m_ClientAcceleration < 0)
        {
            m_ClientBrake = std::max(-1*m_ClientAcceleration, k_BrakeMin);
            m_ClientGas = 0;
        }
        else // we tipped it over
        {
            m_ClientGas = std::max(0.0f, k_GasMin);
            m_ClientBrake = 0.0f;
            recalcAcceleration();
        }
    }
}

void SampleCode::decreaseAcceleration()
{
    recalcAcceleration();
    if (m_ClientAcceleration > 0)
    {
        m_ClientAcceleration = std::max(m_ClientAcceleration - k_GasStep, -1*k_BrakeMax);
        if (m_ClientAcceleration > 0)
        {
            m_ClientGas = m_ClientAcceleration;
            m_ClientBrake = 0.0f;
        }
        else // we tipped it over
        {
            m_ClientBrake = std::min(-1*m_ClientAcceleration,k_BrakeMin);
            m_ClientGas = 0.0f;
            recalcAcceleration();
        }
    }
    else // m_ClientAcceleration =< 0
    {
        m_ClientAcceleration = std::max(m_ClientAcceleration - k_BrakeStep, -1*k_BrakeMax);
        m_ClientBrake = -1*m_ClientAcceleration;
        m_ClientGas = 0.0f;
    }
}

void SampleCode::publishCarControlCommand(DrivingCommandParts cmd_type)
{
    std::shared_ptr<std_msgs::msg::Float32> command;
    TRY_CATCH(command = std::make_shared<std_msgs::msg::Float32>();)
    
    switch (cmd_type)
    {
        case GAS_CMD :
        {
            command->data = m_ClientGas;
            m_CarGasCMDPublisher->publish(*command);
            break;
        }

        case BRAKES_CMD :
        {
            command->data = m_ClientBrake;
            m_CarBrakeCMDPublisher->publish(*command);
            break;
        }

        case STEERING_CMD :
        {
            command->data = m_ClientSteering;
            m_CarSteerCMDPublisher->publish(*command);
            break;
        }

        case ACCELERATION_CMD :
        {
            command->data = m_ClientAcceleration;
            m_CarAccelerationCMDPublisher->publish(*command);
            break;  
        }
    }
}

void SampleCode::processKeypress()
{
    m_KeyPressed = getKey();

    if (m_KeyPressed != -1)
    {
        switch (m_KeyPressed)
        {
            //using ROS intraproccess communication for car controls
        	case '1': // increase gas
            { 
                if (m_ClientEgoCarUseAI == false)
                {
                    m_ClientGas = std::min(m_ClientGas + k_GasStep, k_GasMax);
                    recalcAcceleration();
                    publishCarControlCommand(GAS_CMD);
                }
                break;
            }
			
			case '2': // decrease gas
            {
                if (m_ClientEgoCarUseAI == false)
                {
                    m_ClientGas = std::max(m_ClientGas - k_GasStep, k_GasMin);
                    recalcAcceleration();
                    publishCarControlCommand(GAS_CMD);
                }
                break;
            }

            case '3': // increase brakes
            { 
                if (m_ClientEgoCarUseAI == false)
                {
                    m_ClientBrake = std::min(m_ClientBrake + k_BrakeStep, k_BrakeMax);
                    recalcAcceleration();
                    publishCarControlCommand(BRAKES_CMD);
                }
                break;
            }
			
			case '4': // decrease brakes
            {
                if (m_ClientEgoCarUseAI == false)
                {
                    m_ClientBrake = std::max(m_ClientBrake - k_BrakeStep, k_BrakeMin);
                    recalcAcceleration();
                    publishCarControlCommand(BRAKES_CMD);
                }
                break;
            }
			
			case 'W': // increase acceleration
            {
                if (m_ClientEgoCarUseAI == false)
                {
                    increaseAcceleration();
                    publishCarControlCommand(ACCELERATION_CMD);
                }
                break;
            }

            case 'S': // decrease acceleration
            {
                if (m_ClientEgoCarUseAI == false)
                {
                    decreaseAcceleration();
                    publishCarControlCommand(ACCELERATION_CMD);
                }
                break;
            }
     
            case 'D':
            {
                if (m_ClientEgoCarUseAI == false)
                {
                    //intraproccess communication for car controls
                    m_ClientSteering = std::min(m_ClientSteering + k_SteeringStep, k_SteeringMax);
                    publishCarControlCommand(STEERING_CMD);
                }
                break;
            }

            case 'A':
            {
                if (m_ClientEgoCarUseAI == false)
                {
                    //intraproccess communication for car controls
                    m_ClientSteering = std::max(m_ClientSteering - k_SteeringStep, k_SteeringMin);
                    publishCarControlCommand(STEERING_CMD);
                }
                break;
            }

            case 'P':
            {
                m_Pause = !m_Pause;

                // Sample code :
                // Pause is not an SDK command. 
                // It is added here for convenience only. Hence it does not have a dedicated ROS publisher and subscriver
                // and this variable is defacto a cross server-client variable.
                // If needed - either :
                //    a. add a pause-request ROS command 
                // or 
                //    b. Advace by frames using the SDK's command : CognataSim::advanceFramesAndBlockForMessages(float timeoutInSeconds)

                RCLCPP_INFO(rclcpp::get_logger("info"), "Pause: %d", m_Pause);
                break;
            }

            case 'M':
            {
                std::shared_ptr<std_msgs::msg::Int8> command;
                TRY_CATCH(command = std::make_shared<std_msgs::msg::Int8>();)
                command->data = -1;
                m_CarDriverPublisher->publish(*command);

                m_ClientEgoCarUseAI = false;
                RCLCPP_INFO(rclcpp::get_logger("info"), "Ego Car Use AI: %d", m_ClientEgoCarUseAI);

                // sending an acceleraion command to activate the manual driving :
                recalcAcceleration();
                publishCarControlCommand(ACCELERATION_CMD);
                break;
            }
			
			case 'N':
            {
                std::shared_ptr<std_msgs::msg::Int8> command;
                TRY_CATCH(command = std::make_shared<std_msgs::msg::Int8>();)
                command->data = 1;
                m_CarDriverPublisher->publish(*command);
                
                m_ClientEgoCarUseAI = true;
                RCLCPP_INFO(rclcpp::get_logger("info"), "Ego Car Use AI: %d", m_ClientEgoCarUseAI);
                break;
            }
        }
    }
}


void SampleCode::getSimulationParams()
{
    // get current simulation time
    float time = 0;
    m_Err = m_Sim->getCurrSimulationTime(time);

    THROW_IF_ERR("Get current Simulation Time failed.", QUERY_SIMULATION_TIME_FAILED);

    m_Dt = time - m_LastTime;
    m_LastTime = time;

    // get current frame
    unsigned int frame;
    m_Err = m_Sim->getCurrFrame(frame);

    THROW_IF_ERR("Get current Simulation Frame failed.", QUERY_SIMULATION_FRAME_FAILED);
}

void SampleCode::carGasCMDCallback(const std_msgs::msg::Float32::SharedPtr msg)
{
    m_SrvGas = (float)msg->data;

    std::string logMessage("Car Command: partial driving command msg format : ");
    logMessage += "Gas: " + std::to_string(m_SrvGas);
    
    verifyValidValues(m_SrvSteering, m_SrvGas, m_SrvBrake, m_SrvAcceleration);

    m_Err = m_Sim->sendCarControlGasCmd(EgoCarNumber,m_SrvGas);
    THROW_IF_ERR("Send manual driver failed for partial message.", SEND_PARTIAL_MANUAL_DRIVER_FAILED);
    
    // The SDK does not check if we are in a Manual or AI Driving states. Sending car control commands automatically 
    // switches off the AI driving control and hands over the vehicle control to the SDK. Hence we'll update the local state variable :
    m_ServerEgoCarUseAI = false;

    // Add Engine-Log message (optional)
    m_Err = m_Sim->log(1, logMessage);
    THROW_IF_ERR("log failed.", LOG_CAR_COMMAND_FAILED);
    // Add ROS2 log message
    RCLCPP_INFO(rclcpp::get_logger("info"), "Updated Gas to %f. Last SENT values: [Steering = %f, Gas = %f, Brake = %f, Acceleration = %f] ",m_SrvGas, m_SrvSteering, m_SrvGas, m_SrvBrake, m_SrvAcceleration);
}

void SampleCode::carBrakeCMDCallback(const std_msgs::msg::Float32::SharedPtr msg)
{
    m_SrvBrake = (float)msg->data;

    std::string logMessage("Car Command: partial driving command msg format : ");
    logMessage += "Brake: " + std::to_string(m_SrvBrake);

    verifyValidValues(m_SrvSteering, m_SrvGas, m_SrvBrake, m_SrvAcceleration);

    m_Err = m_Sim->sendCarControlBrakesCmd(EgoCarNumber,m_SrvBrake);
    THROW_IF_ERR("Send manual driver failed for partial message.", SEND_PARTIAL_MANUAL_DRIVER_FAILED);

    // The SDK does not check if we are in a Manual or AI Driving states. Sending car control commands automatically 
    // switches off the AI driving control and hands over the vehicle control to the SDK. Hence we'll update the local state variable :
    m_ServerEgoCarUseAI = false;
    
    // Add Engine-Log message (optional)
    m_Err = m_Sim->log(1, logMessage);
    THROW_IF_ERR("log failed.", LOG_CAR_COMMAND_FAILED);
    // Add ROS2 log message
    RCLCPP_INFO(rclcpp::get_logger("info"), "Updated Brake to %f. Last SENT values: [Steering = %f, Gas = %f, Brake = %f, Acceleration = %f] ",m_SrvBrake, m_SrvSteering, m_SrvGas, m_SrvBrake, m_SrvAcceleration);
}

void SampleCode::carSteerCMDCallback(const std_msgs::msg::Float32::SharedPtr msg)
{
    m_SrvSteering = (float)msg->data;

    std::string logMessage("Car Command: partial driving command msg format : ");
    logMessage += "Steering: " + std::to_string(m_SrvSteering);

    verifyValidValues(m_SrvSteering, m_SrvGas, m_SrvBrake, m_SrvAcceleration);

    m_Err = m_Sim->sendCarControlSteeringCmd(EgoCarNumber,m_SrvSteering);
    THROW_IF_ERR("Send manual driver failed for partial message.", SEND_PARTIAL_MANUAL_DRIVER_FAILED);

    // The SDK does not check if we are in a Manual or AI Driving states. Sending car control commands automatically 
    // switches off the AI driving control and hands over the vehicle control to the SDK. Hence we'll update the local state variable :
    m_ServerEgoCarUseAI = false;
    
    // Add Engine-Log message (optional)
    m_Err = m_Sim->log(1, logMessage);
    THROW_IF_ERR("log failed.", LOG_CAR_COMMAND_FAILED);
    // Add ROS2 log message
    RCLCPP_INFO(rclcpp::get_logger("info"), "Updated Steering to %f. Last SENT values: [Steering = %f, Gas = %f, Brake = %f, Acceleration = %f] ",m_SrvSteering, m_SrvSteering, m_SrvGas, m_SrvBrake, m_SrvAcceleration);
}

void SampleCode::carAccelerationCMDCallback(const std_msgs::msg::Float32::SharedPtr msg)
{
    m_SrvAcceleration = (float)msg->data;

    std::string logMessage("Car Command: partial driving command msg format : ");
    logMessage += "Acceleration: " + std::to_string(m_SrvAcceleration);

    verifyValidValues(m_SrvSteering, m_SrvGas, m_SrvBrake, m_SrvAcceleration);

    m_Err = m_Sim->sendCarControlAccelerationCmd(EgoCarNumber,m_SrvAcceleration);
    THROW_IF_ERR("Send manual driver failed for partial message.", SEND_PARTIAL_MANUAL_DRIVER_FAILED);

    // The SDK does not check if we are in a Manual or AI Driving states. Sending car control commands automatically 
    // switches off the AI driving control and hands over the vehicle control to the SDK. Hence we'll update the local state variable :
    m_ServerEgoCarUseAI = false;
    
    // Add Engine-Log message (optional)
    m_Err = m_Sim->log(1, logMessage);
    THROW_IF_ERR("log failed.", LOG_CAR_COMMAND_FAILED);    
    // Add ROS2 log message
    RCLCPP_INFO(rclcpp::get_logger("info"), "Updated Acceleration to %f. Last SENT values: [Steering = %f, Gas = %f, Brake = %f, Acceleration = %f] ",m_SrvAcceleration, m_SrvSteering, m_SrvGas, m_SrvBrake, m_SrvAcceleration);
}

void SampleCode::carDriverCallback(const std_msgs::msg::Int8::SharedPtr msg)
{
    int8_t aIDriverTurnOn = (int8_t)msg->data;
    if (aIDriverTurnOn > 0)
    {
        uint32_t currCarID = EgoCarNumber;

        m_Err = m_Sim->sendAiDriveCarCmd(currCarID);
        THROW_IF_ERR("Send AI driver failed.", SEND_AI_DRIVER_FAILED);
        
        m_ServerEgoCarUseAI = true;

        // create log message
        std::string logMessage("Car Command: Activate AI Driving.");

        // Add Engine-Log message (optional)
        m_Err = m_Sim->log(1, logMessage);
        THROW_IF_ERR("log failed.", LOG_CAR_COMMAND_FAILED);
        // Add ROS2 log message
        RCLCPP_INFO(rclcpp::get_logger("info"), "Requesting AI Driver activation.");
    }
    else if (aIDriverTurnOn < 0)
    {   // Note : Actual Manual (SDK) Driving for the Simulation Engine is activated by sending driving command (gas/brake/steer/acceleration) and not by this flag.
        // This flag is for sample purposes only.
        m_ServerEgoCarUseAI = false;
        // Add Engine-Log message (optional)
        std::string logMessage("Car Log: Activate Manual Driving flagged. Actual Manual Driving is activated by a driving command and not by this flag.");
        m_Err = m_Sim->log(1, logMessage);
        THROW_IF_ERR("log failed.", LOG_CAR_COMMAND_FAILED);
        
        // Add ROS2 log message
        RCLCPP_INFO(rclcpp::get_logger("info"), "Enabling Manual/SDK driver ");
    }
}

void SampleCode::verifyValidValues(float &steering, float &gas, float &brakes, float &accel)
{
    ClampValue(steering, k_SteeringMin, k_SteeringMax);
    ClampValue(gas, k_GasMin, k_GasMax);
    ClampValue(brakes, k_BrakeMin, k_BrakeMax);
    ClampValue(accel, -1*k_BrakeMax, k_GasMax);
}
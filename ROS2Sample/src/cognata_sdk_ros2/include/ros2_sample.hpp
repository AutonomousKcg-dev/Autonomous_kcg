//
// ros2_sample.hpp - Cognata SDK ROS2 sample header file
//
// Copyright Cognata Ltd. (c) 2018 - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited
// All trade-marks, trade names, service marks and logos referenced herein belong to their respective companies
// Proprietary and confidential

#ifndef __COGNATASAMPLE_H__
#define __COGNATASAMPLE_H__

//SDK
#include <CognataSim.h> 
#include <MathUtils.h>
//ROS
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/int8.hpp>
#include <std_msgs/msg/float32.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>

#include "keyPress.hpp"   //simple keyboard handling for windows and Linux
#include "sensors.hpp"    //sensor definitions

//Error defs
#define ERROR_MSG(msg)\
{\
    std::cerr << msg;\
}

#define IMPORTANT_MSG(msg)\
{\
    std::cout << msg;\
}

#define VERBOSE_MSG(msg)\
if (m_Verbose)\
{\
    std::cout << msg;\
}

#define THROW_IF_ERR(msg,returnCode)\
if (m_Err != Cognata::SDK::COGNATA_ERR_OK)\
{\
    ERROR_MSG(msg << " Return code: " << Cognata::SDK::CognataErr_Name(m_Err) << std::endl);\
    throw returnCode;\
}

#define TRY_CATCH(code)\
try\
{\
    code\
}\
catch (std::exception & e)\
{\
    RCLCPP_ERROR(rclcpp::get_logger("error"), "Error: %s", e.what());\
    throw e;\
}

enum SampleErrorCode
{
    WRONG_NUMBER_OF_ARGUMENTS = 1,
    SERVER_CONNECTION_FAILED,
    QUERY_LOADING_SCENE_FAILED,
    QUERY_ENGINE_VERSION_FAILED,
    QUERY_TERRAIN_FAILED,
    QUERY_CARS_INFO_FAILED,
    QUERY_MOVING_OBJECTS_INFO_FAILED,
    QUERY_SENSORS_FAILED,
    QUERY_GLOBAL_SENSORS_FAILD,
    REGISTER_ROI_FAILED,
    REGISTER_Radar_FAILED,
    REGISTER_GPS_FAILED,
    REGISTER_LIDAR_FAILED,
    REGISTER_RGB_FAILED,
    REGISTER_DEPTHCAM_FAILED,
    REGISTER_SCL_FAILED,
    REGISTER_SIL_FAILED,
    REGISTER_E2C_FAILED,
    REGISTER_DOGT_FAILED,
    REGISTER_LANE_DETECTOR_FAILED,
    REGISTER_CAR_TELEMETRIES_FAILED,
    SET_CONFIGURATION_FAILED,
    SET_SENSOR_PARAM_FAILED,
    START_SIMULATION_FAILED,
    QUERY_SIMULATION_RUNNING_FAILED,
    ADVANCE_FRAMES_DISCONNECTED,
    ADVANCE_FRAMES_FAILED,
    DISPATCH_MESSAGES_FAILED,
    LOG_CAR_COMMAND_FAILED,
    DISCONNECT_FAILED,
    SEND_MANUAL_DRIVER_FAILED,
    SEND_PARTIAL_MANUAL_DRIVER_FAILED,
    SEND_AI_DRIVER_FAILED,
    QUERY_SIMULATION_TIME_FAILED,
    QUERY_SIMULATION_FRAME_FAILED,
    INVALID_ARGUMENTS
};

enum DrivingCommandParts
{
    UNDEFINED = 1,
    UNSUPPORTED = 2,
    GAS_CMD = 3,
    BRAKES_CMD = 4,
    STEERING_CMD = 5,
    ACCELERATION_CMD = 6
};

const std::string usageString =
R"foo(
usage: CognataSample <IP> <Port> [--ai]
                    [--physics-step <miliseconds>] [--render-fps <fps>]
                    [--wakeup-every-steps <steps>]
                    [--silent]
                    [--optimize-rendering]
The arguments' description is as follows:

    <IP>                                    - Simulation host IP address
    <Port>                                  - Simulation host port
    --ai                                    - Sets simulation to drive autonomously
    --physics-step          <miliseconds>   - Sets simulation physics step to 'milliseconds'
    --render-fps            <fps>           - Sets simulation render FPS to 'fps'
    --wakeup-every-steps   <steps>          - Sets simulation wakeup rate to 'steps'
    --silent                                - Sets CognataSample output mode to silent
    --optimize-rendering                    - Sets RGB features off between desired FPS rendering
)foo";


class SampleCode
{
public:
    SampleCode();
    ~SampleCode();

    void run(int argc, char **argv);

private:
    void rosInitialize();
    void createSimulation();
    void showUsage();
    bool isValidArgumentValue(int argc, char** argv, int argNameIdx);
    void parseCommandLineParameters(int argc, char **argv);
    void connectToSimulation();
    void waitForSimulationToLoad();
    void queryEngineVersion();
    void queryTerrain();
    void queryAllCarsInitalInformation();
    void queryAllMovingObjectsInitialInformation();
    void queryEgoCarSensors();
    void queryGlobalSensors();
    void modifyDOGTParams();
    void registerSensors();
    void registerGlobalSensors();
    void configureSimulation();
    void setConfigureVersions();
    void startSimulation();
    void printSampleMenu();
    void initSimEngineCarDriver();
    void sampleMainLoop();
    void sendNewCommands();
    void disconnect();
    void processKeypress();
    void getSimulationParams();
    void carGasCMDCallback(const std_msgs::msg::Float32::SharedPtr msg);
    void carBrakeCMDCallback(const std_msgs::msg::Float32::SharedPtr msg);
    void carSteerCMDCallback(const std_msgs::msg::Float32::SharedPtr msg);
    void carAccelerationCMDCallback(const std_msgs::msg::Float32::SharedPtr msg);
    void carDriverCallback(const std_msgs::msg::Int8::SharedPtr msg);
    
    void verifyValidValues(float& steering, float& gas, float& brakes, float &accel);
	void increaseAcceleration();
    void decreaseAcceleration();
    void recalcAcceleration();
    void publishCarControlCommand(DrivingCommandParts cmd_type);

    std::string m_ConnectionString;
    Eigen::Vector3f m_GPSPosition;
    Cognata::SDK::CognataErr m_Err = Cognata::SDK::COGNATA_ERR_OK;
    
    // Constants that will be set once in a run
    float m_MessageTimeoutInSec = 300.0f;
    std::unique_ptr<Cognata::SDK::CognataSim> m_Sim = nullptr;

    bool m_ClientEgoCarUseAI = true;
    bool m_ServerEgoCarUseAI = true;
    bool m_OptimizeRendering = true;

    // ROS nodes
    rclcpp::Node::SharedPtr m_SubscriberNode;
    rclcpp::Node::SharedPtr m_PublisherNode;

    //Subscribers
    rclcpp::Subscription<std_msgs::msg::Int8>::SharedPtr m_CarDriverSubsciber;
    rclcpp::Subscription<std_msgs::msg::Float32>::SharedPtr m_CarGasCMDSubsciber;
    rclcpp::Subscription<std_msgs::msg::Float32>::SharedPtr m_CarBrakeCMDSubsciber;
    rclcpp::Subscription<std_msgs::msg::Float32>::SharedPtr m_CarSteerCMDSubsciber;
    rclcpp::Subscription<std_msgs::msg::Float32>::SharedPtr m_CarAccelerationCMDSubsciber;

    // Publishers
    rclcpp::Publisher<std_msgs::msg::Int8>::SharedPtr m_CarDriverPublisher;
    rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr m_CarGasCMDPublisher;
    rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr m_CarBrakeCMDPublisher;
    rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr m_CarSteerCMDPublisher;
    rclcpp::Publisher<std_msgs::msg::Float32>::SharedPtr m_CarAccelerationCMDPublisher;

    //Sensor IDs for registration
    std::vector<Cognata::SDK::SensorQueryReport> m_ROISensorList;
    std::vector<Cognata::SDK::SensorQueryReport> m_CarTelemetriesSensorList;
    std::vector<Cognata::SDK::SensorQueryReport> m_GpsSensorList;
    std::vector<Cognata::SDK::SensorQueryReport> m_RadarSensorList;
    std::vector<Cognata::SDK::SensorQueryReport> m_RgbCameraSensorList;
    std::vector<Cognata::SDK::SensorQueryReport> m_DcsDepthCameraSensorList;
    std::vector<Cognata::SDK::SensorQueryReport> m_DchDepthCameraSensorList;
    std::vector<Cognata::SDK::SensorQueryReport> m_LdoLidarSensorList;
    std::vector<Cognata::SDK::SensorQueryReport> m_LdgLidarSensorList;
    std::vector<Cognata::SDK::SensorQueryReport> m_EngineToClientSensorList;
    std::vector<Cognata::SDK::SensorQueryReport> m_ClassLabelingSensorList;
    std::vector<Cognata::SDK::SensorQueryReport> m_InstanceLabelingSensorList;
    std::vector<Cognata::SDK::SensorQueryReport> m_LaneDetectorSensorList;
    // //global
    std::vector<Cognata::SDK::GlobalSensorQueryReport> m_DogtSensorList;
    
    //Sensor pointers
    std::vector<std::shared_ptr<OEM_GPSProcessing> > m_MyGPSProcessing;
    std::vector<std::shared_ptr<OEM_RadarProcessing> > m_MyRadarProcessing;
    std::vector<std::shared_ptr<OEM_LdoLidarProcessing> > m_MyLdoLidarProcessing;
    std::vector<std::shared_ptr<OEM_LdgLidarProcessing> > m_MyLdgLidarProcessing;
    std::vector<std::shared_ptr<OEM_RGBCameraProcessing> > m_MyRGBCameraProcessing;
    std::vector<std::shared_ptr<OEM_DchDepthCameraProcessing> > m_MyDchDepthCameraProcessing;
    std::vector<std::shared_ptr<OEM_DcsDepthCameraProcessing> > m_MyDcsDepthCameraProcessing;
    std::vector<std::shared_ptr<OEM_E2CCProcessing> > m_MyE2CProcessing;
    std::vector<std::shared_ptr<OEM_LaneDetectorProcessing> > m_MyLDProcessing;
    std::vector<std::shared_ptr<OEM_SCLProcessing> > m_MySClassLProcessing;
    std::vector<std::shared_ptr<OEM_SILProcessing> > m_MySInstanceLProcessing;
    std::vector<std::shared_ptr<OEM_ROIProcessing> > m_MyROIProcessing;
    std::vector<std::shared_ptr<OEM_CarTelemetriesProcessing> > m_MyTelemetriesProcessing;
    //global sensors
    std::vector<std::shared_ptr<OEM_DOGTProcessing> > m_MyDOGTProcessing;


    bool m_IsRunning = false;

    int m_KeyPressed = -1;
    bool m_Pause = false; // a sample global variable. Not part of the SDK.

    int m_PhysicsStep = 30;
    int m_RenderFPS = 30;
    int m_WakeupEverySteps = 2;

    bool m_Verbose = true;

    float m_Dt = 0.0f;
    float m_LastTime = 0;

    std::shared_ptr<ClosestTarget> m_ClosestTarget;
    std::shared_ptr<EgoData> m_EgoData;

    //Vehicle control variables - Client (publisher) side :
    float m_ClientSteering = 0.0f;
    float m_ClientGas = 1.0f;
    float m_ClientBrake = 0.0f;
	float m_ClientAcceleration = m_ClientGas - m_ClientBrake;

    //Vehicle control variables - Server (subscriber) side :
    float m_SrvSteering = 0.0f;
    float m_SrvGas = 1.0f;
    float m_SrvBrake = 0.0f;
	float m_SrvAcceleration = m_SrvGas - m_SrvBrake;
	

    //Vehicle control constants
    const float k_GasStep = 0.05f;
    const float k_GasMax = 1.0f;
    const float k_GasMin = 0.0f;
    const float k_BrakeStep = 0.05f;
    const float k_BrakeMax = 1.0f;
    const float k_BrakeMin = 0.0f;
    const float k_SteeringStep = 0.01f;
    const float k_SteeringMax = 1.0f;
    const float k_SteeringMin = -1.0f;
};

#endif // __COGNATASAMPLE_H__

// CognataSim.h
//
// Cognata Simulation Engine SDK
//
// Copyright Cognata Ltd. (c) 2021 - All Rights Reserved
// Unauthorized copying of this file, via any medium is strictly prohibited
// All trade-marks, trade names, service marks and logos referenced herein belong to their respective companies
// Proprietary and confidential
//

#ifndef __COGNATASIM_H__
#define __COGNATASIM_H__

#include <string>
#include <vector>
#if defined(_MSC_VER)
#pragma warning( push )
#pragma warning( disable : 4127 4100 4018 4146 4244 4251 4267 4305 4355 4800 4996)
#endif
#include <ROIOutput.pb.h>
#include <EngineToClientMessage.pb.h>
#include <ClientToEngineMessage.pb.h>
#include <ErrorCodes.pb.h>
#include <google/protobuf/util/json_util.h>
#if defined(_MSC_VER)
#pragma warning( pop )
#endif
#include "CognataSocket.h"

namespace Cognata
{
namespace SDK
{
/*!
 * \brief Base class for sensor output handling
 *
 * The Sensor class is the base class for Sensor output handlers.
 * Extending this class will allow you to register the derived class as a sensor handler using \ref Cognata::SDK::CognataSim::registerSensor
 * "CognataSim::registerSensor" call. After registration, when new output of the specified sensor is received Sensor's \ref Dispatch callback will be call
 * so actaul parsing of the sensor output can take place.
 * \param T - Template param T should be of one of the following classes:
 *  - ROIOutput
 *  - GPSOutput
 *  - LidarOutput
 *  - RGBCameraOutput
*/
template<class T>
class Sensor
{
public:
    Sensor<T>() = default;

    virtual ~Sensor<T>() = default;
    /*!
     * Extend class \ref Cognata::SDK::Sensor "Sensor" and Override this method to handle new SensorOutput messages received from the SimCloud server
     * @param baseInfo general information received from the SimCloud server: simulation step, frame number, simulation time in seconds, etc.
     * @param baseSensorInfo general output received from the sensor.
     * @param data sensor output specific to this sensor type.
     */
    virtual void Dispatch(const EngineToClientMessage& baseInfo, const SensorOutput& baseSensorInfo, const T &data) = 0;

protected:
};

class LoadingState
{
public:
    LoadingState() = default;
    virtual ~LoadingState() = default;

    virtual void NewState(LoadingStateReport::stateType newState) = 0;
};

class CarsInSimulationChange
{
public:
    CarsInSimulationChange() = default;
    virtual ~CarsInSimulationChange() = default;

    virtual void carListChange(const std::vector<CarQueryReport>& carList) = 0;
};

class SpawnObjectCreationInfo
{
    public:
        SpawnObjectCreationInfo();

        void setClientObjectId(const std::string& clientObjectID);
        void setBrandId(const std::string& brandId);

        std::string& getClientObjectId();
        std::string& getBrandId();
        std::vector<Script>& getScripts();

        void addScript(const Script& script);
    protected:
        std::string m_clientObjectId; 
        std::string m_brandId; 
        std::vector<Script> m_scripts;
};

// callbacks
using CameraGT = Sensor<ROIOutput>;

using GPS = Sensor<GPSOutput>;

using Radar = Sensor<RadarOutput>;

using Lidar = Sensor<LidarOutput>;

using RGBCamera = Sensor<RGBCameraOutput>;

using DepthCamera = Sensor<DepthCameraOutput>;

using E2CChannel = Sensor<E2COutput>;

using LaneDetector = Sensor<LaneDetectorOutput>;

using LoadingStateCallback = LoadingState;

using DynamicObjectGT = Sensor<DynamicObjectGroundTruthOutput>;

using CarTelemetries = Sensor<CarTelemetriesOutput>;

using SemanticClassLabeling = Sensor<SemanticClassLabelingOutput>;

using SemanticInstanceLabeling = Sensor<SemanticInstanceLabelingOutput>;

using CarsInSimulationChangeCallback = CarsInSimulationChange;

using ThermalCamera = Sensor<ThermalCameraOutput>;

// Ego car unique ID
const unsigned int EgoCarNumber = 0;

// Default PID Contoller config used by the Simulation Engine:
static const float kDefaultPIDConf_P = 0.15f; // Default PID Controller kP param used by the Simulation Engine
static const float kDefaultPIDConf_I = 0.5f;  // Default PID Controller kI param used by the Simulation Engine
static const float kDefaultPIDConf_D = 0.0f;  // Default PID Controller kD param used by the Simulation Engine

enum runMethod
{
    NON_BLOCKING,
    BLOCKING,
};

/*!
 * \brief Main class for communicating with the SimCloud server.
 *
 * the SimCloud class is the main SDK entry point. it is used to:
 * - Connecting and Disconnecting from the SimCloud server.
 * - Querying the SimCloud server for information about cars, sensors, terrain and moving objects.
 * - registering sensor output handlers
 * -  Configuring the SimCloud simulation.
 * - Starting and stopping the SimCloud simulation.
 *
 * For examples of a full workflow see \ref SampleCode "the sample code"
 *
 */
class CognataSim
{
public:

    // Constructor and destructor
    CognataSim();

    virtual ~CognataSim();

    //! \brief Returns the version of the SDK.
    /*!
     * use this method to retrieve the SDK Version from \ref CognataSim
     * \code
     * class ExampleClass
     * {
     * public:
     *      void useGetSDKVersion()
     *      {
     *          std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
     *          std::string  sdkVersion = mSim->getSDKVersion();
     *        cout << "SimCloud SDK version is" << sdkVersion << endl;
     *      }
     * };
     * \endcode
     *
    \return The version string
    */
    const std::string getSDKVersion();

    /*! \brief Get Simulation Id.
     *
     * Retrieves the Simulation Id from the SimCloud server:
     * \code
     * class ExampleClass
     * {
     * public:
     *      void useGetSimulationId()
     *      {
     *          std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
     *          std::string  simId = mSim->getId();
     *        cout << "SimCloud simulation id is" << simId << endl;
     *      }
     * };
     * \endcode
     *
    \return simulation ID string
    */
    std::string getId();

    // Connection commands
    //----------------------------------------------------------------------------

    /*! Connect to the engine, using a connection string.

     *  \code
     * class ExampleClass
     * {
     * public:
     *     void useConnectToEngine()
     *     {
     *           std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
     *          // connection sting: IP address and port
     *          std::string mConnectionString = "127.0.0.1 12345";
     *          CognataErr error = COGNATA_ERR_CONNECTION_FAILED;
     *          // connect to the server
     *          error = mSim->connectToEngine(mConnectionString);
     *          if (error != COGNATA_ERR_OK)
     *          {
 *                  cerr << "Failed to connect to server. Return code: " << CognataErr_Name(error) << endl;
     *          }
     *              cout << "established connection to server established";
     *     }
     * };
     *  \endcode
     \param connectionString a connection string of the format: IP Port
*    \return COGNATA_ERR_CONNECTION_FAILED on connection failure.
*    \return COGNATA_ERR_OK on connection success.
    */
    CognataErr connectToEngine(const std::string &connectionString);

    CognataErr connectToEngine();

    /*! Disconnect from the SimCloud simulation engine.
    *
     * use this method to disconnect from the SimCloud server.
     * \code
     * class ExampleClass
    *{
    *    private:
    *    std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
    *    public:
    *    void useDisconnectFromEngine()
    *    {
    *        // connection sting: IP address and port
    *        CognataErr error = COGNATA_ERR_CONNECTION_FAILED;
    *        // connect to the server
    *        error = mSim->disconnectFromEngine();
    *        if (error != COGNATA_ERR_OK)
    *        {
    *            cerr << "Failed to disconnect from server. Return code: " << CognataErr_Name(error) << endl;
    *        }
    *        cout << "disconnected from server.";
    *    }
    *};
     *  \endcode
     *
    \return COGNATA_ERR_OK on disconnect success
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send disconnect command
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_UNEXPECTED on unexpected error
    */
    CognataErr disconnectFromEngine();

    //! Register a callback function to receive loading state messages.
    /*!
     * \code
        class ExampleClass
        {
            private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
            public:
            void useRegisterLoadingStateHandler()
            {
                // connection sting: IP address and port
                CognataErr error = COGNATA_ERR_CONNECTION_FAILED;
                // connect to the server
                OEM_LoadingHandler *myLoadingStateHandler = new OEM_LoadingHandler();
                mSim->registerLoadingStateCallback(*myLoadingStateHandler);
                cout << "disconnected from server.";
            }
        };
     * \endcode
    \param loadingState Loading state class, that will be called during loading
    */
    void registerLoadingStateCallback(LoadingState &loadingState);

/**
 * @brief 
 * 
 * @param carsInSimChange Handler for cars in simulation changes
 * @param filterByClient Report only cars created by this client
 * \return COGNATA_ERR_OK on success.
   \return COGNATA_ERR_UNEXPECTED if callback was already registered
 */
    CognataErr registerCarsSimChangedCallback(CarsInSimulationChange* carsInSimChange, bool filterByClient);

    /**
     * @brief Set the Filter In Cars Sim Changed Callback object
     * 
     * @param filterByClient Report only cars created by this client
     * \return COGNATA_ERR_OK on success.
     * \return COGNATA_ERR_UNEXPECTED if callback is not registered
     */
    CognataErr setFilterInCarsSimChangedCallback(bool filterByClient);

    //! returns true if the engine is still loading the scene or false once loading is done.
    /*!
     * \code
     * class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void useWaitForSceneToLoad()
            {
                bool isloading = true;
                CognataErr error;
                while (isloading)
                {
                    error = mSim->isLoadingScene(isloading);
                    if (error != COGNATA_ERR_OK)
                    {
                        cerr << "isLoadingScene Failed. Return code: " << CognataErr_Name(error) << endl;
                    }
                }
                cout << "scene loaded successfully";
            }
        };
     * \endcode

      \param[out] isLoadingScene returns if the engine is still loading the scene.
      \return COGNATA_ERR_OK on success.
      \return COGNATA_ERR_CONNECTION_FAILED on failure to connect to server
    */
    CognataErr isLoadingScene(bool &isLoadingScene);

    //Query Simulation - All query functions are blocking, and should be used after connection,
    // and not after the simulation started
    //----------------------------------------------------------------------------

    //! query Engine version (blocking).
    /*!
     * \code
     *
        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void useGetEngineVersion()
            {
                std::string versions;
                CognataErr error;
                error = mSim->getEngineVersion(versions);
                if (error != COGNATA_ERR_OK)
                {
                    cerr << "Failed to get Engine version. Return code: " << CognataErr_Name(error) << endl;
                }

                cout << "Cognata Engine version: " << versions << endl;
            }
        };
     * \endcode
     *
    \param[out] version returns the Engine's version string.
    \return COGNATA_ERR_OK on success
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_UNEXPECTED on unexpected error
    */
    CognataErr getEngineVersion(std::string &version);

    // Query Studio version (blocking)
    /// @private
    CognataErr geStudioVersion(std::string &version);

    //Set client's name 
    // Should be called before connecting to engine
    //----------------------------------------------------------------------------
    //! Set client's name
    /*!
     * \code
     *
        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void useGetEngineVersion()
            {
                std::string clientName = "My_Name";
                mSim->setSDKClientName(clientName);
                std::string clientFullName = mSim->getSDKClientName();

                cout << "SDK Client name: " << clientFullName << endl;
            }
        };
     * \endcode
     *
    \param clientName client name 
                The name would be concatenated to client's unique signature of IP and port
    */
    void setSDKClientName(const std::string& clientName);

    //Get client's name 
    //----------------------------------------------------------------------------
    //! Set client's name
    /*!
     * \code
     *
        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void useGetEngineVersion()
            {
                std::string clientFullName = mSim->getSDKClientName();

                cout << "SDK Client name: " << clientFullName << endl;
            }
        };
     * \endcode
     *
    \return Client name
    */
    const std::string& getSDKClientName();

    //! Query the number of cars (blocking)
    /*!
     * \code
        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void useGetNumberOfCars()
            {
                CognataErr error;
                unsigned int numberOfCars=0;
                error = mSim->getNumberOfCars(numberOfCars);
                if (error != COGNATA_ERR_OK)
                {
                    cerr << "Failed to get number of cars. Return code: " << CognataErr_Name(error) << endl;
                }

                cout << "Number of cars used in simulation: " << numberOfCars << endl;
            }
        };
     * \endcode
    \param[out] numCars returns the number of cars.
    \return COGNATA_ERR_OK on success
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error
    */
    CognataErr getNumberOfCars(unsigned int &numCars);

    //! Query car's info (blocking)
    //! Query a single car info. If querying multiple cars, use \ref getCarsInfo "getCarsInfo" for greater efficiency.
   /*!
    * \code
    *
        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void useGetCarInfo(unsigned int carId)
            {
                CognataErr error;
                CarQueryReport car;
                error = mSim->getCarInfo(carId,car);
                if (error != COGNATA_ERR_OK)
                {
                    cerr << "getCarInfo Failed. Return code: " << CognataErr_Name(error) << endl;
                    return;
                }
                // access car information
                SDKVector3 velocity = car.velocity();
                cout << "Velocity = " << velocity.x() << ", " << velocity.y() << ", " << velocity.z() << endl;
                SDKBoundingBox carBB = car.boundingbox();
                SDKVector3 position = carBB.transform().position();
                cout << "Position = " << position.x() << ", " << position.y() << ", " << position.z() << endl;
                SDKVector3 rotation = carBB.transform().rotation();
                cout << "Rotation = " << rotation.x() << ", " << rotation.y() << ", " << rotation.z() << endl;
                cout << "height = " << carBB.height() << endl;
                cout << "width = " << carBB.width() << endl;
            }
        };
    * \endcode
    \param carNumber the id of the car.
    \param[out] carInfo returns a <a href="../CognataSimMessages.html#Cognata.SDK.CarQueryReport">CarQueryReport </a> object containing the requested car information.
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error
    */
    CognataErr getCarInfo(unsigned int carNumber, CarQueryReport &carInfo);

    //! Query all MovingObject info (blocking).
    /*!
     * \code
        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void useGetMovingObjectInfo()
            {
                CognataErr error;
                std::vector<MovingObjectQueryReport> movingObjectsList;
                error = mSim->getMovingObjectInfo(movingObjectsList);
                if (error != COGNATA_ERR_OK)
                {
                    cerr << "getMovingObjectInfo Failed. Return code: " << CognataErr_Name(error) << endl;
                }
                else
                {
                    for (auto obj : movingObjectsList)
                    {
                        // access moving object data
                        cout << "Moving Obj:" << endl;
                        cout << "Name = " << obj.name() << endl;
                        cout << "Brand = " << obj.brand() << endl;
                        SDKBoundingBox objBB = obj.boundingbox();
                        SDKVector3 position = objBB.transform().position();
                        cout << "Position = " << position.x() << ", " << position.y() << ", " << position.z() << endl;
                        SDKVector3 rotation = objBB.transform().rotation();
                        cout << "Rotation = " << rotation.x() << ", " << rotation.y() << ", " << rotation.z() << endl;
                        cout << "height = " << objBB.height() << endl;
                        cout << "width = " << objBB.width() << endl;
                        cout << "length = " << objBB.length() << endl;
						int num_of_path_points = obj.path().waypoints_size();
						cout << "Number of waypoints: " << num_of_path_points << "  (X,Y) " << endl;
						for(int i=0; i < num_of_path_points; ++i)
						{
							cout << "waypoint " << i << " (" << obj.path().waypoints(i).x() << " , " << obj.path().waypoints(i).y() << ")" << endl;
						}
                    }
                }

            }
        };
     * \endcode
    \param[out] movingObjectInfoList Returns a list of <a href="../CognataSimMessages.html#Cognata.SDK.MovingObjectQueryReport">MovingObjectQueryReport</a> Objects
     describing all moving Objects in the scene.
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error

    */
    CognataErr getMovingObjectInfo(std::vector<MovingObjectQueryReport> &movingObjectInfoList);

    //! Query the SimCloud server for info on all cars (blocking).
    /*!
     *
     * \code
     *
        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void useGetCarsInfo()
            {
                CognataErr error;
                std::vector<CarQueryReport> carsList;
                error = mSim->getCarsInfo(carsList);
                if (error != COGNATA_ERR_OK)
                {
                    cerr << "getCarInfo Failed. Return code: " << CognataErr_Name(error) << endl;
                    return;
                }

                for (auto car : carsList)
                {

                    cout << "Car:" << endl;
                    cout << "Name = " << car.name() << endl;
                    cout << "Brand = " << car.brand() << endl;
                    SDKVector3 velocity = car.velocity();
                    cout << "Velocity = " << velocity.x() << ", " << velocity.y() << ", " << velocity.z() << endl;
                    SDKBoundingBox carBB = car.boundingbox();
                    SDKVector3 position = carBB.transform().position();
                    cout << "Position = " << position.x() << ", " << position.y() << ", " << position.z() << endl;
                    SDKVector3 rotation = carBB.transform().rotation();
                    cout << "Rotation = " << rotation.x() << ", " << rotation.y() << ", " << rotation.z() << endl;
                    cout << "height = " << carBB.height() << endl;
                    cout << "width = " << carBB.width() << endl;
                    cout << "length = " << carBB.length() << endl;
                }
            }
        };
     * \endcode
    \param[out] carInfoList Returns a list of <a href="../CognataSimMessages.html#Cognata.SDK.CarQueryReport">CarQueryReport</a> objects containing info on all
     cars in the scene.
    \param filterByClientName Filter cars list by sdk client name. If false return a list of all the cars in the scene 
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error
    */
    CognataErr getCarsInfo(std::vector<CarQueryReport> &carInfoList, bool filterByClientName = false);


    //! Query number of sensors (blocking)
    /*!
     *
     *      * \code
        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void useGetNumberOfSensors()
            {
                CognataErr error;
                unsigned int numOfSensors;
                error = mSim->getNumberSensors(numOfSensors);
                if (error != COGNATA_ERR_OK)
                {
                    cerr << "Failed to get number of sensors. Return code: " << CognataErr_Name(error) << endl;
                }

                cout << "Number of sensors used in simulation: " << numOfSensors << endl;
            }
        };
     * \endcode

     *
    \param[out] numSensors returns the number of sensors in ego car.
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error
    */
    CognataErr getNumberSensors(unsigned int &numSensors);

    //! Query number of sensors (blocking)
    /*!
     *
     *      * \code
        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void useGetNumberOfSensors()
            {
                CognataErr error;
                unsigned int numOfSensors;
                uint32_t carID = 0;
                error = mSim->getNumberSensors(carID, numOfSensors);
                if (error != COGNATA_ERR_OK)
                {
                    cerr << "Failed to get number of sensors. Return code: " << CognataErr_Name(error) << endl;
                }

                cout << "Number of sensors used in simulation: " << numOfSensors << endl;
            }
        };
     * \endcode
     * 
    \param carID id of car
    \param[out] numSensors returns the number of sensors in a car.
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error
    */
    CognataErr getNumberSensors(uint32_t carID, unsigned int &numSensors);

    /*! Query sensor's info (blocking) - This is less efficient, please use getSensorsInfo(std::vector<SensorQueryReport> &sensorInfoList) instead.
     If querying multiple sensors, use \ref getCarsInfo "getSensorsInfo" for greater efficiency.
     \code

        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void useGetSensorInfo(unsigned int sensorId)
            {
                CognataErr error;
                SensorQueryReport sensor;
                error = mSim->getSensorInfo(sensorId,sensor);
                if (error != COGNATA_ERR_OK)
                {
                    cerr << "getSensorInfo Failed. Return code: " << CognataErr_Name(error) << endl;
                    return;
                }
                // access global sensor info
                cout << "Name = " << sensor.name() << endl;
                SDKVector3 position = sensor.transform().position();
                cout << "Position = " << position.x() << "," << position.y() << "," << position.z() << endl;
                SDKVector3 rotation = sensor.transform().rotation();
                cout << "Rotation(Roll, Pitch, Yaw) = " << rotation.x() << "," << rotation.y() << "," << rotation.z() << endl;

                // access sensor specific data
                switch (sensor.QueryType_case())
                {
                    case SensorQueryReport::kRgbCameraReport:
                    {
                        RGBCameraConfig rgbConfig = sensor.rgbcamerareport();
                        cout << "Camera Width: " << rgbConfig.width() << endl;
                        cout << "Camera height: " << rgbConfig.height() << endl;
                        break;
                    }

                    // access lidar specific data
                    case SensorQueryReport::kLidarReport:
                    {
                        LidarConfig lidarConfig = sensor.lidarreport();
                        cout << "Lidar Horizontal FoV:" << lidarConfig.hfov() << endl;
                        cout << "Lidar Vertical FoV:" << lidarConfig.vfov() << endl;
                        break;
                    }

                    default:
                        break;
                }
            }
        };
     \endcode
    \param sensorNumber the number of the sensor in ego car.
    \param[out] sensorInfo returns a <a href="../CognataSimMessages.html#Cognata.SDK.SensorQueryReport">SensorQueryReport </a>object containing information about the sensor.
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error

    */
    CognataErr getSensorInfo(unsigned int sensorNumber, SensorQueryReport &sensorInfo);

    /*! Query sensor's info (blocking) - This is less efficient, please use getSensorsInfo(std::vector<SensorQueryReport> &sensorInfoList) instead.
     If querying multiple sensors, use \ref getCarsInfo "getSensorsInfo" for greater efficiency.
     \code

        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void useGetSensorInfo(unsigned int sensorId)
            {
                CognataErr error;
                SensorQueryReport sensor;
                uint32_t carID = 0;
                error = mSim->getSensorInfo(carID, sensorId,sensor);
                if (error != COGNATA_ERR_OK)
                {
                    cerr << "getSensorInfo Failed. Return code: " << CognataErr_Name(error) << endl;
                    return;
                }
                // access global sensor info
                cout << "Name = " << sensor.name() << endl;
                SDKVector3 position = sensor.transform().position();
                cout << "Position = " << position.x() << "," << position.y() << "," << position.z() << endl;
                SDKVector3 rotation = sensor.transform().rotation();
                cout << "Rotation(Roll, Pitch, Yaw) = " << rotation.x() << "," << rotation.y() << "," << rotation.z() << endl;

                // access sensor specific data
                switch (sensor.QueryType_case())
                {
                    case SensorQueryReport::kRgbCameraReport:
                    {
                        RGBCameraConfig rgbConfig = sensor.rgbcamerareport();
                        cout << "Camera Width: " << rgbConfig.width() << endl;
                        cout << "Camera height: " << rgbConfig.height() << endl;
                        break;
                    }

                    // access lidar specific data
                    case SensorQueryReport::kLidarReport:
                    {
                        LidarConfig lidarConfig = sensor.lidarreport();
                        cout << "Lidar Horizontal FoV:" << lidarConfig.hfov() << endl;
                        cout << "Lidar Vertical FoV:" << lidarConfig.vfov() << endl;
                        break;
                    }

                    default:
                        break;
                }
            }
        };
     \endcode
    \param carID id of car
    \param sensorNumber the number of the sensor in ego car.
    \param[out] sensorInfo returns a <a href="../CognataSimMessages.html#Cognata.SDK.SensorQueryReport">SensorQueryReport </a>object containing information about the sensor.
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error
    */
    CognataErr getSensorInfo(uint32_t carID, unsigned int sensorNumber, SensorQueryReport &sensorInfo);

    //! Query all sensor's info (blocking).
    /*!
     * \code
        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void getSensorsInfo()
            {
                CognataErr error;
                std::vector<SensorQueryReport> sensorsList;
                error = mSim->getSensorsInfo(sensorsList);
                if (error != COGNATA_ERR_OK)
                {
                    cerr << "getSensorsInfo Failed. Return code: " << CognataErr_Name(error) << endl;
                    return;
                }

                for (auto sensor : sensorsList)
                {
                    // access global sensor info
                    cout << "Sensor:" << std::endl);
                    cout << "Name = " << sensor.name() << endl;
                    SDKVector3 position = sensor.transform().position();
                    cout << "Position = " << position.x() << "," << position.y() << "," << position.z() << endl;
                    SDKVector3 rotation = sensor.transform().rotation();
                    cout << "Rotation(Roll, Pitch, Yaw) = " << rotation.x() << "," << rotation.y() << "," << rotation.z() << endl;

                    switch (sensor.QueryType_case())
                    {
                        // access specifc sensor info
                        case SensorQueryReport::kRgbCameraReport:
                        {
                            RGBCameraConfig rgbConfig = sensor.rgbcamerareport();
                            cout << "Camera Width: " << rgbConfig.width() << endl;
                            cout << "Camera height: " << rgbConfig.height() << endl;
                            break;
                        }
                        default:
                            break;
                    }

                }
            }
        };
     * \endcode
    \param[out] sensorInfoList Returns a list of <a href="../CognataSimMessages.html#Cognata.SDK.SensorQueryReport">SensorQueryReport </a> objects containing information about all Ego car sensors.
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error    */
    CognataErr getSensorsInfo(std::vector<SensorQueryReport> &sensorInfoList);

    //! Query all sensor's info (blocking).
    /*!
     * \code
        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void getSensorsInfo()
            {
                CognataErr error;
                int carID = 0;
                std::vector<SensorQueryReport> sensorsList;
                error = mSim->getSensorsInfo(carID, sensorsList);
                if (error != COGNATA_ERR_OK)
                {
                    cerr << "getSensorsInfo Failed. Return code: " << CognataErr_Name(error) << endl;
                    return;
                }

                for (auto sensor : sensorsList)
                {
                    // access global sensor info
                    cout << "Sensor:" << std::endl);
                    cout << "Name = " << sensor.name() << endl;
                    SDKVector3 position = sensor.transform().position();
                    cout << "Position = " << position.x() << "," << position.y() << "," << position.z() << endl;
                    SDKVector3 rotation = sensor.transform().rotation();
                    cout << "Rotation(Roll, Pitch, Yaw) = " << rotation.x() << "," << rotation.y() << "," << rotation.z() << endl;

                    switch (sensor.QueryType_case())
                    {
                        // access specifc sensor info
                        case SensorQueryReport::kRgbCameraReport:
                        {
                            RGBCameraConfig rgbConfig = sensor.rgbcamerareport();
                            cout << "Camera Width: " << rgbConfig.width() << endl;
                            cout << "Camera height: " << rgbConfig.height() << endl;
                            break;
                        }
                        default:
                            break;
                    }

                }
            }
        };
     * \endcode
    \param carID id of car
    \param[out] sensorInfoList Returns a list of <a href="../CognataSimMessages.html#Cognata.SDK.SensorQueryReport">SensorQueryReport </a> objects containing information about all Ego car sensors.
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error    */
    CognataErr getSensorsInfo(uint32_t carID, std::vector<SensorQueryReport> &sensorInfoList);

    /*!
    \param[out] globalSensorInfoList Returns a list of all the global sensors in the scene.
    \return Error code
    */
    CognataErr getGlobalSensors(std::vector<SDK::GlobalSensorQueryReport> &globalSensorInfoList);

//! Query terrain name(blocking).
    /*!
     * \code
     *
        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void getTerrainName()
            {
                CognataErr error;
                std::string terrainName;
                error = mSim->getTerrain(terrainName);
                if (error != COGNATA_ERR_OK)
                {
                    cerr << "Failed to get Terrain. Return code: " << CognataErr_Name(error) << endl;
                    return;
                }
                cout << "Terrain name is : " << terrainName << endl << endl;
            }
        };
     * \endcode
    \param[out] terrainName returns the name of the terrain.
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error    */

    CognataErr getTerrain(std::string &terrainName);

    // Modifications
    //----------------------------------------------------------------------------

    //! Modify sensor params for ego car.
    /*!
     * \code
        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void useSetSensorParam()
            {
                CognataErr error;
                // get id of sensor to update
                unsigned int rgbCamSensorId = getIdOfSensorToUpdate();
                RGBCameraModifiable* pRgbCameraModifiable = new RGBCameraModifiable();
                // fill the new parameters
                pRgbCameraModifiable->set_fps(30);
                pRgbCameraModifiable->set_record(true);
                // update the sensor with new parameters
                error = mSim->setSensorParam<RGBCameraModifiable>(rgbCamSensorId, pRgbCameraModifiable);
                if (error != COGNATA_ERR_OK)
                {
                    cerr << "setSensorParam (RGBCamera) Failed. Return code: " << CognataErr_Name(error) << endl;
                    return;
                }

                cout << "setSensorParam (RGBCamera) Succeeded";
            }
        };
     * \endcode
    \param sensorID The ID of the sensor.
    \param params The sensors parameters.
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error
     */
    template<class T>
    CognataErr setSensorParam(unsigned int sensorID, T* params);

    //! \brief Modify a sensor params for any car.
    /*!
     * \code
        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void useSetSensorParam()
            {
                CognataErr error;
                // get id of sensor to update
                unsigned int rgbCamSensorId = getIdOfSensorToUpdate();
                unsigned int carId = getIdOfCarToUpdate();
                RGBCameraModifiable* pRgbCameraModifiable = new RGBCameraModifiable();
                // fill the new parameters
                pRgbCameraModifiable->set_fps(30);
                pRgbCameraModifiable->set_record(true);
                // update the sensor with new parameters
                error = mSim->setSensorParam<RGBCameraModifiable>(carId,rgbCamSensorId, pRgbCameraModifiable);
                if (error != COGNATA_ERR_OK)
                {
                    cerr << "setSensorParam (RGBCamera) Failed. Return code: " << CognataErr_Name(error) << endl;
                    return;
                }

                cout << "setSensorParam (RGBCamera) Succeeded";
            }
        };
     * \endcode
     *
    \param carID The ID of the car.
    \param sensorID The ID of the sensor.
    \param params The sensors parameters.
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error
     */
    template<class T>
    CognataErr setSensorParam(unsigned int carID, unsigned int sensorID, T* params);

    //! \brief Register a callback to receive output of a sensors of the ego car.
    /*!
     * \code
        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void useRegisterSensor()
            {
                CognataErr error;
                // ego car information
                EgoData egoData;
                // position of GPS sensor
                SDKVector3 position;

                // create a new sensor output handler
                OEM_GPSProcessing* mMyGPSProcessing = new OEM_GPSProcessing(&egoData, position);
                // register the sensor output handler. in this example we register a gps sensor handler
                error = mSim->registerSensor<GPSOutput>(GPSID, *mMyGPSProcessing);
                if (error != COGNATA_ERR_OK)
                {
                    cerr << "registerSensor (GPS) Failed. Return code: " << CognataErr_Name(error) << endl;
                    return;
                }
                cout << "Sensor registered successfully";
            }
        };

     * \endcode
    \param sensorID The ID of the sensor.
    \param sensor The sensors callback.
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error
    */
    template<class T>
    CognataErr registerSensor(unsigned int sensorID, Sensor<T> &sensor);

    //! Register a callback to receive output of a sensors of a car.
    /*!
     * \code
        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void useRegisterSensor()
            {
                CognataErr error;
                // ego car information
                EgoData egoData;
                // position of GPS sensor
                SDKVector3 position;

                unsigned int carId = getIdOfCar();

                // create a new sensor output handler
                OEM_GPSProcessing* mMyGPSProcessing = new OEM_GPSProcessing(&egoData, position);
                // register the sensor output handler. in this example we register a gps sensor handler
                error = mSim->registerSensor<GPSOutput>(carId, GPSID, *mMyGPSProcessing);
                if (error != COGNATA_ERR_OK)
                {
                    cerr << "registerSensor (GPS) Failed. Return code: " << CognataErr_Name(error) << endl;
                    return;
                }
                cout << "Sensor registered successfully";
            }
        };
     * \endcode
    \param carID The ID of the car.
    \param sensorID The ID of the sensor.
    \param sensor The sensors callback.
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error
    */
    template<class T>
    CognataErr registerSensor(unsigned int carID, unsigned int sensorID, Sensor<T> &sensor);

/*!
 * \brief set simulation configuration
 * @param config configuration parameters
 *
 * \code
        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void useSetConfiguration()
            {
                CognataErr error;
                // ego car information
                ConfigurationCommand *configurationCommand = new ConfigurationCommand();
                TimeStepConfig *timeStepConfig = new TimeStepConfig();
                // configure fps
                unsigned int fps = 30;
                timeStepConfig->set_fps(fps);
                // configure physical step
                float step = 30.0f/1000.0f;
                timeStepConfig->set_fixeddeltatime(step);
                // set timestep config and send the configuration
                configurationCommand->set_allocated_timestepconfig(timeStepConfig);
                CognataErr mErr = mSim->setConfiguration(configurationCommand);
            }
        };
 * \endcode
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error
 */
    CognataErr setConfiguration(ConfigurationCommand* config);

    // simulation commands
    //----------------------------------------------------------------------------

    //! Start a pre-defined simulation.
    /*!
     * \code
        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void useStartSimulation()
            {
                CognataErr error;
                error = mSim->start(BLOCKING);
                if (error != COGNATA_ERR_OK)
                {
                    cerr << "Failed to start simulation. Return code: " << CognataErr_Name(error) << endl;
                    return;
                }
                cout << "Simulation started successfully" << endl;
            }
        };

     * \endcode
    \param isBlocking blocking or non blocking mode.
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error

    */
    CognataErr start(runMethod isBlocking = BLOCKING);

    //! Stop the simulation with a reason message.
    /*!
     * \code

        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void useStopSimulation()
            {
                CognataErr error;
                error = mSim->stop(22, "Sample disengagement");
                if (error != COGNATA_ERR_OK)
                {
                    cerr << "Failed to stop simulation. Return code: " << CognataErr_Name(error) << endl;
                    return;
                }
                cout << "Simulation stopped successfully" << endl;
            }
        };

     * \endcode
    \param reason - reason for stopping (will be written to log).
    \param msg description for stopping (will be written to log).
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error

    */
    CognataErr stop(int reason, const std::string &msg);

    //! Return current simulation run status.
    /*!
     * \code
        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void useIsRunning()
            {
                CognataErr error;
                bool  mIsRunning = true;
                mSim->isRunning(mIsRunning);
                if( mIsRunning == true )
                {
                    cout << "The simulation is running" << endl;
                } else
                {
                    cout << "The simulation is NOT running" << endl;
                }
            }
        };
     * \endcode
    \param[out] isRunning returns true if the simulation is still running
    \return COGNATA_ERR_OK on success
    */
    CognataErr isRunning(bool &isRunning);

    //! Advanced the simulation, and block until messages containing sensor outputs arrives from the SimCloud server.
    /*!
     *
     * \code
            class ExampleClass
            {
            private:
                std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
            public:
                void useAdvanceFramesAndBlockForMessage()
                {
                    CognataErr error;
                    bool  mIsRunning = true;
                    float mMessageTimeoutInSec = 300.0f;
                    while (mIsRunning)
                    {
                        CognataErr error = COGNATA_ERR_OK;
                        // check if we are still running.
                        error = mSim->isRunning(mIsRunning);
                        // advance the frame and block until a message is received.
                        error = mSim->advanceFramesAndBlockForMessages(mMessageTimeoutInSec); // thread blocking call
                        // activate all messages received in frame by calling the Dispatch method in each connected data processor
                        error = mSim->dispatchMessages();
                        // handle frame complete actions and policy updates (here we are using mockup placeholders:
                        mockupFusion.frameCompleted();
                        mockupPolicy.updatePolicy(mockupEgo);
                        // send new commands to SimCloud
                        sendNewCommands();
                    }
                }
            };
     * \endcode
    \param timeoutInSeconds timeout in seconds, in case the engine is stuck.
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error
    */
    CognataErr advanceFramesAndBlockForMessages(float timeoutInSeconds); // Sends message to simulation ready for next frame, timeout in milliseconds

    //! Returns the current frame number.
    /*!
     * \code
        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void useGetCurrentFrame()
            {
                unsigned int frame;
                mSim->getCurrFrame(frame);
                cout << "Current frame number is: " << frame << endl;
            }
        };

     * \endcode
    \param[out] currFrame returns the current frame number
    \return COGNATA_ERR_OK on success.
    */
    CognataErr getCurrFrame(unsigned int &currFrame) const;

    //! Return current simulation time in seconds.
    /*!
     * \code
        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void useGetCurrentFrame()
            {
                float time;
                mSim->getCurrSimulationTime(time);
                cout << "Current simulation time is: " << time << endl;
            }
        };
     * \endcode
    \param[out] simualtionTimeInSeconds currFrame returns the current time in seconds
    \return COGNATA_ERR_OK on success.
    */
    CognataErr getCurrSimulationTime(float &simualtionTimeInSeconds) const;

    //! Dispatches all sensor messages from the current frame to callbacks
    /*!
     * \code
            class ExampleClass
            {
            private:
                std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
            public:
                void useDispatchMessages()
                {
                    CognataErr error;
                    bool  mIsRunning = true;
                    float mMessageTimeoutInSec = 300.0f;
                    while (mIsRunning)
                    {
                        CognataErr error = COGNATA_ERR_OK;
                        // check if we are still running.
                        error = mSim->isRunning(mIsRunning);
                        // advance the frame and block until a message is received.
                        error = mSim->advanceFramesAndBlockForMessages(mMessageTimeoutInSec); // thread blocking call
                        // activate all messages received in frame by calling the Dispatch method in each connected data processor
                        error = mSim->dispatchMessages();
                        // handle frame complete actions and policy updates (here we are using mockup placeholders:
                        mockupFusion.frameCompleted();
                        mockupPolicy.updatePolicy(mockupEgo);
                        // send new commands to SimCloud
                        sendNewCommands();
                    }
                }
            };
     * \endcode
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error

    */
    CognataErr dispatchMessages();

    // car control
    //----------------------------------------------------------------------------

    //! Sends car command to control the car, by default, the car is driven by AI, once you issue a command, the AI stops, and the car
    //! is only controlled using car commands
    /*!
     * \code
        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void useCarControlCmd()
            {
                CognataErr error;
                unsigned int carId = getIdofCarToControl();
                float gas = calculateGas();
                float brake = calculateBrake();
                float steering = calculateSteering();
                CarCommand* pCarCommand = new CarCommand();

                pCarCommand->set_id(carId);

                // add new car configuration command
                CarConfiguration* pCarConfiguration = new CarConfiguration();
                pCarConfiguration->set_gas(gas);
                pCarConfiguration->set_brake(brake);
                pCarConfiguration->set_steering(steering);
                pCarCommand->set_allocated_drive(pCarConfiguration);

                error = mSim->carControlCmd(pCarCommand);
                if (error != COGNATA_ERR_OK)
                {
                    cerr << "Send manual driver failed. Return code: " << CognataErr_Name(error) << endl;
                    return;
                }

                cout << "Sent Car Command Successfully" << endl;
            }
        };

     * \endcode
    \param pCarCmd The command for the car
    \return Error code
    */
    CognataErr carControlCmd(CarCommand* pCarCmd);

    //! Dispatches a CarCommand for setting the Gas value for the given car. Dispatching this command while using the Simulation Engine's AI driving, 
    // ! automatically disables the AI driving and hands over the control to the SDK.
    /*!
     * \code
            class ExampleClass
            {
            private:
                std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
            public:
                void useSendCarControlGasCmd()
                {
                    CognataErr error;
                    unsigned int carId = getIdofCarToControl(); // Sample function. Replace with your code.
                    float newGasValue = calculateGas(); // Sample function. Replace with your code.

                    error = mSim->sendCarControlGasCmd(carId, newGasValue);
                    if (error != COGNATA_ERR_OK)
                    {
                        cerr << "Send manual driver failed. Return code: " << CognataErr_Name(error) << endl;
                        return;
                    }

                    cout << "Sent Gas Car Command Successfully" << endl;
                }
            };
     * \endcode
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error
    */
    CognataErr sendCarControlGasCmd(uint32_t carID, float gasValue);

    //! Dispatches a CarCommand for setting the Steering value for the given car. Dispatching this command while using the Simulation Engine's AI driving, 
    //! automatically disables the AI driving and hands over the control to the SDK.
    /*!
     * \code
            class ExampleClass
            {
            private:
                std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
            public:
                void useSendCarControlSteeringCmd()
                {
                    CognataErr error;
                    unsigned int carId = getIdofCarToControl(); // Sample function. Replace with your code.
                    float newSteeringValue = calculateSteering(); // Sample function. Replace with your code.

                    error = mSim->sendCarControlSteeringCmd(carId, newSteeringValue);
                    if (error != COGNATA_ERR_OK)
                    {
                        cerr << "Send manual driver failed. Return code: " << CognataErr_Name(error) << endl;
                        return;
                    }

                    cout << "Sent Steering Car Command Successfully" << endl;
                }
            };
     * \endcode
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error
    */

    CognataErr sendCarControlGearCmd(uint32_t carID, Cognata::SDK::CarConfiguration_GearState gearMode);

	//! Dispatches a CarCommand for setting the car Gear mode value for the given car. Gear mode can't be changed when the car is on motion.
 /*!
  * \code
		 class ExampleClass
		 {
		 private:
			 std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
		 public:
			 void useSendCarControlGearModeCmd()
			 {
				 CognataErr error;
				 unsigned int carId = getIdofCarToControl(); // Sample function. Replace with your code.

				error = mSim->sendCarControlGearCmd(carId, Cognata::SDK::CarConfiguration_GearState::REVERSE);
				if (error != COGNATA_ERR_OK)
				{
					cerr << "Send manual driver failed. Return code: " << CognataErr_Name(error) << endl;
					return;
				}

				cout << "Sent Gear Car Command Successfully" << endl;
			 }
		 };
  * \endcode
 \return COGNATA_ERR_OK on success.
 \return COGNATA_ERR_BAD_PARAMS when gearMode is not implemented
 */

    CognataErr sendCarControlSteeringCmd(uint32_t carID, float steeringValue);

    //! Dispatches a CarCommand for setting the car Braking value for the given car. Dispatching this command while using the Simulation Engine's AI driving, 
    //! automatically disables the AI driving and hands over the control to the SDK.
    /*!
     * \code
            class ExampleClass
            {
            private:
                std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
            public:
                void useSendCarControlBrakesCmd()
                {
                    CognataErr error;
                    unsigned int carId = getIdofCarToControl(); // Sample function. Replace with your code.
                    float emergencyBrake = calculateBrakeOverride(); // Sample function. Replace with your code.

                    if (emergencyBrake > 0)
                    {
                        error = mSim->sendCarControlBrakesCmd(carId, emergencyBrake);
                        if (error != COGNATA_ERR_OK)
                        {
                            cerr << "Send manual driver failed. Return code: " << CognataErr_Name(error) << endl;
                            return;
                        }

                        cout << "Sent Braking Car Command Successfully" << endl;
                    }
                }
            };
     * \endcode
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error
    */
    CognataErr sendCarControlBrakesCmd(uint32_t carID, float brakesValue);

    //! DEPRECATED FUNCTION - Use sendCarControlGasMinusBrakeCmd(...) or sendPhysicalAccelerationCmd(...) instead.
    //! Dispatches a CarCommand for setting the Acceleration value for the given car. Dispatching this command while using the Simulation Engine's AI driving, 
    //! automatically disables the AI driving and hands over the control to the SDK. Accepted acceleration values are [-1,1] and are equivelent to modifying 
    //! Gas and Brakes values in a single command. DEPRECATED FUNCTION.
    /*!
     * \code
            class ExampleClass
            {
            private:
                std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
            public:
                void useSendCarControlAccelerationCmd()
                {
                    CognataErr error;
                    unsigned int carId = getIdofCarToControl(); // Sample function. Replace with your code.
                    float newAcceleration = calculateAcceleration(); // Sample function. Replace with your code.

                    error = mSim->sendCarControlAccelerationCmd(carId, newAcceleration);
                    if (error != COGNATA_ERR_OK)
                    {
                        cerr << "Send manual driver failed. Return code: " << CognataErr_Name(error) << endl;
                        return;
                    }

                    cout << "Sent Acceleration Car Command Successfully" << endl;
                }
            };
     * \endcode
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error
    */
    [[deprecated]]
    CognataErr sendCarControlAccelerationCmd(uint32_t carID, float accelerationValue);

    //! Dispatches a CarCommand for setting the GasMinusBrake value for the given car. This function preserves the functionality from the 
    //! deprecated sendCarControlAccelerationCmd(). 
    //! Dispatching this command while using the Simulation Engine's AI driving, automatically disables the AI driving and hands over 
    //! the control to the SDK. Accepted values are [-1,1] and are equivelent to modifying Gas and Brakes values in a single command.
    /*!
     * \code
            class ExampleClass
            {
            private:
                std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
            public:
                void useSendCarControlGasMinusBrakeCmd()
                {
                    CognataErr error;
                    unsigned int carId = getIdofCarToControl(); // Sample function. Replace with your code.
                    float newGasMinusBrakeValue = calculateAcceleration(); // Sample function. Replace with your code.

                    error = mSim->sendCarControlAccelerationCmd(carId, newGasMinusBrakeValue);
                    if (error != COGNATA_ERR_OK)
                    {
                        cerr << "Send manual driver failed. Return code: " << CognataErr_Name(error) << endl;
                        return;
                    }

                    cout << "Sent GasMinusBrake Car Command Successfully" << endl;
                }
            };
     * \endcode
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error
    */
    CognataErr sendCarControlGasMinusBrakeCmd(uint32_t carID, float gasMinusBrakeValue);

    
    //! Dispatches a CarCommand for setting the desired physical acceleration [m/sec^2] value for the given car. 
    //! Once set, the vehicle would automatically and continuously strive to reach this acceleration value. 
    //! If the desired acceleration/decceleration is not physically possible given the vehicle's abilities, a maximal acceleration (or decceleration) 
    //! would be used. 
    //! Dispatching a new sendPhysicalAccelerationCmd() overrides the previous setting.
    //! Dispatching any regular Gas/Brake/GasMinusBrake command turns off the continuous acceleration controller, thus overriding the 
    //! sendPhysicalAccelerationCmd() function.
    //! Dispatching this command while using the Simulation Engine's AI driving, automatically disables the AI driving and hands over 
    //! the control to the SDK. 
    //! Accepted values are in m/sec^2, both positive and negative and are not limitted, though the vehicle would reach only possible accelerations values.
    //! This function replaces and extends the functionality from the deprecated sendCarControlAccelerationCmd() function. 
    /*!
     * \code
            class ExampleClass
            {
            private:
                std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
            public:
                void useSendPhysicalAccelerationCmd()
                {
                    CognataErr error;
                    unsigned int carId = getIdofCarToControl(); // Sample function. Replace with your code.
                    float fixedAcceleration = 3.0f; // setting a desired vehicle acceleration of 3 m/sec^2. U
                    error = mSim->sendPhysicalAccelerationCmd(carId, fixedAcceleration);
                    if (error != COGNATA_ERR_OK)
                    {
                        cerr << "Unable to speed up the car. Send manual driver failed. Return code: " << CognataErr_Name(error) << endl;
                        return;
                    }
                    cout << "Sent PhysicalAcceleration Car Command Successfully" << endl;

                    // do some processes...

                    // gradually slow down the car with a constant decceleration :
                    fixedAcceleration = -0.33f; // setting a desired vehicle acceleration of 3 m/sec^2. U
                    error = mSim->sendPhysicalAccelerationCmd(carId, fixedAcceleration);
                    if (error != COGNATA_ERR_OK)
                    {
                        cerr << "Unable to slow down the car. Send manual driver failed. Return code: " << CognataErr_Name(error) << endl;
                        return;
                    }
                    cout << "Sent PhysicalAcceleration Car Command Successfully" << endl;
                }
            };
     * \endcode
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error
    */
    CognataErr sendPhysicalAccelerationCmd(uint32_t carID, float physicalAccelerationValue);


    //! Dispatches a CarCommand for overriding the default config of the PID controller used for the external/SDK Driver. 
    //! The Simulation Engine uses a PID Controller for dynamically adjusting throttle and braking when a given acceleration is desired,
    //! provided via sendPhysicalAccelerationCmd(). It is not used when exact Gas/Brake/Gas-Minus-Brake are used for car control. 
    //! Usage of the method is optional. Without it the Simulation Engine uses the pre-defined PID coefficients.
    //! The PID configuration can be modified several times and at any time desired, before the simulation starts or during simulation run.
    //! Please note that changing the PID configuration at mid-simulation resets its memory which could affect the initial behavior.
    //! Issuing this command while in Cognata's AI Driving mode does not affect the AI driving, but the setting is stored and applied whenever 
    //! an SDK driving mode commences.
    /*!
     * \code
            class ExampleClass
            {
            private:
                std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
            public:
                void useSendSdkDrivingConfig()
                {
                    CognataErr error;
                    unsigned int carId = getIdofCarToControl(); // Sample function. Replace with your code.
                    
                    // Setting the desired acceleration :
                    // Please note there's no need to set the desired acceleration before setting the PID config. It can be done later as well.
                    float fixedAcceleration = 3.0f; // setting a desired vehicle acceleration of 3 m/sec^2. 
                    error = mSim->sendPhysicalAccelerationCmd(carId, fixedAcceleration);
                    if (error != COGNATA_ERR_OK)
                    {
                        cerr << "Unable to speed up the car. Send manual driver failed. Return code: " << CognataErr_Name(error) << endl;
                        return;
                    }
                    cout << "Sent PhysicalAcceleration Car Command Successfully" << endl;

                    // Alternative PID config :
                    float kp = 0.3;
                    float ki = 0.7;
                    float kd = 0.1;
                    
                    // Overriding the default PID config for the Engine & observing a different automatic adjustment to the desired acceleration :
                    error = mSim->sendSdkDrivingConfig(carID, kp, ki, kd);
                    if (error != COGNATA_ERR_OK)
                    {
                        cerr << "Failed to update PID config for SDK Driver. Return code: " << CognataErr_Name(error) << endl;
                        return;
                    }
                    cout << "Success ! Sent PhysicalAcceleration Car Command with Overriden PID config." << endl;
                }
            };
     * \endcode
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error
    */
    CognataErr sendSdkDrivingConfig(uint32_t carID, float kp, float ki, float kd);


    //! Dispatches a CarCommand for handing over driving control to Simulation Engine's AI driving.
    /*!
     * \code
            class ExampleClass
            {
            private:
                std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
            public:
                void useSendAiDriveCarCmd()
                {
                    CognataErr error;
                    unsigned int carId = getIdofCarToControl(); // Sample function. Replace with your code.
                    bool resumeAIDriving = checkIfEmergencyBrakingEnded(); // Sample function. Replace with your code.

                    if (resumeAIDriving == true)
                    {
                        error = mSim->sendAiDriveCarCmd(carId);
                        if (error != COGNATA_ERR_OK)
                        {
                            cerr << "Send manual driver failed. Return code: " << CognataErr_Name(error) << endl;
                            return;
                        }

                        cout << "Sent Acceleration Car Command Successfully" << endl;
                    }
                    else
                    {
                        cout << "Emergency braking in progress !" << endl;
                    }
                }
            };
     * \endcode
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error
    */
    CognataErr sendAiDriveCarCmd(uint32_t carID);


    //! returns the last error that happened
    /*!
     * \code
        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void setVersionCommand()
            {
                VersionCommand *pVersionCommand = new VersionCommand();
                pVersionCommand->set_sdkversion(mSim->getSDKVersion());
                pVersionCommand->set_oemversion("sampleOemVersion");
                mSim->setVersionCommand(pVersionCommand);
            }
        };
     * \endcode
    \return Error code
    */
    CognataErr setVersionCommand(VersionCommand* versionCommand);

    /**
     * @brief Create cars in simulation
     * 
     * @param spawnCarInfoList List of initial data for creating car
     * @return CognataErr 
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error
     */
    CognataErr sendSpawnCarsCmd(std::vector<SpawnObjectCreationInfo>& spawnCarInfoList);

    /**
     * @brief Delete cars in simulation
     * 
     * @param carIdList List of car ids 
     * 
    \return COGNATA_ERR_OK on success.
    \return COGNATA_ERR_SEND_CMD_FAILED on failure to send request to server
    \return COGNATA_ERR_CONNECTION_FAILED on connection to server failure
    \return COGNATA_ERR_CONNECTION_TIMEOUT on connection timeout
    \return COGNATA_ERR_UNEXPECTED on unexpected error
    */
    CognataErr sendDespawnCarsCmd(std::vector<unsigned int> carIdList);

    /**
     * @brief Set the initial driving speed of vehicle
     * 
     * @param script
     * @param speed 
     */
    void setInitialDrivingSpeed(Script& script, float speed);

    /**
     * @brief Set the desired driving speed of vehicle
     * 
     * @param script
     * @param desiredSpeed 
     */
    void setDesiredDrivingSpeed(Script& script, float desiredSpeed);

    /**
     * @brief Set the absolute position of vehicle
     * 
     * @param script
     * @param x 
     * @param y 
     */
    void setAbsolutePosition(Script& script, float x, float y);

    CognataErr sendTrafficLightsStatus(std::map<int, std::vector<TrafficLightState>>& trafficLightList);

    CognataErr setTrafficLightsControl(bool clientControl);

    // General
    //----------------------------------------------------------------------------

    //! returns the last error that happened
    /*!
     * \code
        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void useCarControlCmd()
            {
                CognataErr error;
                error = mSim->lastError();
                cout << "Last error that happened: is: " << error << endl;
            }
        };
     * \endcode
    \return Error code
    */
    CognataErr lastError();

    //! Write a message to the simulation log (0-4 for debug, info, warning, error, critical)
    /*!
     * \code

        class ExampleClass
        {
        private:
            std::unique_ptr<CognataSim> mSim = std::make_unique<CognataSim>();
        public:
            void useLog()
            {
                mSim->log(1, "This log message will be sent to the Engine Log.");
            }
        };

     * \endcode
    \param level The level of error (will be written to log)
    \param msg The log message (will be written to log)
    \return Error code
    */
    CognataErr log(int level, const std::string &msg);
    
protected:
    /// @cond SHOW_SOME_PRIVATE_FUNCS
    void receiveMessageCB(uint8_t* protoMessage, int64_t size, CognataErr& errCode);
    CognataErr sendMessage(ClientToEngineMessage& msg);
    CognataErr sendRegisterSensor(uint32_t carID, uint32_t sensorID);
    CognataErr sendRegisterGlobalSensor(uint32_t sensorID);
    CognataErr checkMessageError(EngineToClientMessage& msg);
    CognataErr waitForQueryMessage(float timeoutInSeconds);
    CognataErr waitForErrorMessage(float timeoutInSeconds);
    CognataErr innerSendCarCommand(CarCommand* pCarCmd);
    CognataErr getNewPortFromEngine(std::string &newPortToEngine);
    void CreateSDKUniqueClientName(const std::string& ip, const std::string& port);
    void updateCarsInSimulationList(const CarsQueryReport& carQueryReport);
    CognataErr sendRegisterCarReport(bool filterByClient);


    std::string m_SimId;

    std::string m_SDKClientName;

    LoadingState *m_pLoadingStateCB = nullptr;

    CarsInSimulationChange *m_pCarsInSimCB = nullptr;

    CognataSocket m_Socket;

    std::vector<CarQueryReport> mCarsInSimList;

    std::vector<EngineToClientMessage> m_QueryReportList;
    std::vector<EngineToClientMessage> m_DataList;
    std::vector<EngineToClientMessage> m_ErrorList;
    std::vector<LoadingStateReport> m_LoadingDataList;

    //sensors callbacks
    std::map<unsigned int, Sensor<GPSOutput>*> m_pGPSSensorCBs;
    std::map<unsigned int, Sensor<E2COutput>*> m_pE2CMSensorCBs;
    std::map<unsigned int, Sensor<LaneDetectorOutput>*> m_pLaneDetectorSensorCBs;
    std::map<unsigned int, Sensor<LidarOutput>*> m_pLidarSensorCBs;
    std::map<unsigned int, Sensor<RGBCameraOutput>*> m_pRGBCameraSensorCBs;
    std::map<unsigned int, Sensor<ROIOutput>*> m_pROISensorCBs;
    std::map<unsigned int, Sensor<RadarOutput>*> m_pCarRadarSensorCBs;
    std::map<unsigned int, Sensor<CarTelemetriesOutput>*> m_pCarTelemetriesSensorCBs;
    std::map<unsigned int, Sensor<SemanticInstanceLabelingOutput>*> m_pSemanticInstanceSensorCBs;
    std::map<unsigned int, Sensor<SemanticClassLabelingOutput>*> m_pSemanticClassSensorCBs;
    std::map<unsigned int, Sensor<DepthCameraOutput>*> m_pDepthCameraSensorCBs;
    std::map<unsigned int, Sensor<ThermalCameraOutput>*> m_pThermalCameraSensorCBs;
    //globals sensors
    std::map<unsigned int, Sensor<DynamicObjectGroundTruthOutput>*> m_pDOGTSensorCBs;

    float m_SimulationTimeInSeconds = 0.0f;
    unsigned int m_CurrentFrame = 0;

    CognataErr m_LastError = COGNATA_ERR_OK;

    bool m_IsLoading = true;
    bool m_IsRunning = false;
    /// @endcond
};

} // namespace SDK
} // namespace Cognata

#endif // __COGNATASIM_H__

/*! \mainpage

 \par Overview
Cognata simulates real-world scenarios to enable training and testing of various Software
components that are part of an Autonomous Driving System. The Cognata simulation system
provide the autonomous driving system with several simulated feeds as if they are coming from
the sensors located on the car. Different sensor types are supported: radar, lidar, ultrasound
and camera. The autonomous driving system analyzes the input feeds and decides what
commands to send to the car. These commands are fed back to the Cognata simulation that
move the car accordingly. Integrating the autonomous driving system with the Cognata
simulation system is done using the Cognata SDK.
The Cognata SDK is a set of libraries that should be integrated with the OEM test framework of
the autonomous driving system. The sensor feeds coming from Cognata simulation should be
injected to the relevant sensor feeds and the commands directing the car should be sent to the
Cognata ego car control.
A typical test scenario will use the following flow. A test scenario is defined and run in Cognata
Simulation Engine. The engine creates a virtual world that is streamed via the Cognata SDK to
each of the car virtual sensors (camera, LiDAR, etc) running on the OEM test framework. The
virtual sensors feed the simulated input data to the Autonomous Driving Software which is
making decisions on how to move the vehicle. These decisions are translated into the
appropriate car control commands that are sent to the Cognata Simulation Engine (e.g. set
acceleration level, set the brake pressure, etc). The Cognata simulation engine adjusts the
behaviour of the car based on these control commands and the simulation continues.


\par Requirements
The Cognata SDK is developed in C++. The package is available on Ubuntu (it is also possible
to use on other Linux distros, Mac and Windows). The Ubuntu version used is 16.04.
The integration of Cognata SDK requires the following software packages to be installed:
- C++ compiler
- CMake - version 2.6.1 and higher
- Protobuf - version 3.1.0 and higher

\par Package
The Cognata SDK package comes in a tar gzip-ed file. Open the package to get the following
directory structure:
- CognataSDK
- docs Documentation of the Cognata SDK
- include Include files of the Cognata SDK
- lib Binary libraries of the Cognata SDK
- sample Sample application source code
- bin Sample application built

 \par Build
The Cognata SDK comes with a simple sample application that demonstrate how to use the
Cognata SDK. The source code of the sample application is in the sample directory. Use the
C++ compiler to build the sample application from the sample application source and the binary
Cognata SDK libraries in the lib directory. The pre-built sample application is also provided in
the bin directory.

\par Sample Application
for complete flow of connecting to the SimCloud simulation engine, configuring it and reading the sensor output it sends, please see the  \ref SampleCode "sample application".
 */

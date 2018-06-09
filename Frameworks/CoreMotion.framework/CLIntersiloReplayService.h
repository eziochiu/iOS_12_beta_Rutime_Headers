/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLIntersiloReplayService : CLIntersiloService <CLIntersiloServiceProtocol> {
    <CLIntersiloReplayServiceClientProtocol> * _coordinator;
    int (* _filter;
    struct Item { 
        int (**_vptr$Base)(); 
        struct unique_ptr<CMMsl::Accel, std::__1::default_delete<CMMsl::Accel> > { 
            struct __compressed_pair<CMMsl::Accel *, std::__1::default_delete<CMMsl::Accel> > { 
                struct Accel {} *__value_; 
            } __ptr_; 
        } _accel; 
        struct unique_ptr<CMMsl::AccelBatch, std::__1::default_delete<CMMsl::AccelBatch> > { 
            struct __compressed_pair<CMMsl::AccelBatch *, std::__1::default_delete<CMMsl::AccelBatch> > { 
                struct AccelBatch {} *__value_; 
            } __ptr_; 
        } _accelBatch; 
        struct unique_ptr<CMMsl::AccelGesture, std::__1::default_delete<CMMsl::AccelGesture> > { 
            struct __compressed_pair<CMMsl::AccelGesture *, std::__1::default_delete<CMMsl::AccelGesture> > { 
                struct AccelGesture {} *__value_; 
            } __ptr_; 
        } _accelGesture; 
        struct unique_ptr<CMMsl::AccelGps, std::__1::default_delete<CMMsl::AccelGps> > { 
            struct __compressed_pair<CMMsl::AccelGps *, std::__1::default_delete<CMMsl::AccelGps> > { 
                struct AccelGps {} *__value_; 
            } __ptr_; 
        } _accelGps; 
        struct unique_ptr<CMMsl::AccelOscarEmu, std::__1::default_delete<CMMsl::AccelOscarEmu> > { 
            struct __compressed_pair<CMMsl::AccelOscarEmu *, std::__1::default_delete<CMMsl::AccelOscarEmu> > { 
                struct AccelOscarEmu {} *__value_; 
            } __ptr_; 
        } _accelOscarEmu; 
        struct unique_ptr<CMMsl::AccessoryAccel, std::__1::default_delete<CMMsl::AccessoryAccel> > { 
            struct __compressed_pair<CMMsl::AccessoryAccel *, std::__1::default_delete<CMMsl::AccessoryAccel> > { 
                struct AccessoryAccel {} *__value_; 
            } __ptr_; 
        } _accessoryAccel; 
        struct unique_ptr<CMMsl::AccessoryAccelConfig, std::__1::default_delete<CMMsl::AccessoryAccelConfig> > { 
            struct __compressed_pair<CMMsl::AccessoryAccelConfig *, std::__1::default_delete<CMMsl::AccessoryAccelConfig> > { 
                struct AccessoryAccelConfig {} *__value_; 
            } __ptr_; 
        } _accessoryAccelConfig; 
        struct unique_ptr<CMMsl::AccessoryConfig, std::__1::default_delete<CMMsl::AccessoryConfig> > { 
            struct __compressed_pair<CMMsl::AccessoryConfig *, std::__1::default_delete<CMMsl::AccessoryConfig> > { 
                struct AccessoryConfig {} *__value_; 
            } __ptr_; 
        } _accessoryConfig; 
        struct unique_ptr<CMMsl::AccessoryGyro, std::__1::default_delete<CMMsl::AccessoryGyro> > { 
            struct __compressed_pair<CMMsl::AccessoryGyro *, std::__1::default_delete<CMMsl::AccessoryGyro> > { 
                struct AccessoryGyro {} *__value_; 
            } __ptr_; 
        } _accessoryGyro; 
        struct unique_ptr<CMMsl::AccessoryProx, std::__1::default_delete<CMMsl::AccessoryProx> > { 
            struct __compressed_pair<CMMsl::AccessoryProx *, std::__1::default_delete<CMMsl::AccessoryProx> > { 
                struct AccessoryProx {} *__value_; 
            } __ptr_; 
        } _accessoryProx; 
        struct unique_ptr<CMMsl::AccessoryProximityConfig, std::__1::default_delete<CMMsl::AccessoryProximityConfig> > { 
            struct __compressed_pair<CMMsl::AccessoryProximityConfig *, std::__1::default_delete<CMMsl::AccessoryProximityConfig> > { 
                struct AccessoryProximityConfig {} *__value_; 
            } __ptr_; 
        } _accessoryProximityConfig; 
        struct unique_ptr<CMMsl::AirpodEvent, std::__1::default_delete<CMMsl::AirpodEvent> > { 
            struct __compressed_pair<CMMsl::AirpodEvent *, std::__1::default_delete<CMMsl::AirpodEvent> > { 
                struct AirpodEvent {} *__value_; 
            } __ptr_; 
        } _airpodEvent; 
        struct unique_ptr<CMMsl::BTConnection, std::__1::default_delete<CMMsl::BTConnection> > { 
            struct __compressed_pair<CMMsl::BTConnection *, std::__1::default_delete<CMMsl::BTConnection> > { 
                struct BTConnection {} *__value_; 
            } __ptr_; 
        } _bTConnection; 
        struct unique_ptr<CMMsl::BasebandSpeed, std::__1::default_delete<CMMsl::BasebandSpeed> > { 
            struct __compressed_pair<CMMsl::BasebandSpeed *, std::__1::default_delete<CMMsl::BasebandSpeed> > { 
                struct BasebandSpeed {} *__value_; 
            } __ptr_; 
        } _basebandSpeed; 
        struct unique_ptr<CMMsl::BodyMetrics, std::__1::default_delete<CMMsl::BodyMetrics> > { 
            struct __compressed_pair<CMMsl::BodyMetrics *, std::__1::default_delete<CMMsl::BodyMetrics> > { 
                struct BodyMetrics {} *__value_; 
            } __ptr_; 
        } _bodyMetrics; 
        struct unique_ptr<CMMsl::BraveHeartAccel, std::__1::default_delete<CMMsl::BraveHeartAccel> > { 
            struct __compressed_pair<CMMsl::BraveHeartAccel *, std::__1::default_delete<CMMsl::BraveHeartAccel> > { 
                struct BraveHeartAccel {} *__value_; 
            } __ptr_; 
        } _braveHeartAccel; 
        struct unique_ptr<CMMsl::BraveHeartDeviceMotion, std::__1::default_delete<CMMsl::BraveHeartDeviceMotion> > { 
            struct __compressed_pair<CMMsl::BraveHeartDeviceMotion *, std::__1::default_delete<CMMsl::BraveHeartDeviceMotion> > { 
                struct BraveHeartDeviceMotion {} *__value_; 
            } __ptr_; 
        } _braveHeartDeviceMotion; 
        struct unique_ptr<CMMsl::BraveHeartNatalieData, std::__1::default_delete<CMMsl::BraveHeartNatalieData> > { 
            struct __compressed_pair<CMMsl::BraveHeartNatalieData *, std::__1::default_delete<CMMsl::BraveHeartNatalieData> > { 
                struct BraveHeartNatalieData {} *__value_; 
            } __ptr_; 
        } _braveHeartNatalieData; 
        struct unique_ptr<CMMsl::BraveHeartVO2MaxInput, std::__1::default_delete<CMMsl::BraveHeartVO2MaxInput> > { 
            struct __compressed_pair<CMMsl::BraveHeartVO2MaxInput *, std::__1::default_delete<CMMsl::BraveHeartVO2MaxInput> > { 
                struct BraveHeartVO2MaxInput {} *__value_; 
            } __ptr_; 
        } _braveHeartVO2MaxInput; 
        struct unique_ptr<CMMsl::BraveHeartWorkoutEvent, std::__1::default_delete<CMMsl::BraveHeartWorkoutEvent> > { 
            struct __compressed_pair<CMMsl::BraveHeartWorkoutEvent *, std::__1::default_delete<CMMsl::BraveHeartWorkoutEvent> > { 
                struct BraveHeartWorkoutEvent {} *__value_; 
            } __ptr_; 
        } _braveHeartWorkoutEvent; 
        struct unique_ptr<CMMsl::CalorimetryPauseEvent, std::__1::default_delete<CMMsl::CalorimetryPauseEvent> > { 
            struct __compressed_pair<CMMsl::CalorimetryPauseEvent *, std::__1::default_delete<CMMsl::CalorimetryPauseEvent> > { 
                struct CalorimetryPauseEvent {} *__value_; 
            } __ptr_; 
        } _calorimetryPauseEvent; 
        struct unique_ptr<CMMsl::CatherineHealthKitData, std::__1::default_delete<CMMsl::CatherineHealthKitData> > { 
            struct __compressed_pair<CMMsl::CatherineHealthKitData *, std::__1::default_delete<CMMsl::CatherineHealthKitData> > { 
                struct CatherineHealthKitData {} *__value_; 
            } __ptr_; 
        } _catherineHealthKitData; 
        double _cftime; 
        struct unique_ptr<CMMsl::ClefCalibration, std::__1::default_delete<CMMsl::ClefCalibration> > { 
            struct __compressed_pair<CMMsl::ClefCalibration *, std::__1::default_delete<CMMsl::ClefCalibration> > { 
                struct ClefCalibration {} *__value_; 
            } __ptr_; 
        } _clefCalibration; 
        struct unique_ptr<CMMsl::CoarseElevationChange, std::__1::default_delete<CMMsl::CoarseElevationChange> > { 
            struct __compressed_pair<CMMsl::CoarseElevationChange *, std::__1::default_delete<CMMsl::CoarseElevationChange> > { 
                struct CoarseElevationChange {} *__value_; 
            } __ptr_; 
        } _coarseElevationChange; 
        struct unique_ptr<CMMsl::Compass, std::__1::default_delete<CMMsl::Compass> > { 
            struct __compressed_pair<CMMsl::Compass *, std::__1::default_delete<CMMsl::Compass> > { 
                struct Compass {} *__value_; 
            } __ptr_; 
        } _compass; 
        struct unique_ptr<CMMsl::CompassAlignment, std::__1::default_delete<CMMsl::CompassAlignment> > { 
            struct __compressed_pair<CMMsl::CompassAlignment *, std::__1::default_delete<CMMsl::CompassAlignment> > { 
                struct CompassAlignment {} *__value_; 
            } __ptr_; 
        } _compassAlignment; 
        struct unique_ptr<CMMsl::CompassCalibration, std::__1::default_delete<CMMsl::CompassCalibration> > { 
            struct __compressed_pair<CMMsl::CompassCalibration *, std::__1::default_delete<CMMsl::CompassCalibration> > { 
                struct CompassCalibration {} *__value_; 
            } __ptr_; 
        } _compassCalibration; 
        struct unique_ptr<CMMsl::CompassConstraints, std::__1::default_delete<CMMsl::CompassConstraints> > { 
            struct __compressed_pair<CMMsl::CompassConstraints *, std::__1::default_delete<CMMsl::CompassConstraints> > { 
                struct CompassConstraints {} *__value_; 
            } __ptr_; 
        } _compassConstraints; 
        struct unique_ptr<CMMsl::CompassCorrection, std::__1::default_delete<CMMsl::CompassCorrection> > { 
            struct __compressed_pair<CMMsl::CompassCorrection *, std::__1::default_delete<CMMsl::CompassCorrection> > { 
                struct CompassCorrection {} *__value_; 
            } __ptr_; 
        } _compassCorrection; 
        struct unique_ptr<CMMsl::CourseConstraints, std::__1::default_delete<CMMsl::CourseConstraints> > { 
            struct __compressed_pair<CMMsl::CourseConstraints *, std::__1::default_delete<CMMsl::CourseConstraints> > { 
                struct CourseConstraints {} *__value_; 
            } __ptr_; 
        } _courseConstraints; 
        struct unique_ptr<CMMsl::CourseCorrection, std::__1::default_delete<CMMsl::CourseCorrection> > { 
            struct __compressed_pair<CMMsl::CourseCorrection *, std::__1::default_delete<CMMsl::CourseCorrection> > { 
                struct CourseCorrection {} *__value_; 
            } __ptr_; 
        } _courseCorrection; 
        struct unique_ptr<CMMsl::DeviceMotion, std::__1::default_delete<CMMsl::DeviceMotion> > { 
            struct __compressed_pair<CMMsl::DeviceMotion *, std::__1::default_delete<CMMsl::DeviceMotion> > { 
                struct DeviceMotion {} *__value_; 
            } __ptr_; 
        } _deviceMotion; 
        struct unique_ptr<CMMsl::DeviceMotionCovariance, std::__1::default_delete<CMMsl::DeviceMotionCovariance> > { 
            struct __compressed_pair<CMMsl::DeviceMotionCovariance *, std::__1::default_delete<CMMsl::DeviceMotionCovariance> > { 
                struct DeviceMotionCovariance {} *__value_; 
            } __ptr_; 
        } _deviceMotionCovariance; 
        struct unique_ptr<CMMsl::ElevationChange, std::__1::default_delete<CMMsl::ElevationChange> > { 
            struct __compressed_pair<CMMsl::ElevationChange *, std::__1::default_delete<CMMsl::ElevationChange> > { 
                struct ElevationChange {} *__value_; 
            } __ptr_; 
        } _elevationChange; 
        struct unique_ptr<CMMsl::EnhancedDeviceMotion, std::__1::default_delete<CMMsl::EnhancedDeviceMotion> > { 
            struct __compressed_pair<CMMsl::EnhancedDeviceMotion *, std::__1::default_delete<CMMsl::EnhancedDeviceMotion> > { 
                struct EnhancedDeviceMotion {} *__value_; 
            } __ptr_; 
        } _enhancedDeviceMotion; 
        struct unique_ptr<CMMsl::FallStats, std::__1::default_delete<CMMsl::FallStats> > { 
            struct __compressed_pair<CMMsl::FallStats *, std::__1::default_delete<CMMsl::FallStats> > { 
                struct FallStats {} *__value_; 
            } __ptr_; 
        } _fallStats; 
        struct unique_ptr<CMMsl::GravityConstraints, std::__1::default_delete<CMMsl::GravityConstraints> > { 
            struct __compressed_pair<CMMsl::GravityConstraints *, std::__1::default_delete<CMMsl::GravityConstraints> > { 
                struct GravityConstraints {} *__value_; 
            } __ptr_; 
        } _gravityConstraints; 
        struct unique_ptr<CMMsl::GravityCorrection, std::__1::default_delete<CMMsl::GravityCorrection> > { 
            struct __compressed_pair<CMMsl::GravityCorrection *, std::__1::default_delete<CMMsl::GravityCorrection> > { 
                struct GravityCorrection {} *__value_; 
            } __ptr_; 
        } _gravityCorrection; 
        struct unique_ptr<CMMsl::Gyro, std::__1::default_delete<CMMsl::Gyro> > { 
            struct __compressed_pair<CMMsl::Gyro *, std::__1::default_delete<CMMsl::Gyro> > { 
                struct Gyro {} *__value_; 
            } __ptr_; 
        } _gyro; 
        struct unique_ptr<CMMsl::GyroBiasAndVariance, std::__1::default_delete<CMMsl::GyroBiasAndVariance> > { 
            struct __compressed_pair<CMMsl::GyroBiasAndVariance *, std::__1::default_delete<CMMsl::GyroBiasAndVariance> > { 
                struct GyroBiasAndVariance {} *__value_; 
            } __ptr_; 
        } _gyroBiasAndVariance; 
        struct unique_ptr<CMMsl::GyroBiasConstraints, std::__1::default_delete<CMMsl::GyroBiasConstraints> > { 
            struct __compressed_pair<CMMsl::GyroBiasConstraints *, std::__1::default_delete<CMMsl::GyroBiasConstraints> > { 
                struct GyroBiasConstraints {} *__value_; 
            } __ptr_; 
        } _gyroBiasConstraints; 
        struct unique_ptr<CMMsl::GyroBiasCorrection, std::__1::default_delete<CMMsl::GyroBiasCorrection> > { 
            struct __compressed_pair<CMMsl::GyroBiasCorrection *, std::__1::default_delete<CMMsl::GyroBiasCorrection> > { 
                struct GyroBiasCorrection {} *__value_; 
            } __ptr_; 
        } _gyroBiasCorrection; 
        struct unique_ptr<CMMsl::GyroBiasFit, std::__1::default_delete<CMMsl::GyroBiasFit> > { 
            struct __compressed_pair<CMMsl::GyroBiasFit *, std::__1::default_delete<CMMsl::GyroBiasFit> > { 
                struct GyroBiasFit {} *__value_; 
            } __ptr_; 
        } _gyroBiasFit; 
        struct unique_ptr<CMMsl::GyroCompass, std::__1::default_delete<CMMsl::GyroCompass> > { 
            struct __compressed_pair<CMMsl::GyroCompass *, std::__1::default_delete<CMMsl::GyroCompass> > { 
                struct GyroCompass {} *__value_; 
            } __ptr_; 
        } _gyroCompass; 
        struct unique_ptr<CMMsl::GyroDt, std::__1::default_delete<CMMsl::GyroDt> > { 
            struct __compressed_pair<CMMsl::GyroDt *, std::__1::default_delete<CMMsl::GyroDt> > { 
                struct GyroDt {} *__value_; 
            } __ptr_; 
        } _gyroDt; 
        struct unique_ptr<CMMsl::GyroGps, std::__1::default_delete<CMMsl::GyroGps> > { 
            struct __compressed_pair<CMMsl::GyroGps *, std::__1::default_delete<CMMsl::GyroGps> > { 
                struct GyroGps {} *__value_; 
            } __ptr_; 
        } _gyroGps; 
        struct unique_ptr<CMMsl::GyroOscarEmu, std::__1::default_delete<CMMsl::GyroOscarEmu> > { 
            struct __compressed_pair<CMMsl::GyroOscarEmu *, std::__1::default_delete<CMMsl::GyroOscarEmu> > { 
                struct GyroOscarEmu {} *__value_; 
            } __ptr_; 
        } _gyroOscarEmu; 
        struct unique_ptr<CMMsl::GyroTemperature, std::__1::default_delete<CMMsl::GyroTemperature> > { 
            struct __compressed_pair<CMMsl::GyroTemperature *, std::__1::default_delete<CMMsl::GyroTemperature> > { 
                struct GyroTemperature {} *__value_; 
            } __ptr_; 
        } _gyroTemperature; 
        struct unique_ptr<CMMsl::InEarBaselining, std::__1::default_delete<CMMsl::InEarBaselining> > { 
            struct __compressed_pair<CMMsl::InEarBaselining *, std::__1::default_delete<CMMsl::InEarBaselining> > { 
                struct InEarBaselining {} *__value_; 
            } __ptr_; 
        } _inEarBaselining; 
        struct unique_ptr<CMMsl::InEarConstraints, std::__1::default_delete<CMMsl::InEarConstraints> > { 
            struct __compressed_pair<CMMsl::InEarConstraints *, std::__1::default_delete<CMMsl::InEarConstraints> > { 
                struct InEarConstraints {} *__value_; 
            } __ptr_; 
        } _inEarConstraints; 
        struct unique_ptr<CMMsl::InEarOpenLid, std::__1::default_delete<CMMsl::InEarOpenLid> > { 
            struct __compressed_pair<CMMsl::InEarOpenLid *, std::__1::default_delete<CMMsl::InEarOpenLid> > { 
                struct InEarOpenLid {} *__value_; 
            } __ptr_; 
        } _inEarOpenLid; 
        struct unique_ptr<CMMsl::InEarOptical, std::__1::default_delete<CMMsl::InEarOptical> > { 
            struct __compressed_pair<CMMsl::InEarOptical *, std::__1::default_delete<CMMsl::InEarOptical> > { 
                struct InEarOptical {} *__value_; 
            } __ptr_; 
        } _inEarOptical; 
        struct unique_ptr<CMMsl::InEarTransition, std::__1::default_delete<CMMsl::InEarTransition> > { 
            struct __compressed_pair<CMMsl::InEarTransition *, std::__1::default_delete<CMMsl::InEarTransition> > { 
                struct InEarTransition {} *__value_; 
            } __ptr_; 
        } _inEarTransition; 
        struct unique_ptr<CMMsl::IntersiloNSCodingData, std::__1::default_delete<CMMsl::IntersiloNSCodingData> > { 
            struct __compressed_pair<CMMsl::IntersiloNSCodingData *, std::__1::default_delete<CMMsl::IntersiloNSCodingData> > { 
                struct IntersiloNSCodingData {} *__value_; 
            } __ptr_; 
        } _intersiloNSCodingData; 
        struct unique_ptr<CMMsl::LocationOscarEmu, std::__1::default_delete<CMMsl::LocationOscarEmu> > { 
            struct __compressed_pair<CMMsl::LocationOscarEmu *, std::__1::default_delete<CMMsl::LocationOscarEmu> > { 
                struct LocationOscarEmu {} *__value_; 
            } __ptr_; 
        } _locationOscarEmu; 
        struct unique_ptr<CMMsl::Magnetometer, std::__1::default_delete<CMMsl::Magnetometer> > { 
            struct __compressed_pair<CMMsl::Magnetometer *, std::__1::default_delete<CMMsl::Magnetometer> > { 
                struct Magnetometer {} *__value_; 
            } __ptr_; 
        } _magnetometer; 
        struct unique_ptr<CMMsl::MetsInfo, std::__1::default_delete<CMMsl::MetsInfo> > { 
            struct __compressed_pair<CMMsl::MetsInfo *, std::__1::default_delete<CMMsl::MetsInfo> > { 
                struct MetsInfo {} *__value_; 
            } __ptr_; 
        } _metsInfo; 
        struct unique_ptr<CMMsl::MotionGPSLocation, std::__1::default_delete<CMMsl::MotionGPSLocation> > { 
            struct __compressed_pair<CMMsl::MotionGPSLocation *, std::__1::default_delete<CMMsl::MotionGPSLocation> > { 
                struct MotionGPSLocation {} *__value_; 
            } __ptr_; 
        } _motionGPSLocation; 
        struct unique_ptr<CMMsl::MotionHint, std::__1::default_delete<CMMsl::MotionHint> > { 
            struct __compressed_pair<CMMsl::MotionHint *, std::__1::default_delete<CMMsl::MotionHint> > { 
                struct MotionHint {} *__value_; 
            } __ptr_; 
        } _motionHint; 
        struct unique_ptr<CMMsl::MotionLoiData, std::__1::default_delete<CMMsl::MotionLoiData> > { 
            struct __compressed_pair<CMMsl::MotionLoiData *, std::__1::default_delete<CMMsl::MotionLoiData> > { 
                struct MotionLoiData {} *__value_; 
            } __ptr_; 
        } _motionLoiData; 
        struct unique_ptr<CMMsl::MotionStateUpdate, std::__1::default_delete<CMMsl::MotionStateUpdate> > { 
            struct __compressed_pair<CMMsl::MotionStateUpdate *, std::__1::default_delete<CMMsl::MotionStateUpdate> > { 
                struct MotionStateUpdate {} *__value_; 
            } __ptr_; 
        } _motionStateUpdate; 
        struct unique_ptr<CMMsl::MotionWifiAssociation, std::__1::default_delete<CMMsl::MotionWifiAssociation> > { 
            struct __compressed_pair<CMMsl::MotionWifiAssociation *, std::__1::default_delete<CMMsl::MotionWifiAssociation> > { 
                struct MotionWifiAssociation {} *__value_; 
            } __ptr_; 
        } _motionWifiAssociation; 
        struct unique_ptr<CMMsl::MotionWifiLocation, std::__1::default_delete<CMMsl::MotionWifiLocation> > { 
            struct __compressed_pair<CMMsl::MotionWifiLocation *, std::__1::default_delete<CMMsl::MotionWifiLocation> > { 
                struct MotionWifiLocation {} *__value_; 
            } __ptr_; 
        } _motionWifiLocation; 
        struct unique_ptr<CMMsl::NatalieData, std::__1::default_delete<CMMsl::NatalieData> > { 
            struct __compressed_pair<CMMsl::NatalieData *, std::__1::default_delete<CMMsl::NatalieData> > { 
                struct NatalieData {} *__value_; 
            } __ptr_; 
        } _natalieData; 
        struct unique_ptr<CMMsl::NonlinearBiasFit, std::__1::default_delete<CMMsl::NonlinearBiasFit> > { 
            struct __compressed_pair<CMMsl::NonlinearBiasFit *, std::__1::default_delete<CMMsl::NonlinearBiasFit> > { 
                struct NonlinearBiasFit {} *__value_; 
            } __ptr_; 
        } _nonlinearBiasFit; 
        struct unique_ptr<CMMsl::Odometer, std::__1::default_delete<CMMsl::Odometer> > { 
            struct __compressed_pair<CMMsl::Odometer *, std::__1::default_delete<CMMsl::Odometer> > { 
                struct Odometer {} *__value_; 
            } __ptr_; 
        } _odometer; 
        struct unique_ptr<CMMsl::OdometerWithAltitude, std::__1::default_delete<CMMsl::OdometerWithAltitude> > { 
            struct __compressed_pair<CMMsl::OdometerWithAltitude *, std::__1::default_delete<CMMsl::OdometerWithAltitude> > { 
                struct OdometerWithAltitude {} *__value_; 
            } __ptr_; 
        } _odometerWithAltitude; 
        struct unique_ptr<CMMsl::OnsetHeartRateData, std::__1::default_delete<CMMsl::OnsetHeartRateData> > { 
            struct __compressed_pair<CMMsl::OnsetHeartRateData *, std::__1::default_delete<CMMsl::OnsetHeartRateData> > { 
                struct OnsetHeartRateData {} *__value_; 
            } __ptr_; 
        } _onsetHeartRateData; 
        struct unique_ptr<CMMsl::PearlAttitude, std::__1::default_delete<CMMsl::PearlAttitude> > { 
            struct __compressed_pair<CMMsl::PearlAttitude *, std::__1::default_delete<CMMsl::PearlAttitude> > { 
                struct PearlAttitude {} *__value_; 
            } __ptr_; 
        } _pearlAttitude; 
        struct unique_ptr<CMMsl::Pressure, std::__1::default_delete<CMMsl::Pressure> > { 
            struct __compressed_pair<CMMsl::Pressure *, std::__1::default_delete<CMMsl::Pressure> > { 
                struct Pressure {} *__value_; 
            } __ptr_; 
        } _pressure; 
        struct unique_ptr<CMMsl::PressureFiltered, std::__1::default_delete<CMMsl::PressureFiltered> > { 
            struct __compressed_pair<CMMsl::PressureFiltered *, std::__1::default_delete<CMMsl::PressureFiltered> > { 
                struct PressureFiltered {} *__value_; 
            } __ptr_; 
        } _pressureFiltered; 
        struct unique_ptr<CMMsl::PressureFilteredNoTemperature, std::__1::default_delete<CMMsl::PressureFilteredNoTemperature> > { 
            struct __compressed_pair<CMMsl::PressureFilteredNoTemperature *, std::__1::default_delete<CMMsl::PressureFilteredNoTemperature> > { 
                struct PressureFilteredNoTemperature {} *__value_; 
            } __ptr_; 
        } _pressureFilteredNoTemperature; 
        struct unique_ptr<CMMsl::PressureGps, std::__1::default_delete<CMMsl::PressureGps> > { 
            struct __compressed_pair<CMMsl::PressureGps *, std::__1::default_delete<CMMsl::PressureGps> > { 
                struct PressureGps {} *__value_; 
            } __ptr_; 
        } _pressureGps; 
        struct unique_ptr<CMMsl::PressureOscarEmu, std::__1::default_delete<CMMsl::PressureOscarEmu> > { 
            struct __compressed_pair<CMMsl::PressureOscarEmu *, std::__1::default_delete<CMMsl::PressureOscarEmu> > { 
                struct PressureOscarEmu {} *__value_; 
            } __ptr_; 
        } _pressureOscarEmu; 
        struct unique_ptr<CMMsl::Prox, std::__1::default_delete<CMMsl::Prox> > { 
            struct __compressed_pair<CMMsl::Prox *, std::__1::default_delete<CMMsl::Prox> > { 
                struct Prox {} *__value_; 
            } __ptr_; 
        } _prox; 
        struct unique_ptr<CMMsl::RotationRate, std::__1::default_delete<CMMsl::RotationRate> > { 
            struct __compressed_pair<CMMsl::RotationRate *, std::__1::default_delete<CMMsl::RotationRate> > { 
                struct RotationRate {} *__value_; 
            } __ptr_; 
        } _rotationRate; 
        struct unique_ptr<CMMsl::SessionOverride, std::__1::default_delete<CMMsl::SessionOverride> > { 
            struct __compressed_pair<CMMsl::SessionOverride *, std::__1::default_delete<CMMsl::SessionOverride> > { 
                struct SessionOverride {} *__value_; 
            } __ptr_; 
        } _sessionOverride; 
        struct unique_ptr<CMMsl::SPUPlaybackExampleDeviceMotion, std::__1::default_delete<CMMsl::SPUPlaybackExampleDeviceMotion> > { 
            struct __compressed_pair<CMMsl::SPUPlaybackExampleDeviceMotion *, std::__1::default_delete<CMMsl::SPUPlaybackExampleDeviceMotion> > { 
                struct SPUPlaybackExampleDeviceMotion {} *__value_; 
            } __ptr_; 
        } _spuPlaybackExampleDeviceMotion; 
        struct unique_ptr<CMMsl::SPUPlaybackExampleMotionStateUpdate, std::__1::default_delete<CMMsl::SPUPlaybackExampleMotionStateUpdate> > { 
            struct __compressed_pair<CMMsl::SPUPlaybackExampleMotionStateUpdate *, std::__1::default_delete<CMMsl::SPUPlaybackExampleMotionStateUpdate> > { 
                struct SPUPlaybackExampleMotionStateUpdate {} *__value_; 
            } __ptr_; 
        } _spuPlaybackExampleMotionStateUpdate; 
        struct unique_ptr<CMMsl::StepCadenceToStrideLengthBin, std::__1::default_delete<CMMsl::StepCadenceToStrideLengthBin> > { 
            struct __compressed_pair<CMMsl::StepCadenceToStrideLengthBin *, std::__1::default_delete<CMMsl::StepCadenceToStrideLengthBin> > { 
                struct StepCadenceToStrideLengthBin {} *__value_; 
            } __ptr_; 
        } _stepCadenceToStrideLengthBin; 
        struct unique_ptr<CMMsl::StreamingHeartRateData, std::__1::default_delete<CMMsl::StreamingHeartRateData> > { 
            struct __compressed_pair<CMMsl::StreamingHeartRateData *, std::__1::default_delete<CMMsl::StreamingHeartRateData> > { 
                struct StreamingHeartRateData {} *__value_; 
            } __ptr_; 
        } _streamingHeartRateData; 
        struct unique_ptr<CMMsl::StrideCalBin, std::__1::default_delete<CMMsl::StrideCalBin> > { 
            struct __compressed_pair<CMMsl::StrideCalBin *, std::__1::default_delete<CMMsl::StrideCalBin> > { 
                struct StrideCalBin {} *__value_; 
            } __ptr_; 
        } _strideCalBin; 
        struct unique_ptr<CMMsl::TouchOscarEmu, std::__1::default_delete<CMMsl::TouchOscarEmu> > { 
            struct __compressed_pair<CMMsl::TouchOscarEmu *, std::__1::default_delete<CMMsl::TouchOscarEmu> > { 
                struct TouchOscarEmu {} *__value_; 
            } __ptr_; 
        } _touchOscarEmu; 
        struct unique_ptr<CMMsl::VibrationEvent, std::__1::default_delete<CMMsl::VibrationEvent> > { 
            struct __compressed_pair<CMMsl::VibrationEvent *, std::__1::default_delete<CMMsl::VibrationEvent> > { 
                struct VibrationEvent {} *__value_; 
            } __ptr_; 
        } _vibrationEvent; 
        struct unique_ptr<CMMsl::VO2MaxInput, std::__1::default_delete<CMMsl::VO2MaxInput> > { 
            struct __compressed_pair<CMMsl::VO2MaxInput *, std::__1::default_delete<CMMsl::VO2MaxInput> > { 
                struct VO2MaxInput {} *__value_; 
            } __ptr_; 
        } _vo2MaxInput; 
        struct unique_ptr<CMMsl::WatchOnWristState, std::__1::default_delete<CMMsl::WatchOnWristState> > { 
            struct __compressed_pair<CMMsl::WatchOnWristState *, std::__1::default_delete<CMMsl::WatchOnWristState> > { 
                struct WatchOnWristState {} *__value_; 
            } __ptr_; 
        } _watchOnWristState; 
        struct unique_ptr<CMMsl::WatchOrientationSettings, std::__1::default_delete<CMMsl::WatchOrientationSettings> > { 
            struct __compressed_pair<CMMsl::WatchOrientationSettings *, std::__1::default_delete<CMMsl::WatchOrientationSettings> > { 
                struct WatchOrientationSettings {} *__value_; 
            } __ptr_; 
        } _watchOrientationSettings; 
        struct unique_ptr<CMMsl::WorkoutEvent, std::__1::default_delete<CMMsl::WorkoutEvent> > { 
            struct __compressed_pair<CMMsl::WorkoutEvent *, std::__1::default_delete<CMMsl::WorkoutEvent> > { 
                struct WorkoutEvent {} *__value_; 
            } __ptr_; 
        } _workoutEvent; 
        struct unique_ptr<CMMsl::WorkoutRecorderAccel, std::__1::default_delete<CMMsl::WorkoutRecorderAccel> > { 
            struct __compressed_pair<CMMsl::WorkoutRecorderAccel *, std::__1::default_delete<CMMsl::WorkoutRecorderAccel> > { 
                struct WorkoutRecorderAccel {} *__value_; 
            } __ptr_; 
        } _workoutRecorderAccel; 
        struct unique_ptr<CMMsl::WorkoutRecorderBodyMetrics, std::__1::default_delete<CMMsl::WorkoutRecorderBodyMetrics> > { 
            struct __compressed_pair<CMMsl::WorkoutRecorderBodyMetrics *, std::__1::default_delete<CMMsl::WorkoutRecorderBodyMetrics> > { 
                struct WorkoutRecorderBodyMetrics {} *__value_; 
            } __ptr_; 
        } _workoutRecorderBodyMetrics; 
        struct unique_ptr<CMMsl::WorkoutRecorderElevation, std::__1::default_delete<CMMsl::WorkoutRecorderElevation> > { 
            struct __compressed_pair<CMMsl::WorkoutRecorderElevation *, std::__1::default_delete<CMMsl::WorkoutRecorderElevation> > { 
                struct WorkoutRecorderElevation {} *__value_; 
            } __ptr_; 
        } _workoutRecorderElevation; 
        struct unique_ptr<CMMsl::WorkoutRecorderHealthKitInfo, std::__1::default_delete<CMMsl::WorkoutRecorderHealthKitInfo> > { 
            struct __compressed_pair<CMMsl::WorkoutRecorderHealthKitInfo *, std::__1::default_delete<CMMsl::WorkoutRecorderHealthKitInfo> > { 
                struct WorkoutRecorderHealthKitInfo {} *__value_; 
            } __ptr_; 
        } _workoutRecorderHealthKitInfo; 
        struct unique_ptr<CMMsl::WorkoutRecorderHeartRate, std::__1::default_delete<CMMsl::WorkoutRecorderHeartRate> > { 
            struct __compressed_pair<CMMsl::WorkoutRecorderHeartRate *, std::__1::default_delete<CMMsl::WorkoutRecorderHeartRate> > { 
                struct WorkoutRecorderHeartRate {} *__value_; 
            } __ptr_; 
        } _workoutRecorderHeartRate; 
        struct unique_ptr<CMMsl::WorkoutRecorderOdometer, std::__1::default_delete<CMMsl::WorkoutRecorderOdometer> > { 
            struct __compressed_pair<CMMsl::WorkoutRecorderOdometer *, std::__1::default_delete<CMMsl::WorkoutRecorderOdometer> > { 
                struct WorkoutRecorderOdometer {} *__value_; 
            } __ptr_; 
        } _workoutRecorderOdometer; 
        struct unique_ptr<CMMsl::WorkoutRecorderRotationRate, std::__1::default_delete<CMMsl::WorkoutRecorderRotationRate> > { 
            struct __compressed_pair<CMMsl::WorkoutRecorderRotationRate *, std::__1::default_delete<CMMsl::WorkoutRecorderRotationRate> > { 
                struct WorkoutRecorderRotationRate {} *__value_; 
            } __ptr_; 
        } _workoutRecorderRotationRate; 
        struct unique_ptr<CMMsl::WorkoutRecorderWatchOrientationSettings, std::__1::default_delete<CMMsl::WorkoutRecorderWatchOrientationSettings> > { 
            struct __compressed_pair<CMMsl::WorkoutRecorderWatchOrientationSettings *, std::__1::default_delete<CMMsl::WorkoutRecorderWatchOrientationSettings> > { 
                struct WorkoutRecorderWatchOrientationSettings {} *__value_; 
            } __ptr_; 
        } _workoutRecorderWatchOrientationSettings; 
        struct unique_ptr<CMMsl::WorkoutRecorderWorkoutEvent, std::__1::default_delete<CMMsl::WorkoutRecorderWorkoutEvent> > { 
            struct __compressed_pair<CMMsl::WorkoutRecorderWorkoutEvent *, std::__1::default_delete<CMMsl::WorkoutRecorderWorkoutEvent> > { 
                struct WorkoutRecorderWorkoutEvent {} *__value_; 
            } __ptr_; 
        } _workoutRecorderWorkoutEvent; 
        struct { 
            unsigned int cftime : 1; 
        } _has; 
    }  _onDeckMessage;
    NSMapTable * _outboundTable;
    struct unique_ptr<CMMsl::Reader, std::__1::default_delete<CMMsl::Reader> > { 
        struct __compressed_pair<CMMsl::Reader *, std::__1::default_delete<CMMsl::Reader> > { 
            struct Reader {} *__value_; 
        } __ptr_; 
    }  _replayReader;
}

@property (nonatomic, retain) <CLIntersiloReplayServiceClientProtocol> *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int (*filter;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *outboundTable;
@property (readonly) Class superclass;
@property (nonatomic) bool valid;

+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;
+ (id)getSilo;
+ (void)performSyncOnSilo:(id)arg1 invoker:(id /* block */)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)beginService;
- (id)coordinator;
- (void)endService;
- (int (*)filter;
- (id)getConnectionKeyFrom:(id)arg1 to:(id)arg2;
- (bool)handleAbstractInvocation:(id)arg1 selectorInfo:(id)arg2 selfProxy:(id)arg3 senderProxy:(id)arg4;
- (id)init;
- (bool)loadNextRecordedMessageOnDeck;
- (id)outboundTable;
- (void)setCoordinator:(id)arg1;
- (void)setFilter:(int (*)arg1;
- (void)setOutboundTable:(id)arg1;
- (void)tryToSendOnDeckMessage;
- (void)useRecordingFileForPlayback:(id)arg1;
- (void)useRecordingFileForPlayback:(void *)arg1 coordinator:(void *)arg2 synchronousFilter:(void *)arg3; // needs 3 arg types, found 4: id, /* Warning: Unrecognized filer type: 'R' using 'void*' */ void*, id, int (*

@end

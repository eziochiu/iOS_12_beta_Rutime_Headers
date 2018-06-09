/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSystemPressureMonitor : NSObject {
    int  _currentSystemPressureFromPeakPower;
    int  _currentSystemPressureFromProjectorTemperature;
    int  _currentSystemPressureFromThermalPressure;
    int  _peakPowerNotificationToken;
    NSObject<OS_dispatch_source> * _pearlPollTimer;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _pollingTimerStopTime;
    int  _systemPressureLevelByPeakPowerLevel;
    struct { 
        float min; 
        float max; 
    }  _systemPressureLevelByProjectorTemperature;
    int  _systemPressureLevelByThermalPressureLevel;
    id /* block */  _systemPressureLevelChangedHandler;
    NSObject<OS_dispatch_queue> * _systemPressureLevelChangedHandlerQueue;
    int  _thermalPressureNotificationToken;
}

@property (copy) id /* block */ systemPressureLevelChangedHandler;
@property (readonly) int systemPressureLevelFromPearlProjector;

+ (void)initialize;

- (void)_callChangeHandler;
- (void)_registerForPeakPowerNotifications;
- (void)_registerForThermalNotifications;
- (void)_releasePearlProjectorPollingResources;
- (void)_updateSystemPressureForPeakPowerAndCallChangeHandler:(bool)arg1;
- (void)_updateSystemPressureForThermalPressureAndCallChangeHandler:(bool)arg1;
- (void)_updateWithPearlProjectorTemperature:(float)arg1;
- (void)callSystemPressureLevelChangedHandler;
- (void)dealloc;
- (id)init;
- (void)setSystemPressureLevelChangedHandler:(id /* block */)arg1;
- (void)startMonitoringPearlProjectorTemperatureUntilNominal;
- (id /* block */)systemPressureLevelChangedHandler;
- (int)systemPressureLevelFromPearlProjector;
- (void)updateWithPearlProjectorTemperature:(float)arg1;

@end

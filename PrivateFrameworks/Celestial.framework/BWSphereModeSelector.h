/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWSphereModeSelector : NSObject {
    bool  _avoidsSphereRecentering;
    struct __CFString { } * _currentSphereMode;
    bool  _enablesSphereWhenAvailable;
    bool  _lowPowerSphereModeEnabled;
    float  _maximumFrameRate;
    bool  _motionDataInvalid;
    int  _sphereThermalLevel;
    bool  _sphereVideoEnabled;
    bool  _sphereVideoSupported;
    bool  _stillPreviewActiveSupported;
    struct OpaqueFigCaptureStream { } * _stream;
    bool  _tripodModeEnabled;
    bool  _zeroShutterLagEnabled;
}

@property (nonatomic) bool avoidsSphereRecentering;
@property (readonly) struct __CFString { }*currentSphereMode;
@property (nonatomic) bool enablesSphereWhenAvailable;
@property (nonatomic) bool lowPowerSphereModeEnabled;
@property (nonatomic) float maximumFrameRate;
@property (nonatomic) bool sphereVideoEnabled;
@property (nonatomic, readonly) bool sphereVideoSupported;
@property (nonatomic) int systemThermalLevel;
@property (nonatomic) bool tripodModeEnabled;
@property (nonatomic) bool zeroShutterLagEnabled;

+ (void)initialize;

- (void)_updateSphereMode;
- (bool)avoidsSphereRecentering;
- (struct __CFString { }*)currentSphereMode;
- (bool)enablesSphereWhenAvailable;
- (id)initWithStillActivePreviewSupported:(bool)arg1 sphereVideoSupported:(bool)arg2;
- (bool)lowPowerSphereModeEnabled;
- (float)maximumFrameRate;
- (void)setAvoidsSphereRecentering:(bool)arg1;
- (void)setEnablesSphereWhenAvailable:(bool)arg1;
- (void)setLowPowerSphereModeEnabled:(bool)arg1;
- (void)setMaximumFrameRate:(float)arg1;
- (void)setSphereVideoEnabled:(bool)arg1;
- (void)setSystemThermalLevel:(int)arg1;
- (void)setTripodModeEnabled:(bool)arg1;
- (void)setZeroShutterLagEnabled:(bool)arg1;
- (bool)sphereVideoEnabled;
- (bool)sphereVideoSupported;
- (int)systemThermalLevel;
- (bool)tripodModeEnabled;
- (bool)zeroShutterLagEnabled;

@end

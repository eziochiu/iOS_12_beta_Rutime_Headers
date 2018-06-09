/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMLevelViewModel : CAMObservable {
    long long  __desiredIndicatorMode;
    double  __desiredModeBeganTime;
    double  _currentIndicatorAlpha;
    long long  _currentIndicatorMode;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _currentIndicatorOffset;
    double  _desiredUpdateInterval;
    bool  _monitoringDevice;
}

@property (setter=_setDesiredIndicatorMode:, nonatomic) long long _desiredIndicatorMode;
@property (setter=_setDesiredModeBeganTime:, nonatomic) double _desiredModeBeganTime;
@property (setter=_setCurrentIndicatorAlpha:, nonatomic) double currentIndicatorAlpha;
@property (setter=_setCurrentIndicatorMode:, nonatomic) long long currentIndicatorMode;
@property (setter=_setCurrentIndicatorOffset:, nonatomic) struct UIOffset { double x1; double x2; } currentIndicatorOffset;
@property (setter=_setDesiredUpdateInterval:, nonatomic) double desiredUpdateInterval;
@property (getter=isMonitoringDevice, nonatomic) bool monitoringDevice;

- (long long)_desiredIndicatorMode;
- (double)_desiredModeBeganTime;
- (double)_hysteresisAlphaForDesiredAlpha:(double)arg1 fromCurrentAlpha:(double)arg2;
- (long long)_hysteresisModeForDesiredMode:(long long)arg1;
- (void)_setCurrentIndicatorAlpha:(double)arg1;
- (void)_setCurrentIndicatorMode:(long long)arg1;
- (void)_setCurrentIndicatorOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)_setDesiredIndicatorMode:(long long)arg1;
- (void)_setDesiredModeBeganTime:(double)arg1;
- (void)_setDesiredUpdateInterval:(double)arg1;
- (void)_updateFlatModeWithRoll:(float)arg1 pitch:(float)arg2 magnitude:(float)arg3;
- (void)_updateModeNone;
- (void)applyDeviceMotion:(id)arg1;
- (double)currentIndicatorAlpha;
- (long long)currentIndicatorMode;
- (struct UIOffset { double x1; double x2; })currentIndicatorOffset;
- (double)desiredUpdateInterval;
- (bool)isMonitoringDevice;
- (id)mutableChangeObject;
- (void)setMonitoringDevice:(bool)arg1;

@end

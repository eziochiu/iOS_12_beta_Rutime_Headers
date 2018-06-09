/* made by EzioChiu.
 */

@protocol SBUIPasscodeLockView_Internal <SBUIPasscodeLockView>

@required

- (void)_overrideBiometricMatchingEnabled:(bool)arg1 forReason:(NSString *)arg2;
- (void)_resumeBiometricMatchingAdvisory:(bool)arg1;
- (void)beginTransitionToState:(long long)arg1;
- (void)didEndTransitionToState:(long long)arg1;
- (void)updateTransitionWithProgress:(double)arg1;
- (void)willEndTransitionToState:(long long)arg1;

@optional

- (void)_noteAppearingForSmartCoverUnlock:(bool)arg1;
- (void)_noteDeviceHasBeenUnlockedOnceSinceBoot:(bool)arg1;

@end

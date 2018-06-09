/* made by EzioChiu.
 */

@protocol NACVolumeController <NSObject>

@required

- (float)EUVolumeLimit;
- (void)beginObservingHaptics;
- (void)beginObservingVolume;
- (<NACVolumeControllerDelegate> *)delegate;
- (void)endObservingHaptics;
- (void)endObservingVolume;
- (float)hapticIntensity;
- (long long)hapticState;
- (bool)isMuted;
- (bool)isProminentHapticEnabled;
- (bool)isSystemMuted;
- (bool)isVolumeControlAvailable;
- (bool)isVolumeWarningEnabled;
- (void)setDelegate:(id <NACVolumeControllerDelegate>)arg1;
- (void)setHapticIntensity:(float)arg1;
- (void)setHapticState:(long long)arg1;
- (void)setMuted:(bool)arg1;
- (void)setProminentHapticEnabled:(bool)arg1;
- (void)setSystemMuted:(bool)arg1;
- (void)setVolumeValue:(float)arg1;
- (float)volumeValue;

@optional

- (void)_ignoreHapticObservation;

@end

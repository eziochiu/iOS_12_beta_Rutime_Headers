/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface NACVolumeControllerLocal : NSObject <MPAVRoutingControllerDelegate, MPVolumeControllerDelegate, NACVolumeController> {
    NSString * _audioCategory;
    long long  _cachedHapticState;
    <NACVolumeControllerDelegate> * _delegate;
    NACEventThrottler * _hapticThrottler;
    bool  _monitoringHaptics;
    bool  _muted;
    MPAVRoutingController * _routingController;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _shouldIgnoreHaptics;
    bool  _systemMuted;
    bool  _validCachedMutedValue;
    MPVolumeController * _volumeController;
    NSCountedSet * _volumeSetHistory;
    NACEventThrottler * _volumeThrottler;
}

@property (nonatomic, readonly) float EUVolumeLimit;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NACVolumeControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) float hapticIntensity;
@property (nonatomic) long long hapticState;
@property (readonly) unsigned long long hash;
@property (getter=isMuted, nonatomic, readonly) bool muted;
@property (getter=isProminentHapticEnabled, nonatomic) bool prominentHapticEnabled;
@property (readonly) Class superclass;
@property (getter=isSystemMuted, nonatomic) bool systemMuted;
@property (getter=isVolumeControlAvailable, nonatomic, readonly) bool volumeControlAvailable;
@property (nonatomic, readonly) float volumeValue;
@property (getter=isVolumeWarningEnabled, nonatomic, readonly) bool volumeWarningEnabled;

- (void).cxx_destruct;
- (float)EUVolumeLimit;
- (void)_ignoreHapticObservation;
- (void)_setHapticIntensity:(id)arg1;
- (void)_setVolumeValue:(id)arg1;
- (void)_updateMutedStateFromVolumeController:(id)arg1;
- (void)_updateVolumeState;
- (id)_volumeController;
- (void)beginObservingHapticState;
- (void)beginObservingHaptics;
- (void)beginObservingVolume;
- (id)delegate;
- (void)endObservingHapticState;
- (void)endObservingHaptics;
- (void)endObservingVolume;
- (float)hapticIntensity;
- (long long)hapticState;
- (id)init;
- (id)initWithAudioCategory:(id)arg1;
- (bool)isMuted;
- (bool)isProminentHapticEnabled;
- (bool)isSystemMuted;
- (bool)isVolumeControlAvailable;
- (bool)isVolumeWarningEnabled;
- (void)playPreview;
- (void)playProminentHapticPreview;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHapticIntensity:(float)arg1;
- (void)setHapticState:(long long)arg1;
- (void)setMuted:(bool)arg1;
- (void)setProminentHapticEnabled:(bool)arg1;
- (void)setSystemMuted:(bool)arg1;
- (void)setVolumeValue:(float)arg1;
- (void)setVolumeValue:(float)arg1 muted:(bool)arg2 overrideEULimit:(bool)arg3;
- (void)updateCachedHapticState;
- (void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2;
- (void)volumeController:(id)arg1 mutedStateDidChange:(bool)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (float)volumeValue;

@end

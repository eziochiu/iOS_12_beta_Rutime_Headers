/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVolumeControllerSystemDataSource : NSObject <MPVolumeControllerDataSource> {
    float  _EUVolumeLimit;
    bool  _debugVolumeWarning;
    <MPVolumeControllerDataSourceDelegate> * _delegate;
    bool  _muted;
    float  _volume;
    NSString * _volumeAudioCategory;
    bool  _volumeControlAvailable;
    bool  _volumeControlCapabilitiesInitialized;
    NSString * _volumeControlLabel;
    bool  _volumeInitialized;
    bool  _volumeWarningEnabled;
    long long  _volumeWarningState;
}

@property (nonatomic, readonly) float EUVolumeLimit;
@property (nonatomic, readonly) bool applicationShouldOverrideHardwareVolumeBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPVolumeControllerDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMuted, nonatomic) bool muted;
@property (readonly) Class superclass;
@property (nonatomic) float volume;
@property (nonatomic, copy) NSString *volumeAudioCategory;
@property (getter=isVolumeControlAvailable, nonatomic, readonly) bool volumeControlAvailable;
@property (nonatomic, readonly, copy) NSString *volumeControlLabel;
@property (nonatomic, readonly) bool volumeWarningEnabled;
@property (nonatomic, readonly) long long volumeWarningState;

- (void).cxx_destruct;
- (float)EUVolumeLimit;
- (void)_EUVolumeLimitDidChange:(id)arg1;
- (void)_EUVolumeLimitEnforcedDidChange:(id)arg1;
- (void)_mediaServerDiedNotification:(id)arg1;
- (void)_reloadEUVolumeLimits;
- (void)_routeDidChangeNotification:(id)arg1;
- (void)_setup;
- (void)_systemMuteDidChange:(id)arg1;
- (void)_systemVolumeDidChange:(id)arg1;
- (void)_tearDown;
- (void)_updateRouteLabelForRoute:(id)arg1;
- (float)_volumeApplyingEUVolumePolicyToVolume:(float)arg1;
- (void)_volumeControlCapabilitiesDidChangeNotification:(id)arg1;
- (void)_volumeDidChangeNotification:(id)arg1;
- (void)adjustVolumeValue:(float)arg1;
- (bool)applicationShouldOverrideHardwareVolumeBehavior;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)getVolumeValueWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)initializeVolume;
- (bool)isMuted;
- (bool)isVolumeControlAvailable;
- (void)reload;
- (void)reloadWarning;
- (void)setDelegate:(id)arg1;
- (void)setMuted:(bool)arg1;
- (void)setVolume:(float)arg1;
- (void)setVolumeAudioCategory:(id)arg1;
- (void)updateVolume:(float)arg1;
- (void)updateVolumeControlCapabilities:(unsigned int)arg1;
- (float)volume;
- (id)volumeAudioCategory;
- (id)volumeControlLabel;
- (bool)volumeWarningEnabled;
- (long long)volumeWarningState;

@end

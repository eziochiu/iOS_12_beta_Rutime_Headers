/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSMediaSettingsSynchronizer : NSObject {
    bool  _isObserving;
    NSUserDefaults * _mediaPlaybackCoreDefaults;
    NSUserDefaults * _mobileIPodDefaults;
    NSUserDefaults * _nanoMusicSyncDefaults;
}

+ (id)sharedSynchronizer;

- (void).cxx_destruct;
- (void)_createDefaultGreenTeaSettingsIfNecessary;
- (void)_reconcileGreenTeaSettingsIfNecessary;
- (void)beginObservingUpdates;
- (void)dealloc;
- (void)endObservingUpdates;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSVolumeMonitor : CSEventMonitor {
    float  _alarmVolumeLevel;
    float  _musicVolumeLevel;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_fetchSystemVolumeForCategory:(id)arg1 usingSystemController:(id)arg2 volume:(float*)arg3;
- (float)_getNewSystemVolumesWithNotification:(id)arg1 category:(id)arg2;
- (void)_notifyObserver:(id)arg1 volumeDidChanged:(float)arg2 forAudioCategory:(id)arg3;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)_startObservingSystemControllerLifecycle;
- (float)alarmVolume;
- (void)dealloc;
- (void)fetchVolumeFromAVSystemControllerForAudioCategory:(id)arg1;
- (id)init;
- (float)musicVolume;
- (void)startObservingSystemVolumes;
- (void)systemControllerDied:(id)arg1;
- (void)systemVolumeDidChange:(id)arg1;

@end

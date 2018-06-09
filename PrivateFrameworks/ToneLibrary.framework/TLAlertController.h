/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLAlertController : NSObject <TLAlertPlaybackBackEndController> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _accessQueueLabel;
    NSMapTable * _alertContexts;
    TLAlertQueuePlayerController * _queuePlayerController;
    TLAlertSystemSoundController * _systemSoundController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)_playbackBackEndForAlert:(id)arg1;
+ (bool)_shouldStopAlertForUserInterruption:(id)arg1;
+ (id)sharedAlertController;

- (void).cxx_destruct;
- (void)_assertRunningOnAccessQueue;
- (id)_controllerForPlaybackBackEnd:(long long)arg1;
- (void)_didCompletePlaybackOfAlert:(id)arg1;
- (void)_didReachTimeoutForAlert:(id)arg1;
- (void)_performBlockOnAccessQueue:(id /* block */)arg1;
- (id)_prepareForPlayingAlert:(id)arg1;
- (id)_queuePlayerController;
- (bool)_stopAllAlertsInCurrentProcess;
- (void)_stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 completionHandler:(id /* block */)arg4;
- (id)_systemSoundController;
- (void)dealloc;
- (void)handleActivationAssertionStatusChangeForAlert:(id)arg1 updatedStatus:(bool)arg2;
- (id)init;
- (void)playAlert:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)stopAllAlerts;
- (void)stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)updateAudioVolumeDynamicallyForAlert:(id)arg1 toValue:(float)arg2;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSiriServer : NSObject <HMDDataStreamBulkSendListener, HMDSiriSessionDelegate, HMFLogging> {
    HMDSiriServerSessionInfo * _activeSiriUISessionInfo;
    HMDNotificationRegistration * _notificationRegistration;
    NSObject<OS_dispatch_queue> * _queue;
    HMDSiriRemoteInputServer * _siriInputServer;
    HMDSiriSession * _siriUISession;
}

@property (nonatomic, retain) HMDSiriServerSessionInfo *activeSiriUISessionInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDNotificationRegistration *notificationRegistration;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) HMDSiriRemoteInputServer *siriInputServer;
@property (nonatomic, retain) HMDSiriSession *siriUISession;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedSiriServer;

- (void).cxx_destruct;
- (id)_getSessionInfoForSiriSession:(id)arg1;
- (void)_removeSiriSession:(id)arg1 sessionInfo:(id)arg2;
- (void)_setupSiriPlugin;
- (void)_setupSiriUIContext;
- (void)_siriSession:(id)arg1 bulkSendDidFail:(id)arg2 sessionInfo:(id)arg3;
- (bool)_siriSession:(id)arg1 didReceiveFrame:(id)arg2 sessionInfo:(id)arg3;
- (void)_siriSession:(id)arg1 sendDidFailWithReason:(unsigned char)arg2 sessionInfo:(id)arg3;
- (void)_siriSessionDidReceiveAllAudio:(id)arg1 sessionInfo:(id)arg2;
- (void)_siriSessionPluginDidStop:(id)arg1 sessionInfo:(id)arg2;
- (void)_startAudioStreamForSiriSession:(id)arg1 sessionInfo:(id)arg2;
- (bool)_startSiriUI;
- (void)_stopSiriUI;
- (void)accessory:(id)arg1 didReceiveBulkSessionCandidate:(id)arg2;
- (void)accessoryDidCloseDataStream:(id)arg1;
- (id)activeSiriUISessionInfo;
- (void)handleAccessoryHasBulkSendDataStream:(id)arg1;
- (id)init;
- (id)notificationRegistration;
- (id)queue;
- (void)registerForMessages;
- (void)setActiveSiriUISessionInfo:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSiriInputServer:(id)arg1;
- (void)setSiriUISession:(id)arg1;
- (id)siriInputServer;
- (void)siriSession:(id)arg1 didStopAudioWithCompletion:(id /* block */)arg2;
- (void)siriSession:(id)arg1 willStartAudioWithCompletion:(id /* block */)arg2;
- (id)siriUISession;
- (void)start;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeReprovisionHandler : HMFObject <HMDHomeMessageReceiver, HMFLogging, HMFTimerDelegate> {
    <HMDAccessoryBrowserProtocol> * _accessoryBrowser;
    HMFTimer * _disableReprovisionBrowsingTimer;
    HMDHome * _home;
    HMFMessageDispatcher * _msgDispatcher;
    NSMutableDictionary * _pendingReprovisionRequests;
    bool  _reprovisionBrowsingAllowed;
    bool  _reprovisionBrowsingPending;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) <HMDAccessoryBrowserProtocol> *accessoryBrowser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HMFTimer *disableReprovisionBrowsingTimer;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) NSMutableDictionary *pendingReprovisionRequests;
@property (getter=isReprovisionBrowsingAllowed, nonatomic) bool reprovisionBrowsingAllowed;
@property (getter=isReprovisionBrowsingPending, nonatomic) bool reprovisionBrowsingPending;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleDisableReprovisionBrowsingTimerFired;
- (void)_handleReprovisionAccessory:(id)arg1;
- (void)_handleRequestSearchForAccessoriesNeedingReprovisioning:(id)arg1;
- (void)_registerForMessages;
- (id)accessoryBrowser;
- (void)configure:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3;
- (void)dealloc;
- (id)disableReprovisionBrowsingTimer;
- (void)handleFoundAccessoryNeedingReprovisioning:(id)arg1 error:(id)arg2;
- (void)handleReprovionedAccessory:(id)arg1 identifier:(id)arg2 error:(id)arg3;
- (id)home;
- (id)init;
- (bool)isReprovisionBrowsingAllowed;
- (bool)isReprovisionBrowsingPending;
- (id)logIdentifier;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)pendingReprovisionRequests;
- (void)setAccessoryBrowser:(id)arg1;
- (void)setDisableReprovisionBrowsingTimer:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setPendingReprovisionRequests:(id)arg1;
- (void)setReprovisionBrowsingAllowed:(bool)arg1;
- (void)setReprovisionBrowsingPending:(bool)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)workQueue;

@end

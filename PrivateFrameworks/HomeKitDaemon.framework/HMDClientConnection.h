/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDClientConnection : HMFObject <HMFMessageReceiver> {
    NSMutableArray * _commandsBeingExecuted;
    HMDHomeManager * _homeManager;
    HMFMessageDispatcher * _msgDispatcher;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSMutableArray *commandsBeingExecuted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHomeManager *homeManager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_handleDaemonRequest:(id)arg1;
- (void)_handleSiriCommand:(id)arg1;
- (void)_handleSiriIntent:(id)arg1;
- (void)_handleSiriSyncDataRequest:(id)arg1;
- (void)_registerForMessages;
- (id)commandsBeingExecuted;
- (void)dealloc;
- (id)homeManager;
- (id)initWithHomeManager:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (void)setCommandsBeingExecuted:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end

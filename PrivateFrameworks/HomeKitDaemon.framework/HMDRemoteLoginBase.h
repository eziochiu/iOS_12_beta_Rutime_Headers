/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRemoteLoginBase : HMFObject <HMDHomeMessageReceiver, HMFLogging> {
    HMDAppleMediaAccessory * _accessory;
    NSString * _logString;
    HMFMessageDispatcher * _msgDispatcher;
    HMDRemoteLoginHandler * _remoteLoginHandler;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDAppleMediaAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *logString;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly) HMDRemoteLoginHandler *remoteLoginHandler;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (bool)shouldAcceptMessage:(id)arg1 home:(id)arg2;

- (void).cxx_destruct;
- (id)accessory;
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;
- (id)description;
- (id)initWithUUID:(id)arg1 accessory:(id)arg2 remoteLoginHandler:(id)arg3;
- (id)logIdentifier;
- (id)logString;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (void)registerForMessages;
- (id)remoteLoginHandler;
- (void)setMsgDispatcher:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)uuid;
- (id)workQueue;

@end

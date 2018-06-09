/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeMediaSystemHandler : NSObject <HMDHomeMessageReceiver, HMFLogging, NSSecureCoding> {
    HMDHome * _home;
    NSMutableArray * _mediaSystems;
    HMFMessageDispatcher * _msgDispatcher;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, retain) NSMutableArray *mediaSystems;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)checkToHandleMessage:(id)arg1 home:(id)arg2;
+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (id)preProcessMediaSystemMessage:(id)arg1 home:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addMediaSystem:(id)arg1;
- (id)_currentMediaSystemIfPrimary;
- (void)_handleAddMediaSystem:(id)arg1;
- (void)_handleAddMediaSystemModel:(id)arg1 message:(id)arg2;
- (void)_handleRemoveMediaSystem:(id)arg1;
- (void)_handleRemoveMediaSystemModel:(id)arg1 message:(id)arg2;
- (void)_handleUpdateMediaSystemModel:(id)arg1 message:(id)arg2;
- (void)_registerForMessages;
- (void)_removeMediaSystem:(id)arg1;
- (void)_userAssistantAccessControlDidUpdate:(id)arg1 accessories:(id)arg2;
- (id)backingStoreObjects;
- (void)configure:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)home;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHome:(id)arg1;
- (id)logIdentifier;
- (id)mediaSystems;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageReceiverChildren;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (void)setHome:(id)arg1;
- (void)setMediaSystems:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end

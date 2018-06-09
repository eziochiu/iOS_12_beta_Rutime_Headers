/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMEvent : NSObject <HMFMessageReceiver, HMObjectMerge, NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMDelegateCaller * _delegateCaller;
    bool  _endEvent;
    HMEventTrigger * _eventTrigger;
    HMFMessageDispatcher * _msgDispatcher;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSString * _triggerType;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (getter=isEndEvent, nonatomic) bool endEvent;
@property (nonatomic) HMEventTrigger *eventTrigger;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *triggerType;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)isSupportedForHome:(id)arg1;
+ (bool)sharedTriggerActivationSupportedForHome:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_configure:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3 msgDispatcher:(id)arg4;
- (void)_handleEventUpdatedNotification:(id)arg1;
- (void)_invalidate;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (id)_serializeForAdd;
- (void)_updateTriggerType;
- (id)clientQueue;
- (id)delegateCaller;
- (void)encodeWithCoder:(id)arg1;
- (id)eventTrigger;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1;
- (bool)isEndEvent;
- (bool)isEqual:(id)arg1;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)propertyQueue;
- (void)setClientQueue:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setEndEvent:(bool)arg1;
- (void)setEventTrigger:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (id)triggerType;
- (id)uniqueIdentifier;
- (id)uuid;

@end

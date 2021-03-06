/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface _HMCameraControl : NSObject <HMFMessageReceiver> {
    _HMCameraProfile * _cameraProfile;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMDelegateCaller * _delegateCaller;
    HMHome * _home;
    HMFMessageDispatcher * _msgDispatcher;
    NSUUID * _profileUniqueIdentifier;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMService * _service;
}

@property (nonatomic, readonly) _HMCameraProfile *cameraProfile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly, copy) NSUUID *profileUniqueIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly) HMService *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureWithClientQueue:(id)arg1 delegateCaller:(id)arg2 msgDispatcher:(id)arg3 home:(id)arg4;
- (void)_registerNotificationHandlers;
- (id)cameraProfile;
- (id)clientQueue;
- (id)delegateCaller;
- (id)home;
- (id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)profileUniqueIdentifier;
- (id)propertyQueue;
- (id)service;
- (void)setClientQueue:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setPropertyQueue:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface _HMCameraSource : NSObject <HMFMessageReceiver> {
    NSNumber * _aspectRatio;
    HMCameraView * _cameraView;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMDelegateCaller * _delegateCaller;
    HMFMessageDispatcher * _msgDispatcher;
    NSUUID * _profileUniqueIdentifier;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSString * _sessionID;
    NSNumber * _slotIdentifier;
}

@property (nonatomic, readonly, copy) NSNumber *aspectRatio;
@property (nonatomic) HMCameraView *cameraView;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly, copy) NSUUID *profileUniqueIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly, copy) NSString *sessionID;
@property (nonatomic, readonly, copy) NSNumber *slotIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)aspectRatio;
- (id)cameraView;
- (id)clientQueue;
- (id)delegateCaller;
- (id)initWithSessionID:(id)arg1 slotIdentifier:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4 msgDispatcher:(id)arg5 profileUniqueIdentifier:(id)arg6 aspectRatio:(id)arg7;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)profileUniqueIdentifier;
- (id)propertyQueue;
- (id)sessionID;
- (void)setCameraView:(id)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (id)slotIdentifier;

@end

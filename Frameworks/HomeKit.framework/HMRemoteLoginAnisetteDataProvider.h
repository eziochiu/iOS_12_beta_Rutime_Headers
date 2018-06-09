/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMRemoteLoginAnisetteDataProvider : NSObject <AKAnisetteServiceProtocol, HMFMessageReceiver, NSCopying, NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMDelegateCaller * _delegateCaller;
    HMFMessageDispatcher * _msgDispatcher;
    NSUUID * _uuid;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_configureClientQueue:(id)arg1 delegateCaller:(id)arg2 msgDispatcher:(id)arg3;
- (id)clientQueue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegateCaller;
- (void)encodeWithCoder:(id)arg1;
- (void)eraseAnisetteWithCompletion:(id /* block */)arg1;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithCoder:(id)arg1;
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (void)provisionAnisetteWithCompletion:(id /* block */)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)syncAnisetteWithSIMData:(id)arg1 completion:(id /* block */)arg2;
- (id)uuid;

@end

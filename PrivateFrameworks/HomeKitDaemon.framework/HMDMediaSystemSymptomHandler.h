/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMediaSystemSymptomHandler : HMFObject <HMDHomeMessageReceiver, HMFLogging, NSSecureCoding> {
    struct NSDictionary { Class x1; } * _currentSymptoms;
    HMDMediaSystem * _mediaSystem;
    HMFMessageDispatcher * _msgDispatcher;
    NSUUID * _uuid;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSDictionary *currentSymptoms;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDMediaSystem *mediaSystem;
@property (nonatomic, readonly) NSSet *mergedSymptoms;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleNewDiscoveredSymptoms:(id)arg1 forAccessory:(id)arg2;
- (struct NSDictionary { Class x1; }*)_initializePlaceholderSymptomsDict:(id)arg1;
- (void)_refreshCurrentDeviceSymptoms;
- (void)_updateBackingStoreModelWithNewSymptoms:(struct NSDictionary { Class x1; }*)arg1;
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;
- (struct NSDictionary { Class x1; }*)currentSymptoms;
- (void)encodeWithCoder:(id)arg1;
- (void)handleMediaSystemSymptoms:(struct NSDictionary { Class x1; }*)arg1 message:(id)arg2;
- (void)handleNewDiscoveredSymptoms:(id)arg1 forAccessory:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaSystem:(id)arg1 symptoms:(id)arg2;
- (id)logIdentifier;
- (id)mediaSystem;
- (id)mergedSymptoms;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (void)refreshCurrentDeviceSymptoms;
- (void)setCurrentSymptoms:(struct NSDictionary { Class x1; }*)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)uuid;
- (id)workQueue;

@end

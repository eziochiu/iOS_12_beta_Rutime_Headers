/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSoftwareUpdateManager : HMFObject <HMFMessageReceiver> {
    HMDAppleMediaAccessory * _accessory;
    NSHashTable * _activeClients;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMDHomeManager * _homeManager;
    NSUUID * _identifier;
}

@property HMDAppleMediaAccessory *accessory;
@property (nonatomic, readonly) NSHashTable *activeClients;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHomeManager *homeManager;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;

+ (bool)isSupported;

- (void).cxx_destruct;
- (void)_handleStart:(id)arg1;
- (void)_handleStop:(id)arg1;
- (void)_handleUpdateAvailableUpdate:(id)arg1;
- (bool)_shouldAcceptMessage:(id)arg1;
- (id)accessory;
- (id)activeClients;
- (id)clientQueue;
- (void)fetchAvailableUpdateWithCompletionHandler:(id /* block */)arg1;
- (id)homeManager;
- (id)identifier;
- (id)init;
- (id)initWithHomeManager:(id)arg1;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)registerForMessages;
- (void)setAccessory:(id)arg1;
- (void)startUpdate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateAvailableUpdate:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSoftwareUpdateDocumentationManager : HMFObject <HMFLogging, HMFNetMonitorDelegate> {
    NSMutableSet * _assets;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMFNetMonitor * _netMonitor;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSMutableSet * _registeredMetadata;
}

@property (readonly) NSArray *assets;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMFNetMonitor *netMonitor;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) NSMutableSet *registeredMetadata;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)addAsset:(id)arg1;
- (id)assetForDocumentationMetadata:(id)arg1;
- (id)assets;
- (void)auditAsset:(id)arg1;
- (id)clientQueue;
- (id)init;
- (id)netMonitor;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)parseCachedAssets;
- (id)propertyQueue;
- (void)registerDocumentationMetadata:(id)arg1;
- (id)registeredMetadata;
- (void)removeAsset:(id)arg1;
- (void)unregisterDocumentationMetadata:(id)arg1;

@end

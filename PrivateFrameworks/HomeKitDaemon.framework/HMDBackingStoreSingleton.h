/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreSingleton : HMFObject <HMFLogging> {
    NSMapTable * _classToNameTransform;
    HMFVersion * _dataVersion;
    HMDHomeManager * _homeManager;
    HMDBackingStoreLocal * _local;
    NSMapTable * _nameToClassTransform;
    NSMapTable * _objectLookup;
    NSMapTable * _objectPropertyHashLookup;
    NSOperationQueue * _queue;
}

@property (nonatomic, readonly) NSMapTable *classToNameTransform;
@property (nonatomic, retain) HMFVersion *dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDHomeManager *homeManager;
@property (nonatomic, retain) HMDBackingStoreLocal *local;
@property (nonatomic, readonly) NSMapTable *nameToClassTransform;
@property (nonatomic, readonly) NSMapTable *objectLookup;
@property (nonatomic, readonly) NSMapTable *objectPropertyHashLookup;
@property (nonatomic, readonly) NSOperationQueue *queue;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (void)resetClassMappings;
+ (void)resetSchemaHash;
+ (void)setClass:(Class)arg1 forClassName:(id)arg2;
+ (id)sharedInstance;
+ (void)start;

- (void).cxx_destruct;
- (id)classToNameTransform;
- (id)dataVersion;
- (id)flushBackingStore;
- (id)homeManager;
- (id)init;
- (id)local;
- (id)logIdentifier;
- (id)nameToClassTransform;
- (id)objectLookup;
- (id)objectPropertyHashLookup;
- (id)queue;
- (id)resetBackingStore;
- (id)schemaHashForObject:(id)arg1;
- (void)setDataVersion:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setLocal:(id)arg1;

@end

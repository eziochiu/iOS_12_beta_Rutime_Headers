/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEORegionalResourcesVersionMigrationTask : NSObject <GEOActiveTileGroupMigrationTask> {
    NSSet * _activeScales;
    NSSet * _activeScenarios;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _completionHandler;
    NSArray * _loadedResources;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    GEORegionalResourcesVersionMigrator * _migrator;
    GEOTileGroup * _newTileGroup;
    GEOActiveTileGroup * _oldTileGroup;
    GEOReportedProgress * _progress;
    GEOResourceLoader * _resourceLoader;
    GEOResources * _resourceManifest;
    bool  _running;
    <NSObject> * _transaction;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) long long estimatedWeight;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;
@property (nonatomic, retain) <NSObject> *transaction;

+ (id)_resourceLoaderFactoryWithTargetDirectory:(id)arg1 baseURLString:(id)arg2 resources:(id)arg3 maximumConcurrentLoads:(unsigned long long)arg4 additionalDirectoryToConsider:(id)arg5;
+ (id)_resourcesDirectory:(id)arg1;

- (void).cxx_destruct;
- (id)_resourcesDirectory;
- (void)cancel;
- (long long)estimatedWeight;
- (id)init;
- (id)initWithMigrator:(id)arg1 manifestConfiguration:(id)arg2 newTileGroup:(id)arg3 inResourceManifest:(id)arg4 oldTileGroup:(id)arg5 activeScales:(id)arg6 activeScenarios:(id)arg7;
- (void)populateTileGroup:(id)arg1;
- (id)progress;
- (void)removeOldData:(id)arg1;
- (void)setTransaction:(id)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1 callbackQueue:(id)arg2;
- (id)transaction;

@end

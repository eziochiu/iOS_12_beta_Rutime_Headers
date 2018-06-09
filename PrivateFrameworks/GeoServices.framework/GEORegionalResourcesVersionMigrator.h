/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORegionalResourcesVersionMigrator : NSObject <GEOActiveTileGroupMigrator> {
    NSObject<OS_dispatch_queue> * _isolationQueue;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    GEOMapLayerDataManager * _mapLayerDataManager;
    NSMutableArray * _runningTasks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRunningTask:(id)arg1;
- (void)_removeRunningTask:(id)arg1;
- (id)initWithManifestConfiguration:(id)arg1 mapLayerDataManager:(id)arg2;
- (id)taskForNewTileGroup:(id)arg1 inResourceManifest:(id)arg2 oldTileGroup:(id)arg3 activeScales:(id)arg4 activeScenarios:(id)arg5 updateType:(long long)arg6;

@end
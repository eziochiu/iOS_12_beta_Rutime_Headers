/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOExperimentServerLocalProxy : NSObject <GEOExperimentServerProxy, GEOResourceManifestTileGroupObserver> {
    GEOABAssignmentRequest * _currentRequest;
    NSLock * _currentRequestLock;
    <GEOExperimentServerProxyDelegate> * _delegate;
    GEOABAssignmentResponse * _experimentsInfo;
    NSLock * _experimentsInfoLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GEOExperimentServerProxyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEOABAssignmentResponse *experimentsInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_debug_fetchAllAvailableExperiments:(id /* block */)arg1;
- (void)_debug_setActiveExperimentBranchDictionaryRepresentation:(id)arg1;
- (void)_debug_setBucketIdDictionaryRepresentation:(id)arg1;
- (void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
- (void)_deleteExperimentInfoFromDisk;
- (void)_executeRefreshWithinTime:(double)arg1;
- (void)_invalidateTileCache:(bool)arg1 placesCache:(bool)arg2;
- (void)_loadExperimentsConfiguration:(id /* block */)arg1;
- (bool)_removeOldExperimentsInfoIfNecessary;
- (void)_setupRefreshActivity;
- (void)_updateIfNecessary;
- (void)_writeExperimentInfoToDisk:(id)arg1;
- (void)abAssignUUIDWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (id)experimentsInfo;
- (void)forceUpdate;
- (id)initWithDelegate:(id)arg1;
- (void)refreshDatasetABStatus:(id)arg1;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)setDelegate:(id)arg1;

@end

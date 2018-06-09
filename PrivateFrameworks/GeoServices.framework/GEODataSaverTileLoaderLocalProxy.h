/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODataSaverTileLoaderLocalProxy : NSObject <GEODataSaverTileLoaderProxy> {
    bool  _hasLoadedLastStateFromDisk;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    GEOCellDataSaverState * _lastState;
}

@property (getter=isDataSaverEnabled, nonatomic, readonly) bool dataSaverEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_readStateFromDisk:(id*)arg1;
- (void)_removeExistingStateFromDisk;
- (void)_writeStateToDisk;
- (void)getMapRegionWithCallbackQueue:(id)arg1 callback:(id /* block */)arg2;
- (id)init;
- (bool)isDataSaverEnabled;
- (void)submitMapRegion:(id)arg1 completion:(id /* block */)arg2;

@end

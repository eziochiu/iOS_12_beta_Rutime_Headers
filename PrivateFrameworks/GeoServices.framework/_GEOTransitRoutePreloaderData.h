/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOTransitRoutePreloaderData : NSObject {
    _GEOTransitPreloadCamera * _camera;
    unsigned long long  _currentBatchGeneration;
    bool  _isSufficientlyLoaded;
    NSMutableSet * _placecardsMissed;
    NSMutableSet * _placecardsReceived;
    NSMutableArray * _preloadBatches;
    GEOTileKeyList * _tilesLoadingOrLoaded;
    GEOTileKeyList * _tilesMissed;
    GEOTileKeyList * _tilesReceived;
}

@property (nonatomic, retain) _GEOTransitPreloadCamera *camera;
@property (nonatomic) unsigned long long currentBatchGeneration;
@property (nonatomic) bool isSufficientlyLoaded;
@property (nonatomic, retain) NSMutableSet *placecardsMissed;
@property (nonatomic, retain) NSMutableSet *placecardsReceived;
@property (nonatomic, retain) NSMutableArray *preloadBatches;
@property (nonatomic, retain) GEOTileKeyList *tilesLoadingOrLoaded;
@property (nonatomic, retain) GEOTileKeyList *tilesMissed;
@property (nonatomic, retain) GEOTileKeyList *tilesReceived;

- (void).cxx_destruct;
- (id)camera;
- (unsigned long long)currentBatchGeneration;
- (id)init;
- (bool)isSufficientlyLoaded;
- (id)placecardsMissed;
- (id)placecardsReceived;
- (id)preloadBatches;
- (void)setCamera:(id)arg1;
- (void)setCurrentBatchGeneration:(unsigned long long)arg1;
- (void)setIsSufficientlyLoaded:(bool)arg1;
- (void)setPlacecardsMissed:(id)arg1;
- (void)setPlacecardsReceived:(id)arg1;
- (void)setPreloadBatches:(id)arg1;
- (void)setTilesLoadingOrLoaded:(id)arg1;
- (void)setTilesMissed:(id)arg1;
- (void)setTilesReceived:(id)arg1;
- (id)tilesLoadingOrLoaded;
- (id)tilesMissed;
- (id)tilesReceived;

@end

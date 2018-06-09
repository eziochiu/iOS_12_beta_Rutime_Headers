/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKScene : NSObject <NSCopying> {
    GEOTileKeyList * _debugKeyList;
    bool  _fullyLoaded;
    VKTileKeyList * _keysInView;
    bool  _mapIsOpaque;
    VKTileKeyList * _neighborKeys;
    NSSet * _neighborTiles;
    NSMutableArray * _rasterOverlayScenes;
    NSSet * _tilesToRender;
}

@property (nonatomic, retain) GEOTileKeyList *debugKeyList;
@property (nonatomic) bool fullyLoaded;
@property (nonatomic, retain) VKTileKeyList *keysInView;
@property (nonatomic) bool mapIsOpaque;
@property (nonatomic, retain) VKTileKeyList *neighborKeys;
@property (nonatomic, retain) NSSet *neighborTiles;
@property (nonatomic, retain) NSSet *tilesToRender;

- (void)addRasterOverlayScene:(id)arg1;
- (void)clearRasterOverlayScenes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugKeyList;
- (bool)fullyLoaded;
- (id)keysInView;
- (bool)mapIsOpaque;
- (id)neighborKeys;
- (id)neighborTiles;
- (id)rasterOverlaySceneAtLevel:(unsigned long long)arg1;
- (void)reset;
- (void)setDebugKeyList:(id)arg1;
- (void)setFullyLoaded:(bool)arg1;
- (void)setKeysInView:(id)arg1;
- (void)setMapIsOpaque:(bool)arg1;
- (void)setNeighborKeys:(id)arg1;
- (void)setNeighborTiles:(id)arg1;
- (void)setTilesToRender:(id)arg1;
- (id)tilesToRender;
- (id)unloadedTiles;

@end

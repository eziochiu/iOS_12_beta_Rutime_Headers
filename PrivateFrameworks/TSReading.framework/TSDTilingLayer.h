/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDTilingLayer : CALayer {
    <TSDTileGeometryProviding> * _geometryProvider;
    NSMutableArray * mDirtyTiles;
    struct { 
        unsigned int tiled : 1; 
        unsigned int hasCustomContents : 1; 
        unsigned int drawsInBackground : 1; 
        unsigned int forceTiling : 1; 
        unsigned int needsTileLayout : 1; 
        unsigned int needsTileDisplay : 1; 
        unsigned int needsSelfDisplay : 1; 
    }  mFlags;
    bool  mHasEverHadTileLayout;
    struct CGSize { 
        double width; 
        double height; 
    }  mLastBoundsSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mLastVisibleBounds;
    CALayer * mProviderContentLayer;
    struct CGSize { 
        double width; 
        double height; 
    }  mTileSize;
    int  mTilingMode;
}

@property (nonatomic) bool drawsInBackground;
@property (nonatomic) bool forceTiling;
@property (nonatomic, retain) <TSDTileGeometryProviding> *geometryProvider;
@property (nonatomic) int tilingMode;

+ (struct CGSize { double x1; double x2; })defaultTileSize;
+ (struct CGImage { }*)p_newCheckerboardImage;
+ (struct CGImage { }*)p_newGeneratedCheckerboardImage;

- (void)dealloc;
- (void)display;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (bool)drawsInBackground;
- (bool)forceTiling;
- (id)geometryProvider;
- (void)i_drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2 inBackground:(bool)arg3;
- (void)i_drawTile:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)i_drawTileInBackground:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)i_setNeedsTileDisplayForTile:(id)arg1;
- (id)init;
- (void)layoutSublayers;
- (id)p_nonTileAndContentLayers;
- (id)p_tileAndContentLayers;
- (id)p_tileLayers;
- (unsigned long long)p_tilesHigh;
- (unsigned long long)p_tilesWide;
- (void)p_updateTileIndexes:(id)arg1 visibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)p_updateTileSizeWithLayerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContents:(id)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setDrawsInBackground:(bool)arg1;
- (void)setForceTiling:(bool)arg1;
- (void)setGeometryProvider:(id)arg1;
- (void)setNeedsDisplayForDirtyTiles:(id)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsLayout;
- (void)setNeedsLayoutForTilingLayers;
- (void)setTileContents:(id)arg1;
- (void)setTilingMode:(int)arg1;
- (int)tilingMode;
- (bool)tilingSafeHasContents;
- (void)tilingSafeSetSublayers:(id)arg1;

@end

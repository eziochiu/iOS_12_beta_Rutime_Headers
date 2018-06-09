/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface __UITextTiledLayer : CALayer <CALayerDelegate> {
    UIBezierPath * _mask;
    double  _maxTileHeight;
    struct { 
        unsigned int disableTiling : 1; 
        unsigned int ditchAllTiles : 1; 
        unsigned int suspendLayout : 4; 
        unsigned int delegateConstrainsTileableBounds : 1; 
        unsigned int delegateSupportsMaskedRects : 1; 
        unsigned int delegateImplementsWillDraw : 1; 
    }  _tcTiledLayerFlags;
    struct CGSize { 
        double width; 
        double height; 
    }  _tileSize;
    NSMutableArray * _unusedTiles;
    NSTimer * _unusedTilesCleanupTimer;
    NSMutableArray * _visibleTiles;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maxTileHeight;
@property (readonly) Class superclass;
@property (nonatomic) bool usesTiledLayers;

- (void).cxx_destruct;
- (void)_drawInContext:(struct CGContext { }*)arg1;
- (id)_prepareNonTiledGhostLayersForVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_prepareTilesForVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_preparedTileForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 mask:(id)arg2 opacity:(double)arg3 deferred:(bool)arg4;
- (void)dealloc;
- (void)drawDirtyLayer:(id)arg1 intoContext:(struct CGContext { }*)arg2;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)init;
- (void)layerWillDraw:(id)arg1;
- (void)layoutSublayers;
- (double)maxTileHeight;
- (void)resumeTiling;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentsFormat:(id)arg1;
- (void)setContentsMultiplyColor:(struct CGColor { }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawsAsynchronously:(bool)arg1;
- (void)setMaxTileHeight:(double)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUsesTiledLayers:(bool)arg1;
- (void)suspendTiling;
- (bool)usesTiledLayers;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTileHider : NSObject {
    double  __animationDuration;
    NSMutableDictionary * __hiddenTileControllersByLayoutInfo;
    PUTilingView * _tilingView;
}

@property (nonatomic, readonly) double _animationDuration;
@property (nonatomic, readonly) NSMutableDictionary *_hiddenTileControllersByLayoutInfo;
@property (nonatomic, readonly) PUTilingView *tilingView;

- (void).cxx_destruct;
- (double)_animationDuration;
- (id)_hiddenTileControllersByLayoutInfo;
- (void)dealloc;
- (void)hideTilesAtIndexPath:(id)arg1 withKinds:(id)arg2 dataSourceIdentifier:(id)arg3 animated:(bool)arg4;
- (id)init;
- (id)initWithTilingView:(id)arg1;
- (void)reattachTiles;
- (id)tilingView;
- (void)unhideTilesAnimated:(bool)arg1;

@end

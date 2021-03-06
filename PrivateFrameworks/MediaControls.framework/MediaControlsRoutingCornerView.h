/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsRoutingCornerView : CCUICAPackageView {
    bool  _routesAvailable;
    bool  _routing;
    bool  _shouldPauseAnimations;
}

@property (getter=routesAreAvailable, nonatomic) bool routesAvailable;
@property (getter=isRouting, nonatomic) bool routing;
@property (nonatomic) bool shouldPauseAnimations;

- (void)_updateGlyph;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isRouting;
- (bool)routesAreAvailable;
- (void)setRoutesAvailable:(bool)arg1;
- (void)setRouting:(bool)arg1;
- (void)setShouldPauseAnimations:(bool)arg1;
- (bool)shouldPauseAnimations;

@end

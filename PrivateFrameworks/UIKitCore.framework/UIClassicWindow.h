/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIClassicWindow : UIWindow {
    struct CGSize { 
        double width; 
        double height; 
    }  _sceneSizeOverride;
}

@property (nonatomic) struct CGSize { double x1; double x2; } sceneSizeOverride;

- (double)_adjustedWindowLevelFromLevel:(double)arg1;
- (bool)_isConstrainedByScreenJail;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sceneReferenceBounds;
- (bool)_shouldZoom;
- (void)_updateTransformLayerForClassicPresentation;
- (struct CGSize { double x1; double x2; })sceneSizeOverride;
- (void)setSceneSizeOverride:(struct CGSize { double x1; double x2; })arg1;

@end

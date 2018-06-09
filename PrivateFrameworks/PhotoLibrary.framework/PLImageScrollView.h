/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLImageScrollView : UIScrollView {
    bool  _adjustZoomScaleAfterRotation;
}

@property (nonatomic) bool adjustZoomScaleAfterRotation;

- (void)_centerContentIfNecessary;
- (bool)adjustZoomScaleAfterRotation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAdjustZoomScaleAfterRotation:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)willAnimateRotationToInterfaceOrientation:(id)arg1;

@end

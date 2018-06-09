/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISoftwareDimmingWindow : UIWindow {
    float  _overlayLevel;
}

@property (nonatomic) float overlayLevel;

- (bool)_ignoresHitTest;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (float)overlayLevel;
- (void)setOverlayLevel:(float)arg1;
- (void)updateOverlayColor;

@end

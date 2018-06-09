/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIToolbarVisualProvider : NSObject {
    UIView * _currentBackgroundView;
    UIView * _customBackgroundView;
    UIToolbar * _toolbar;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } backgroundFrame;
@property (nonatomic, readonly) UIView *currentBackgroundView;
@property (nonatomic, retain) UIView *customBackgroundView;
@property (nonatomic, readonly) UIToolbar *toolbar;
@property (nonatomic, readonly) bool toolbarIsSmall;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })backgroundFrame;
- (id)currentBackgroundView;
- (id)customBackgroundView;
- (void)customViewChangedForButtonItem:(id)arg1;
- (struct CGSize { double x1; double x2; })defaultSizeForOrientation:(long long)arg1;
- (void)drawBackgroundViewInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithToolbar:(id)arg1;
- (void)positionToolbarButtonsAndResetFontScaleAdjustment:(bool)arg1;
- (void)setCustomBackgroundView:(id)arg1;
- (id)toolbar;
- (bool)toolbarIsSmall;
- (void)updateArchivedSubviews:(id)arg1;
- (void)updateBarBackground;
- (void)updateBarBackgroundSize;
- (void)updateBarForStyle:(long long)arg1;
- (void)updateItemsForNewFrame:(id)arg1;
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(bool)arg3;

@end

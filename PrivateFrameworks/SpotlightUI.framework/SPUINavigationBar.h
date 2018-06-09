/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

@interface SPUINavigationBar : UINavigationBar {
    bool  _roundedCornerVisible;
    UIView * _topDividerView;
}

@property (getter=isRoundedCornerVisible, nonatomic) bool roundedCornerVisible;
@property (retain) UIView *topDividerView;

+ (bool)_supportsCanvasView;

- (void).cxx_destruct;
- (id)_popNavigationItemWithTransition:(int)arg1;
- (void)didAddSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isLocked;
- (bool)isRoundedCornerVisible;
- (void)performShowSeparator:(bool)arg1 animated:(bool)arg2;
- (void)performUpdateBlurProgress:(double)arg1 animated:(bool)arg2;
- (void)pushNavigationItem:(id)arg1;
- (void)setRoundedCornerVisible:(bool)arg1;
- (void)setTopDividerView:(id)arg1;
- (void)showSeparator:(bool)arg1 animated:(bool)arg2;
- (id)topDividerView;
- (void)updateBackgroundViewVisibility;
- (void)updateBlurProgress:(double)arg1 animated:(bool)arg2;
- (void)updateColors;

@end

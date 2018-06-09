/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardCandidatePageControl : UIView {
    UIKeyboardCandidateBarSegmentControl * _pageControl;
    bool  _usingVerticalArrows;
}

+ (id)imageWithColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (void)_changePage:(id)arg1;
- (void)_setRenderConfig:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setUseVerticalArrows:(bool)arg1;
- (void)updatePageControlWithStatus:(bool)arg1 rightControlButtonEnabled:(bool)arg2;

@end

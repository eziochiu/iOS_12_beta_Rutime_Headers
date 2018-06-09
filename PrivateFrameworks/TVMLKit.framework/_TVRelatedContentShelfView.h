/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVRelatedContentShelfView : UIView {
    UIView * _lastFocusedView;
    double  _relatedHeight;
    UIView * _relatedView;
    _TVRelatedWrappingView * _relatedWrappingView;
    UIView * _shelfView;
}

@property (nonatomic) double relatedHeight;
@property (nonatomic, retain) UIView *relatedView;
@property (nonatomic) UIView *shelfView;

- (void).cxx_destruct;
- (void)_layoutRelatedView;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)preferredFocusEnvironments;
- (double)relatedHeight;
- (id)relatedView;
- (void)setRelatedHeight:(double)arg1;
- (void)setRelatedView:(id)arg1;
- (void)setShelfView:(id)arg1;
- (id)shelfView;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
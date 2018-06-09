/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIProudLockIconView : UIView {
    UIColor * _contentColor;
    NSSet * _imageLayers;
    LAUIPearlGlyphView * _lazy_pearlGlyphView;
    SBUICAPackageView * _lockView;
    long long  _state;
}

@property (nonatomic, retain) UIColor *contentColor;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (id)_activeViewForState:(long long)arg1;
- (void)_forEachLayerInHierarchy:(id)arg1 perform:(id /* block */)arg2;
- (id)_pearlGlyphView;
- (void)_transitionToState:(long long)arg1 animated:(bool)arg2 options:(long long)arg3 completion:(id /* block */)arg4;
- (id)contentColor;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setContentColor:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setState:(long long)arg1 animated:(bool)arg2;
- (void)setState:(long long)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setState:(long long)arg1 animated:(bool)arg2 options:(long long)arg3 completion:(id /* block */)arg4;
- (long long)state;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVBackgroundView : UIView {
    bool  _automaticallyDrawsRoundedCorners;
    AVBackdropView * _backdropView;
}

@property (nonatomic) bool automaticallyDrawsRoundedCorners;
@property (nonatomic, retain) AVBackdropView *backdropView;

- (void).cxx_destruct;
- (void)_ensureOrRemoveBackdropView;
- (bool)_isContainedInOverlappingBackgroundView;
- (void)addSubview:(id)arg1 applyingMaterialStyle:(long long)arg2 tintEffectStyle:(long long)arg3;
- (bool)automaticallyDrawsRoundedCorners;
- (id)backdropView;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAutomaticallyDrawsRoundedCorners:(bool)arg1;
- (void)setBackdropView:(id)arg1;

@end

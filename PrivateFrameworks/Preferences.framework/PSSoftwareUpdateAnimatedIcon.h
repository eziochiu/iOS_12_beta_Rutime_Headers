/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSoftwareUpdateAnimatedIcon : UIView {
    bool  _animating;
    UIImageView * _innerGearView;
    UIImageView * _outerGearShadowView;
    UIImageView * _outerGearView;
}

@property (nonatomic, readonly) UIImageView *innerGearView;
@property (nonatomic, readonly) UIImageView *outerGearShadowView;
@property (nonatomic, readonly) UIImageView *outerGearView;

- (void).cxx_destruct;
- (void)createConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)innerGearView;
- (id)outerGearShadowView;
- (id)outerGearView;
- (void)setAnimating:(bool)arg1;

@end

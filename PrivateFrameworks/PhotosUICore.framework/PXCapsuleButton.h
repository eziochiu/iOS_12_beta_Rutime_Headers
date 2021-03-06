/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCapsuleButton : UIButton {
    UIActivityIndicatorView * _activityIndicatorView;
    NSMutableDictionary * _stateColorMap;
}

- (void).cxx_destruct;
- (id)_backgroundImageWithColor:(id)arg1;
- (id)_titleFont;
- (id)colorForState:(unsigned long long)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;

@end

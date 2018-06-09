/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UICheckeredPatternView : UIView {
    UIColor * _checkerColor;
    UIColor * _patternColor;
    double  _scale;
}

@property (nonatomic, retain) UIColor *checkerColor;

- (void).cxx_destruct;
- (bool)_canDrawContent;
- (id)checkerColor;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCheckerColor:(id)arg1;
- (void)updatePatternColor;

@end

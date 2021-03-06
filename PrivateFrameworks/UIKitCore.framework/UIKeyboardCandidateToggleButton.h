/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardCandidateToggleButton : UIButton {
    NSString * _arrowDirection;
    UIKBThemedView * _themedView;
}

@property (nonatomic, copy) NSString *arrowDirection;
@property (nonatomic, retain) UIKBThemedView *themedView;

+ (id)arrowImageName;

- (void).cxx_destruct;
- (void)_setRenderConfig:(id)arg1;
- (id)arrowColorForState:(unsigned long long)arg1;
- (id)arrowDirection;
- (void)dimKeys:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })labelFrameFromFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setArrowColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setArrowDirection:(id)arg1;
- (void)setThemedView:(id)arg1;
- (id)themedView;
- (void)updateArrow;

@end

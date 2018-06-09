/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardLayoutDictation : UIKeyboardLayout {
    UIKBBackgroundView * _backgroundView;
    UIKBTree * _keyplane;
}

+ (id)activeInstance;
+ (struct CGSize { double x1; double x2; })keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3;

- (int)_clipCornersOfView:(id)arg1;
- (void)_moveWithEvent:(id)arg1;
- (id)currentKeyplane;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dragGestureRectInView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setRenderConfig:(id)arg1;
- (void)setupBackgroundViewForNewSplitTraits:(id)arg1;
- (bool)shouldFadeFromLayout;
- (bool)shouldFadeToLayout;
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;
- (struct CGSize { double x1; double x2; })splitLeftSize;
- (bool)usesAutoShift;
- (bool)visible;

@end

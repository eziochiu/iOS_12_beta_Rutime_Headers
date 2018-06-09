/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIInputSwitcherShadowView : UIView {
    _UIBackdropView * _blurView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyRect;
    UIKeyboardMenuView * _menu;
    NSArray * m_gradientColors;
    int  m_mode;
    double  m_pointerOffset;
}

@property (nonatomic, retain) _UIBackdropView *blurView;
@property (nonatomic, retain) NSArray *gradientColors;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyRect;
@property (nonatomic) UIKeyboardMenuView *menu;
@property (nonatomic) int mode;
@property (nonatomic) double pointerOffset;

- (void).cxx_destruct;
- (id)blurView;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)gradientColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyRect;
- (void)layoutSubviews;
- (id)menu;
- (int)mode;
- (double)pointerOffset;
- (void)setBlurView:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGradientColors:(id)arg1;
- (void)setKeyRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMenu:(id)arg1;
- (void)setMode:(int)arg1;
- (void)setPointerOffset:(double)arg1;

@end

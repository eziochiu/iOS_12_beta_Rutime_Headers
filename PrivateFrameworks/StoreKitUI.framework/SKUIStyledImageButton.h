/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStyledImageButton : UIControl {
    SKUIImageView * _additionalImageView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _bigHitInsets;
    bool  _didInitialHighlightForTouch;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitRectInsets;
    SKUIImageView * _imageView;
    bool  _useBigHitTarget;
}

@property (nonatomic, readonly) SKUIImageView *additionalImageView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } bigHitInsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitRectInsets;
@property (nonatomic, readonly) SKUIImageView *imageView;
@property (nonatomic) bool useBigHitTarget;

- (void).cxx_destruct;
- (id)additionalImageView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })bigHitInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitRectInsets;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setBigHitInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHitRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setUseBigHitTarget:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (bool)useBigHitTarget;

@end

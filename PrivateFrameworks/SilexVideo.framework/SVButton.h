/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVButton : UIButton {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _touchInsets;
    id /* block */  _touchUpInsideBlock;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } touchInsets;
@property (setter=onTouchUpInside:, nonatomic, copy) id /* block */ touchUpInsideBlock;

- (void).cxx_destruct;
- (void)_privateButtonTapped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)onTouchUpInside:(id /* block */)arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setTouchInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })touchInsets;
- (id /* block */)touchUpInsideBlock;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISFAirDropActiveIconView : UIImageView {
    UIView * _circleMaskView;
    bool  _masked;
}

@property (getter=isMasked, nonatomic) bool masked;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 grayscale:(bool)arg2;
- (bool)isMasked;
- (void)layoutSubviews;
- (void)setMasked:(bool)arg1;

@end

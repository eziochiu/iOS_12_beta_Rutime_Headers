/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProductPageTableHeaderView : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    UILabel * _titleLabel;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICategoryTableViewCell : UITableViewCell {
    struct CGSize { 
        double width; 
        double height; 
    }  _expectedImageSize;
    bool  _layoutNeedsLayout;
    UIView * _separatorView;
}

@property (nonatomic) struct CGSize { double x1; double x2; } expectedImageSize;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })expectedImageSize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setExpectedImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end

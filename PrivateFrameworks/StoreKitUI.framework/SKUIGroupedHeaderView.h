/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIGroupedHeaderView : UIView {
    UIView * _botBorder;
    UILabel * _titleLabel;
    UIView * _topBorder;
}

@property (nonatomic) bool hasBottomBorder;
@property (nonatomic) bool hasTopBorder;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (bool)hasBottomBorder;
- (bool)hasTopBorder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setHasBottomBorder:(bool)arg1;
- (void)setHasTopBorder:(bool)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;

@end

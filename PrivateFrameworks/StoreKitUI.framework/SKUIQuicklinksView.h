/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIQuicklinksView : UIView {
    UIView * _borderView;
    UIView * _collectionView;
    UIColor * _titleColor;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIView *collectionView;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)collectionView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;

@end

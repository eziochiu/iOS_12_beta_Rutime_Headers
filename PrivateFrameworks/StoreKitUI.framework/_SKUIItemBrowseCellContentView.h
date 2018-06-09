/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface _SKUIItemBrowseCellContentView : UIView {
    UILabel * _indexNumberLabel;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    SKUICellImageView * _userRatingImageView;
    UILabel * _userRatingLabel;
}

@property (nonatomic, retain) UILabel *indexNumberLabel;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) SKUICellImageView *userRatingImageView;
@property (nonatomic, retain) UILabel *userRatingLabel;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)indexNumberLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setIndexNumberLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUserRatingImageView:(id)arg1;
- (void)setUserRatingLabel:(id)arg1;
- (id)subtitleLabel;
- (id)titleLabel;
- (id)userRatingImageView;
- (id)userRatingLabel;

@end

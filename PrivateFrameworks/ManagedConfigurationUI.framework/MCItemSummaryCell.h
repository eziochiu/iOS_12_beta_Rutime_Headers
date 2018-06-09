/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCItemSummaryCell : UITableViewCell {
    UIImageView * _itemImageView;
    UILabel * _itemSubtitleLabel;
    UILabel * _itemTitleLabel;
    UIView * _itemTitleView;
}

@property (nonatomic, retain) UIImageView *itemImageView;
@property (nonatomic, retain) UILabel *itemSubtitleLabel;
@property (nonatomic, retain) UILabel *itemTitleLabel;
@property (nonatomic, retain) UIView *itemTitleView;

+ (double)titleOriginX;

- (void).cxx_destruct;
- (id)_profileImageAppropriateForDevice;
- (void)_setupCell;
- (void)_setupConstraints;
- (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)itemImageView;
- (id)itemSubtitleLabel;
- (id)itemTitleLabel;
- (id)itemTitleView;
- (void)setItemImageView:(id)arg1;
- (void)setItemSubtitleLabel:(id)arg1;
- (void)setItemTitleLabel:(id)arg1;
- (void)setItemTitleView:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;

@end

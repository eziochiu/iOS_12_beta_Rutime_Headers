/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKIDRegisteredReviewCell : UITableViewCell {
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *titleLabel;

+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (void)_updateForCurrentSizeCategory;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setTitleLabel:(id)arg1;
- (void)setupConstraints;
- (void)setupSubviews;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end

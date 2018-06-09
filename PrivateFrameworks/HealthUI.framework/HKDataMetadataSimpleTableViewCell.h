/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDataMetadataSimpleTableViewCell : UITableViewCell {
    UILabel * _subtitleTextLabel;
    UILabel * _titleTextLabel;
}

@property (nonatomic, retain) UILabel *subtitleTextLabel;
@property (nonatomic, retain) UILabel *titleTextLabel;

- (void).cxx_destruct;
- (void)_updateForCurrentSizeCategory;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)setSubtitleTextLabel:(id)arg1;
- (void)setTitleTextLabel:(id)arg1;
- (void)setupConstraints;
- (void)setupSubviews;
- (id)subtitleTextLabel;
- (id)titleTextLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end

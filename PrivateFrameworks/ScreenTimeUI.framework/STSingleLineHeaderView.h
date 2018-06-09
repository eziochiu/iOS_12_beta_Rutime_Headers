/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STSingleLineHeaderView : UITableViewHeaderFooterView <PSHeaderFooterView> {
    UILabel * _detailLabel;
    PSSpecifier * _specifier;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UILabel *detailLabel;
@property (nonatomic, retain) PSSpecifier *specifier;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)detailLabel;
- (id)initWithSpecifier:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (void)reloadSpecifier;
- (void)setDetailLabel:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)specifier;
- (id)titleLabel;

@end

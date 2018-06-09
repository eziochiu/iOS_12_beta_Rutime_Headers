/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
 */

@interface VCUIGallerySectionHeaderView : UITableViewHeaderFooterView {
    NSString * _applicationBundleIdentifier;
    <VCUIGallerySectionHeaderViewDelegate> * _delegate;
    UIImageView * _iconImageView;
    UIButton * _seeAllButton;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic) <VCUIGallerySectionHeaderViewDelegate> *delegate;
@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic) UIButton *seeAllButton;
@property (nonatomic, copy) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (void)configureWithTitle:(id)arg1 appIcon:(id)arg2 applicationBundleIdentifier:(id)arg3 showSeeAllButton:(bool)arg4;
- (id)delegate;
- (void)didTapSeeAll;
- (id)iconImageView;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)seeAllButton;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setSeeAllButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;

@end

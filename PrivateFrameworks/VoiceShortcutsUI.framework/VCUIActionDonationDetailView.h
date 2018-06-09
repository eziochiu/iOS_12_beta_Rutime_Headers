/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
 */

@interface VCUIActionDonationDetailView : UIView {
    UIImage * _appIcon;
    NSString * _appName;
    NSString * _donationSubtitle;
    NSString * _donationTitle;
    BFFPaneHeaderView * _headerView;
    NSLayoutConstraint * _heightConstraint;
    UIImage * _keyImage;
    bool  _showsSphiriIcon;
}

@property (nonatomic, retain) UIImage *appIcon;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic, readonly, copy) NSString *donationSubtitle;
@property (nonatomic, readonly, copy) NSString *donationTitle;
@property (nonatomic, retain) BFFPaneHeaderView *headerView;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic, readonly) UIView *iconView;
@property (nonatomic, retain) UIImage *keyImage;
@property (nonatomic) bool showsSphiriIcon;

- (void).cxx_destruct;
- (id)appAttributedString;
- (id)appIcon;
- (id)appName;
- (id)donationSubtitle;
- (id)donationTitle;
- (id)headerView;
- (id)heightConstraint;
- (id)iconView;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 keyImageData:(id)arg3 applicationBundleIdentifier:(id)arg4;
- (id)keyImage;
- (void)layoutSubviews;
- (void)setAppIcon:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setKeyImage:(id)arg1;
- (void)setShowsSphiriIcon:(bool)arg1;
- (bool)showsSphiriIcon;
- (void)updateView;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIAppInstallCell : PSTableCell {
    NSLayoutConstraint * _availableConstraint;
    NSMutableArray * _constraints;
    UIImageView * _iconView;
    SKUIItemOfferButton * _installButton;
    NSLayoutConstraint * _installButtonHeightConstraint;
    NSLayoutConstraint * _installButtonWidthConstraint;
    int  _installState;
    NSLayoutConstraint * _installedConstraint;
    UILabel * _installedLabel;
    UIView * _labelContainerView;
    NSLayoutConstraint * _labelPaddingBottom;
    NSLayoutConstraint * _labelPaddingTop;
    UILabel * _nameLabel;
    UILabel * _publisherLabel;
}

@property (nonatomic, retain) NSLayoutConstraint *availableConstraint;
@property (nonatomic, retain) NSMutableArray *constraints;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, retain) SKUIItemOfferButton *installButton;
@property (nonatomic, retain) NSLayoutConstraint *installButtonHeightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *installButtonWidthConstraint;
@property (nonatomic) int installState;
@property (nonatomic, retain) NSLayoutConstraint *installedConstraint;
@property (nonatomic, retain) UILabel *installedLabel;
@property (nonatomic, retain) UIView *labelContainerView;
@property (nonatomic, retain) NSLayoutConstraint *labelPaddingBottom;
@property (nonatomic, retain) NSLayoutConstraint *labelPaddingTop;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, retain) UILabel *publisherLabel;

+ (id)specifierForAppWithDescription:(id)arg1 target:(id)arg2 action:(SEL)arg3;

- (void).cxx_destruct;
- (void)_updateCellWithInstallState;
- (id)availableConstraint;
- (id)constraints;
- (id)iconView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)installButton;
- (id)installButtonHeightConstraint;
- (id)installButtonWidthConstraint;
- (int)installState;
- (id)installedConstraint;
- (id)installedLabel;
- (id)labelContainerView;
- (id)labelPaddingBottom;
- (id)labelPaddingTop;
- (void)layoutSubviews;
- (id)nameLabel;
- (id)publisherLabel;
- (void)setAvailableConstraint:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setInstallButton:(id)arg1;
- (void)setInstallButtonHeightConstraint:(id)arg1;
- (void)setInstallButtonWidthConstraint:(id)arg1;
- (void)setInstallState:(int)arg1;
- (void)setInstalledConstraint:(id)arg1;
- (void)setInstalledLabel:(id)arg1;
- (void)setLabelContainerView:(id)arg1;
- (void)setLabelPaddingBottom:(id)arg1;
- (void)setLabelPaddingTop:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setPublisherLabel:(id)arg1;
- (void)updateConstraints;

@end

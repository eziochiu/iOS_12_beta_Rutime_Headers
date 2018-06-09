/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSwitchTableViewCell : UITableViewCell {
    bool  _centersIcon;
    UILabel * _countLabel;
    <HKSwitchTableViewCellDelegate> * _delegate;
    NSString * _displayText;
    bool  _enabled;
    bool  _shouldHideSwitch;
    UISwitch * _switch;
}

@property (nonatomic) bool adjustsFontSizeToFitWidth;
@property (nonatomic) bool centersIcon;
@property (nonatomic) <HKSwitchTableViewCellDelegate> *delegate;
@property (nonatomic, retain) NSString *displayText;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } iconSize;
@property (getter=isOn, nonatomic) bool on;
@property (nonatomic) bool shouldHideSwitch;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_contextSizeCategoryChanged;
- (id)_displayLabelFont;
- (void)_setupUI;
- (void)_updateFont;
- (bool)adjustsFontSizeToFitWidth;
- (bool)centersIcon;
- (void)dealloc;
- (id)delegate;
- (id)displayText;
- (struct CGSize { double x1; double x2; })iconSize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isEnabled;
- (bool)isOn;
- (void)layoutSubviews;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setCentersIcon:(bool)arg1;
- (void)setCountText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayText:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIconImage:(id)arg1;
- (void)setOn:(bool)arg1;
- (void)setOn:(bool)arg1 animated:(bool)arg2;
- (void)setShouldHideSwitch:(bool)arg1;
- (bool)shouldHideSwitch;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)switchValueChanged:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

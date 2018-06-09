/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICellularPlanTableCell : PSUICellularPlanOptionTableCell {
    UILabel * _badgeLabel;
    UILabel * _statusLabel;
}

@property (nonatomic, retain) UILabel *badgeLabel;
@property (nonatomic, retain) UILabel *statusLabel;

+ (long long)cellStyle;

- (void).cxx_destruct;
- (id)badgeLabel;
- (bool)canBeChecked;
- (bool)canReload;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setBadgeLabel:(id)arg1;
- (void)setStatusLabel:(id)arg1;
- (id)statusLabel;

@end

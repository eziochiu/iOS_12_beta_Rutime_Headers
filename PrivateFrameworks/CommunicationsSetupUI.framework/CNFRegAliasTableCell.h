/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface CNFRegAliasTableCell : PSTableCell {
    bool  _hasSpinner;
    UIActivityIndicatorView * _spinner;
}

@property (nonatomic) bool hasSpinner;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;

- (void).cxx_destruct;
- (void)_updateIcon;
- (void)dealloc;
- (bool)hasSpinner;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setChecked:(bool)arg1;
- (void)setHasSpinner:(bool)arg1;
- (void)setSpinner:(id)arg1;
- (id)spinner;
- (bool)usesStandardBackgroundImage;

@end

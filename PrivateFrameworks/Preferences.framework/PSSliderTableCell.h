/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSliderTableCell : PSControlTableCell {
    UIView * _disabledView;
}

- (void).cxx_destruct;
- (bool)canReload;
- (id)controlValue;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (id)newControl;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setCellEnabled:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)titleLabel;

@end

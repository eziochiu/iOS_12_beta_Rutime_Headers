/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSStorageItemCell : PSTableCell {
    NSMutableArray * _constraints;
    UIImageView * _iconView;
    UILabel * _infoLabel;
    long long  _size;
    UILabel * _sizeLabel;
    UILabel * _titleLabel;
}

+ (id)specifierForItemURL:(id)arg1;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)updateConstraints;

@end

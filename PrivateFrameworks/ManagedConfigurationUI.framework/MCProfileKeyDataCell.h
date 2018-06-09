/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCProfileKeyDataCell : UITableViewCell {
    NSArray * _constraints;
    UILabel * _keyLabel;
    UILabel * _valueLabel;
}

@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic, retain) UILabel *keyLabel;
@property (nonatomic, retain) UILabel *valueLabel;

- (void).cxx_destruct;
- (void)_setup;
- (void)_setupConstraints;
- (id)constraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)keyLabel;
- (void)setConstraints:(id)arg1;
- (void)setKeyLabel:(id)arg1;
- (void)setKeyValue:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValueLabel:(id)arg1;
- (id)valueLabel;

@end

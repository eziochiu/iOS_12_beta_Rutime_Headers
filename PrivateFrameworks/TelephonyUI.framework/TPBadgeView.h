/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPBadgeView : UIView {
    UILabel * _label;
    unsigned long long  _theme;
    NSString * _title;
}

@property (nonatomic, readonly) UILabel *label;
@property (nonatomic) unsigned long long theme;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 theme:(unsigned long long)arg2;
- (id)label;
- (void)setTheme:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (id)shortStringForTitle:(id)arg1;
- (unsigned long long)theme;
- (id)title;
- (void)updateView;

@end

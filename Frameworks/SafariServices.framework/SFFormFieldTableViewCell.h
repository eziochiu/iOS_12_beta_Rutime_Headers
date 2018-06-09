/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFFormFieldTableViewCell : UITableViewCell <UITextFieldDelegate> {
    UIButton * _centerPasswordButton;
    <SFFormFieldTableViewCellDelegate> * _delegate;
    SFFormField * _formField;
    long long  _labelStyle;
    long long  _passwordStyle;
    UIButton * _revealPasswordButton;
    bool  _showsPasswordStrengthIndicator;
    SFPasswordStrengthIndicatorView * _strengthIndicatorView;
    UITextField * _textField;
    UIImageView * _warningImageView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFFormFieldTableViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SFFormField *formField;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long labelStyle;
@property (nonatomic) double passwordStrength;
@property (nonatomic) long long passwordStyle;
@property (nonatomic) bool showsPasswordStrengthIndicator;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *value;

+ (id)reuseIdentifierWithFormField:(id)arg1;

- (void).cxx_destruct;
- (void)_centerPasswordButtonAction:(id)arg1;
- (id)_placeholderText;
- (void)_revealPasswordButtonAction:(id)arg1;
- (bool)_shouldShowCenterPasswordButton;
- (bool)_shouldShowPasswordStrengthView;
- (id)_textFieldPlaceholderAttributedString;
- (void)_updateFormFieldValue:(id)arg1;
- (void)_updateLabelStyle;
- (void)_updateShowsAccessoryViews;
- (void)_updateShowsCenterPasswordButton;
- (void)_updateShowsPasswordStrengthView;
- (void)_updateShowsWarningImageView;
- (id)delegate;
- (bool)focusFormField;
- (id)formField;
- (id)initWithFormField:(id)arg1;
- (long long)labelStyle;
- (void)layoutSubviews;
- (double)passwordStrength;
- (long long)passwordStyle;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (void)setLabelStyle:(long long)arg1;
- (void)setPasswordStrength:(double)arg1;
- (void)setPasswordStrength:(double)arg1 animated:(bool)arg2;
- (void)setPasswordStyle:(long long)arg1;
- (void)setShowsPasswordStrengthIndicator:(bool)arg1;
- (void)setValue:(id)arg1;
- (bool)showsPasswordStrengthIndicator;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (id)value;

@end

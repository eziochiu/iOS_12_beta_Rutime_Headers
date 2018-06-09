/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAddressComponentSplitTextFieldCell : CNAddressComponentTextFieldCell {
    CNRepeatingGradientSeparatorView * _separator;
    UITextField * _textFieldLeft;
    UITextField * _textFieldRight;
}

@property (nonatomic, retain) CNRepeatingGradientSeparatorView *separator;
@property (nonatomic, retain) UITextField *textFieldLeft;
@property (nonatomic, retain) UITextField *textFieldRight;

+ (id)cellIdentifier;

- (void).cxx_destruct;
- (id)currentConstraintsForMetrics:(id)arg1;
- (void)prepareForReuse;
- (id)separator;
- (void)setSeparator:(id)arg1;
- (void)setTextAttributes:(id)arg1;
- (void)setTextFieldLeft:(id)arg1;
- (void)setTextFieldRight:(id)arg1;
- (void)setupTextFields;
- (id)textAttributes;
- (id)textFieldLeft;
- (id)textFieldRight;
- (id)textFields;

@end

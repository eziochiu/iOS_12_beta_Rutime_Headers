/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKEnterCurrencyAmountView : UIView <UITextFieldDelegate> {
    UIFont * _amountFont;
    NSNumberFormatter * _amountFormatter;
    UILabel * _amountLabel;
    NSString * _amountString;
    UITextField * _amountTextField;
    NSString * _currency;
    NSNumberFormatter * _currencySymbolAmountFormatter;
    <PKEnterCurrencyAmountViewDelegate> * _delegate;
    bool  _enabled;
    UIView * _internalInputAccessoryView;
    NSNumber * _kerning;
    PKNumberPadInputView * _numberPad;
    NSDecimalNumberHandler * _roundingBehavior;
    bool  _showsDecimalPointButton;
    UIColor * _textColor;
}

@property (nonatomic, copy) UIFont *amountFont;
@property (nonatomic, retain) NSNumberFormatter *amountFormatter;
@property (nonatomic, retain) UILabel *amountLabel;
@property (nonatomic, retain) NSString *amountString;
@property (nonatomic, readonly) UITextField *amountTextField;
@property (nonatomic, retain) NSString *currency;
@property (nonatomic, retain) NSNumberFormatter *currencySymbolAmountFormatter;
@property (nonatomic, retain) NSDecimalNumber *currentAmount;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKEnterCurrencyAmountViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *inputAccessoryView;
@property (nonatomic, copy) NSNumber *kerning;
@property (nonatomic, retain) PKNumberPadInputView *numberPad;
@property (nonatomic, retain) NSDecimalNumberHandler *roundingBehavior;
@property (nonatomic) bool showsDecimalPointButton;
@property (readonly) Class superclass;
@property (nonatomic, copy) UIColor *textColor;

- (void).cxx_destruct;
- (void)_createAmountFormatter;
- (void)_createSubviews;
- (id)_decimalNumberFromString:(id)arg1;
- (id)_formatAmountForDisplay:(id)arg1 alwaysShowDecimalSeparator:(bool)arg2 minimumFractionDigits:(unsigned long long)arg3 useGroupingSeparator:(bool)arg4;
- (unsigned long long)_numberOfDecimalPlacesInString:(id)arg1 decimalSeperator:(id)arg2;
- (void)_updateContent;
- (id)amountFont;
- (id)amountFormatter;
- (id)amountLabel;
- (id)amountString;
- (id)amountTextField;
- (id)currency;
- (id)currencySymbolAmountFormatter;
- (id)currentAmount;
- (id)delegate;
- (void)dismissKeyboard;
- (bool)enabled;
- (id)initWithCurrency:(id)arg1 amount:(id)arg2;
- (id)inputAccessoryView;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)kerning;
- (void)layoutSubviews;
- (id)numberPad;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (id)roundingBehavior;
- (void)setAmountFont:(id)arg1;
- (void)setAmountFormatter:(id)arg1;
- (void)setAmountLabel:(id)arg1;
- (void)setAmountString:(id)arg1;
- (void)setCurrency:(id)arg1;
- (void)setCurrencySymbolAmountFormatter:(id)arg1;
- (void)setCurrentAmount:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setKerning:(id)arg1;
- (void)setNumberPad:(id)arg1;
- (void)setRoundingBehavior:(id)arg1;
- (void)setShowsDecimalPointButton:(bool)arg1;
- (void)setTextColor:(id)arg1;
- (void)showKeyboard;
- (bool)showsDecimalPointButton;
- (id)textColor;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKAddressTextField : UITextField {
    <PKAddressTextFieldDelegate> * _addressDelegate;
    PKUniqueAddressField * _addressField;
    UIColor * _defaultColor;
    UIColor * _invalidColor;
    bool  _isInvalid;
    long long  _style;
}

@property (nonatomic) <PKAddressTextFieldDelegate> *addressDelegate;
@property (nonatomic, retain) PKUniqueAddressField *addressField;
@property (nonatomic, retain) UIColor *defaultColor;
@property (nonatomic, retain) UIColor *invalidColor;
@property (nonatomic, readonly) bool isInvalid;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (id)addressDelegate;
- (id)addressField;
- (id)defaultColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (void)insertTextSuggestion:(id)arg1;
- (id)invalidColor;
- (bool)isInvalid;
- (void)setAddressDelegate:(id)arg1;
- (void)setAddressField:(id)arg1;
- (void)setDefaultColor:(id)arg1;
- (void)setInvalidColor:(id)arg1;
- (void)setIsInvalid:(bool)arg1 showErrorGlyph:(bool)arg2;
- (void)setStyle:(long long)arg1;
- (long long)style;

@end

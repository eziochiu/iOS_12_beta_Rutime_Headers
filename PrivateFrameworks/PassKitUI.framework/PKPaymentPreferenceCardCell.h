/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentPreferenceCardCell : PKPaymentPreferenceCell {
    NSString * _availabilityString;
    UIImageView * _cardArtView;
    UILabel * _censoredPANLabel;
    bool  _dimCardArt;
    UIColor * _disabledMainLabelColor;
    UIColor * _disabledSubTextLabelColor;
    UILabel * _displayLabel;
    bool  _isRightToLeft;
    UIColor * _mainLabelColor;
    PKPaymentPass * _pass;
    PKPassSnapshotter * _passSnapshotter;
    bool  _showBillingAddress;
    UIStackView * _stackView;
    UIColor * _subTextLabelColor;
}

@property (nonatomic, copy) NSString *availabilityString;
@property (nonatomic, readonly) UILabel *censoredPANLabel;
@property (nonatomic) bool dimCardArt;
@property (nonatomic, retain) UIColor *disabledMainLabelColor;
@property (nonatomic, retain) UIColor *disabledSubTextLabelColor;
@property (nonatomic, retain) UIColor *mainLabelColor;
@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic, retain) PKPassSnapshotter *passSnapshotter;
@property (nonatomic) bool showBillingAddress;
@property (nonatomic, retain) UIColor *subTextLabelColor;

+ (double)textOffset;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_updateCellContent;
- (void)_updateLabelTextColors;
- (id)availabilityString;
- (id)censoredPANLabel;
- (bool)dimCardArt;
- (id)disabledMainLabelColor;
- (id)disabledSubTextLabelColor;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)mainLabelColor;
- (id)pass;
- (id)passSnapshotter;
- (void)pk_applyAppearance:(id)arg1;
- (void)prepareForReuse;
- (void)setAvailabilityString:(id)arg1;
- (void)setDimCardArt:(bool)arg1;
- (void)setDisabledMainLabelColor:(id)arg1;
- (void)setDisabledSubTextLabelColor:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEnabled:(bool)arg1;
- (void)setHasError:(bool)arg1;
- (void)setMainLabelColor:(id)arg1;
- (void)setPass:(id)arg1;
- (void)setPassSnapshotter:(id)arg1;
- (void)setShowBillingAddress:(bool)arg1;
- (void)setSubTextLabelColor:(id)arg1;
- (bool)showBillingAddress;
- (id)subTextLabelColor;

@end

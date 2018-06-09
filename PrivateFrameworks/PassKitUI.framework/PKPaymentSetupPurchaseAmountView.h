/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupPurchaseAmountView : UIView <PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate> {
    UIStackView * _amountStackView;
    NSLayoutConstraint * _centeringConstraint;
    UIView * _centeringView;
    NSString * _currency;
    NSDecimalNumber * _currentAmount;
    <PKPaymentSetupPurchaseAmountViewDelegate> * _delegate;
    NSDecimalNumber * _depositAmount;
    bool  _displayingBalanceErrorMessage;
    PKEnterCurrencyAmountView * _enterCurrencyAmountView;
    NSLayoutConstraint * _fixedConstraint;
    NSDecimalNumber * _maxLoadedBalance;
    UILabel * _messageLabel;
    NSDecimalNumber * _minLoadedBalance;
    PKPaymentSetupProduct * _product;
    PKPaymentProvisioningMethodMetadata * _provisioningMethodMetadata;
    bool  _showTransferButton;
    PKNumericSuggestionsEnterValueAlgorithm * _suggestionGenerator;
    PKNumberPadSuggestionsView * _suggestionView;
    UIButton * _transferBalanceButton;
}

@property (nonatomic, retain) UIStackView *amountStackView;
@property (nonatomic, readonly) UITextField *amountTextField;
@property (nonatomic, retain) NSLayoutConstraint *centeringConstraint;
@property (nonatomic, retain) UIView *centeringView;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic, retain) NSDecimalNumber *currentAmount;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentSetupPurchaseAmountViewDelegate> *delegate;
@property (nonatomic, copy) NSDecimalNumber *depositAmount;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displayingBalanceErrorMessage;
@property (nonatomic, retain) PKEnterCurrencyAmountView *enterCurrencyAmountView;
@property (nonatomic, retain) NSLayoutConstraint *fixedConstraint;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDecimalNumber *maxLoadedBalance;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic, copy) NSDecimalNumber *minLoadedBalance;
@property (nonatomic, copy) PKPaymentSetupProduct *product;
@property (nonatomic, copy) PKPaymentProvisioningMethodMetadata *provisioningMethodMetadata;
@property (nonatomic) bool showTransferButton;
@property (nonatomic, retain) PKNumericSuggestionsEnterValueAlgorithm *suggestionGenerator;
@property (nonatomic, retain) PKNumberPadSuggestionsView *suggestionView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIButton *transferBalanceButton;

- (void).cxx_destruct;
- (void)_createConstraints;
- (void)_createSubviews;
- (id)_defaultSuggestions;
- (id)_defaultValues;
- (bool)_isAmountValid:(id)arg1;
- (bool)_shouldShakeCard:(id)arg1;
- (void)_transferBalanceButtonTapped:(id)arg1;
- (double)_transferButtonBottomOffset;
- (void)_updateCurrentAmount:(id)arg1;
- (void)_updateMessageLabelForAmount:(id)arg1;
- (id)amountStackView;
- (id)amountTextField;
- (id)centeringConstraint;
- (id)centeringView;
- (id)currency;
- (id)currentAmount;
- (id)delegate;
- (id)depositAmount;
- (bool)displayingBalanceErrorMessage;
- (id)enterCurrencyAmountView;
- (bool)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)arg1;
- (id)fixedConstraint;
- (id)initWithProduct:(id)arg1 provisioningMethodMetadata:(id)arg2 showTransferButton:(bool)arg3;
- (void)layoutSubviews;
- (id)maxLoadedBalance;
- (id)messageLabel;
- (id)minLoadedBalance;
- (void)numberPadSuggestionsView:(id)arg1 didSelectSuggestion:(id)arg2;
- (id)product;
- (id)provisioningMethodMetadata;
- (void)setAmountStackView:(id)arg1;
- (void)setCenteringConstraint:(id)arg1;
- (void)setCenteringView:(id)arg1;
- (void)setCurrency:(id)arg1;
- (void)setCurrentAmount:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDepositAmount:(id)arg1;
- (void)setDisplayingBalanceErrorMessage:(bool)arg1;
- (void)setEnterCurrencyAmountView:(id)arg1;
- (void)setFixedConstraint:(id)arg1;
- (void)setMaxLoadedBalance:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setMinLoadedBalance:(id)arg1;
- (void)setProduct:(id)arg1;
- (void)setProvisioningMethodMetadata:(id)arg1;
- (void)setShowTransferButton:(bool)arg1;
- (void)setSuggestionGenerator:(id)arg1;
- (void)setSuggestionView:(id)arg1;
- (void)setTransferBalanceButton:(id)arg1;
- (bool)showTransferButton;
- (id)suggestionGenerator;
- (id)suggestionView;
- (id)transferBalanceButton;
- (void)updateConstraints;

@end

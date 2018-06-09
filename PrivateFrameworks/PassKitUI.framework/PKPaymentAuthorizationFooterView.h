/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentAuthorizationFooterView : UIView <PKGlyphViewDelegate> {
    NSString * _biometricConfirmationTitle;
    bool  _biometricSuccessOutstanding;
    bool  _compact;
    bool  _compactUserIntent;
    NSMutableArray * _completionHandlers;
    unsigned long long  _confirmationStyle;
    NSString * _confirmationTitle;
    long long  _constraintState;
    bool  _constraintsDirty;
    NSMutableArray * _deferredCompletionHandlers;
    bool  _deferredStateRequiresRetry;
    NSString * _deferredStateString;
    bool  _deferringState;
    <PKPaymentAuthorizationFooterViewDelegate> * _delegate;
    NSMutableArray * _dynamicRegularConstraints;
    PKGlyphView * _glyphView;
    NSArray * _hiddenConstraints;
    UILabel * _labelView;
    PKPaymentAuthorizationLayout * _layout;
    UIView * _lockupView;
    UILabel * _passbookPaymentDetailsView;
    UIButton * _payWithPasscodeButton;
    long long  _queuedConstraintState;
    unsigned long long  _requestType;
    NSLayoutConstraint * _separatorLeftConstraint;
    UIView * _separatorView;
    long long  _state;
    unsigned long long  _stateTransitionIndex;
    NSArray * _staticRegularConstraints;
}

@property (nonatomic, retain) NSString *biometricConfirmationTitle;
@property (nonatomic) unsigned long long confirmationStyle;
@property (nonatomic, retain) NSString *confirmationTitle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentAuthorizationFooterViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKPaymentAuthorizationLayout *layout;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createSubviews;
- (void)_payWithPasscodePressed;
- (id)_payWithPasscodeTitleForState:(long long)arg1;
- (void)_prepareConstraints;
- (bool)_shouldCompact;
- (id)_titleAttributedStringForState:(long long)arg1;
- (id)_titleLabelAttributedString:(id)arg1;
- (id)biometricConfirmationTitle;
- (unsigned long long)confirmationStyle;
- (id)confirmationTitle;
- (void)dealloc;
- (id)defaultHeightConstraint;
- (id)delegate;
- (void)glyphView:(id)arg1 revealingCheckmark:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layout:(id)arg2;
- (id)layout;
- (unsigned long long)requestType;
- (void)setBiometricConfirmationTitle:(id)arg1;
- (void)setConfirmationStyle:(unsigned long long)arg1;
- (void)setConfirmationTitle:(id)arg1;
- (bool)setConstraintState:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setLayout:(id)arg1;
- (void)setRequestType:(unsigned long long)arg1;
- (void)setState:(long long)arg1;
- (void)setState:(long long)arg1 string:(id)arg2 animated:(bool)arg3;
- (void)setState:(long long)arg1 string:(id)arg2 animated:(bool)arg3 withCompletion:(id /* block */)arg4;
- (long long)state;
- (void)updateConstraints;

@end

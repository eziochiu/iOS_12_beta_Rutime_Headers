/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPSetPINViewController : UIViewController <TPSimpleNumberPadDelegate> {
    bool  _confirmPIN;
    UIView * _customBackgroundView;
    <TPSetPINViewControllerDelegate> * _delegate;
    int  _initialState;
    unsigned int  _maxPINLength;
    unsigned int  _minPINLength;
    TPSimpleNumberPad * _numberPad;
    NSString * _oldPIN;
    TPPasscodeView * _passcodeView;
    NSString * _promptTextForConfirmingNewPIN;
    NSString * _promptTextForNewPIN;
    NSString * _promptTextForOldPIN;
    NSString * _promptTextForSavingPIN;
    int  _state;
    UILabel * _statusLabel;
    NSString * _unconfirmedPIN;
}

@property bool confirmPIN;
@property (retain) UIView *customBackgroundView;
@property <TPSetPINViewControllerDelegate> *delegate;
@property int initialState;
@property unsigned int maxPINLength;
@property unsigned int minPINLength;
@property (retain) TPSimpleNumberPad *numberPad;
@property (retain) NSString *oldPIN;
@property (retain) TPPasscodeView *passcodeView;
@property (nonatomic, retain) NSString *promptTextForConfirmingNewPIN;
@property (nonatomic, retain) NSString *promptTextForNewPIN;
@property (nonatomic, retain) NSString *promptTextForOldPIN;
@property (nonatomic, retain) NSString *promptTextForSavingPIN;
@property (nonatomic) int state;
@property (retain) UILabel *statusLabel;
@property (retain) NSString *unconfirmedPIN;

- (void).cxx_destruct;
- (void)_cancelButtonTapped;
- (void)_doneButtonTapped;
- (id)_initForMinLength:(unsigned int)arg1 maxLength:(unsigned int)arg2 confirmPIN:(bool)arg3;
- (void)_updateDeleteAllowed;
- (void)_updateNavBarButtons;
- (void)_updateStatusLabel;
- (void)_updateUIForStateChange;
- (bool)confirmPIN;
- (id)customBackgroundView;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initForChangePINWithMinLength:(unsigned int)arg1 maxLength:(unsigned int)arg2 confirmPIN:(bool)arg3;
- (id)initForNewPINWithMinLength:(unsigned int)arg1 maxLength:(unsigned int)arg2 confirmPIN:(bool)arg3;
- (int)initialState;
- (void)loadView;
- (unsigned int)maxPINLength;
- (unsigned int)minPINLength;
- (id)numberPad;
- (double)numberPadTopConstraintConstant;
- (id)oldPIN;
- (id)passcodeView;
- (id)promptTextForConfirmingNewPIN;
- (id)promptTextForNewPIN;
- (id)promptTextForOldPIN;
- (id)promptTextForSavingPIN;
- (void)resetWithErrorPrompt:(id)arg1;
- (void)resetWithErrorPrompt:(id)arg1 title:(id)arg2;
- (void)setConfirmPIN:(bool)arg1;
- (void)setCustomBackgroundView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInitialState:(int)arg1;
- (void)setMaxPINLength:(unsigned int)arg1;
- (void)setMinPINLength:(unsigned int)arg1;
- (void)setNumberPad:(id)arg1;
- (void)setOldPIN:(id)arg1;
- (void)setPasscodeView:(id)arg1;
- (void)setPromptTextForConfirmingNewPIN:(id)arg1;
- (void)setPromptTextForNewPIN:(id)arg1;
- (void)setPromptTextForOldPIN:(id)arg1;
- (void)setPromptTextForSavingPIN:(id)arg1;
- (void)setState:(int)arg1;
- (void)setStatusLabel:(id)arg1;
- (void)setUnconfirmedPIN:(id)arg1;
- (void)simpleNumberPad:(id)arg1 buttonPressedWithCharacter:(id)arg2;
- (void)simpleNumberPadDeletePressed:(id)arg1;
- (int)state;
- (id)statusLabel;
- (id)unconfirmedPIN;
- (bool)wantsFullScreenLayout;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STIntroPasscodeViewController : UIViewController <BFFPasscodeInputViewDelegate, STIntroViewController> {
    NSString * _initialPasscode;
    STIntroductionModel * _model;
    bool  _numeric;
    unsigned long long  _numericLength;
    unsigned long long  _passcodeState;
    id /* block */  completionBlock;
}

@property (copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSString *initialPasscode;
@property (retain) STIntroductionModel *model;
@property (getter=isNumeric) bool numeric;
@property unsigned long long numericLength;
@property unsigned long long passcodeState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (id)initWithIntroductionModel:(id)arg1;
- (id)initialPasscode;
- (bool)isNumeric;
- (void)loadView;
- (id)model;
- (void)nextButtonTapped;
- (unsigned long long)numericLength;
- (void)passcodeInput:(id)arg1 enteredPasscode:(id)arg2;
- (void)passcodeInput:(id)arg1 tappedFooterButton:(id)arg2;
- (void)passcodeInput:(id)arg1 willChangeContents:(id)arg2;
- (id)passcodeInputView;
- (unsigned long long)passcodeState;
- (void)passcodeTypeChanged:(bool)arg1;
- (id)passcodeView;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setInitialPasscode:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setNumeric:(bool)arg1;
- (void)setNumericLength:(unsigned long long)arg1;
- (void)setPasscodeState:(unsigned long long)arg1;
- (void)updateNextButton:(id)arg1;
- (void)updatePasscodeType;
- (void)userEnteredPasscode:(id)arg1;
- (bool)usesSimplePasscodeEntry;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end

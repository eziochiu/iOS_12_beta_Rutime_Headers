/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCInstallProfileQuestionViewController : UITableViewController <PSStateRestoration, UITextFieldDelegate> {
    UIAlertView * _activeAlert;
    MCUIFieldCollection * _fieldCollection;
    bool  _isLastQuestion;
    int  _outDirection;
    NSString * _previousResponseValue;
    <MCProfileQuestionsControllerDelegate> * _questionsDelegate;
    bool  _showingKeyboard;
    UITextField * _textField;
    bool  _waitingForPasscodePreflight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int outDirection;
@property (nonatomic) <MCProfileQuestionsControllerDelegate> *questionsDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextField *textField;

- (void).cxx_destruct;
- (void)_cancelActiveAlert:(bool)arg1;
- (void)_cancelButtonClicked;
- (void)_cancelInput;
- (void)_cancelPayload;
- (void)_configureQuestionField:(id)arg1;
- (void)_continueOrFinish;
- (void)_continueWithCurrentField;
- (void)_didFinishPasscodePreflightWithError:(id)arg1;
- (void)_didFinishPreflightWithError:(id)arg1;
- (void)_disableRightButton;
- (void)_enableRightButton;
- (void)_finishInput;
- (void)_hideKeyboard:(bool)arg1;
- (void)_hideProgressIndicator;
- (void)_nextButtonClicked;
- (void)_preflightCurrentPayload;
- (void)_processResponseAndContinue;
- (void)_questionFieldEmpty:(id)arg1;
- (void)_questionFieldNotEmpty:(id)arg1;
- (void)_retryCurrentPasswordFieldWithError:(id)arg1;
- (void)_retryPayload;
- (void)_retryWithCurrentField;
- (void)_setup;
- (void)_showErrorAlertWithError:(id)arg1;
- (void)_showKeyboard:(bool)arg1;
- (void)_showNavButtonsAnimated:(bool)arg1;
- (void)_showProgressIndicator;
- (void)_skipPayload;
- (void)_tellDelegateDidFinishWithUserInputResponses:(id)arg1;
- (void)_textFieldValueChanged:(id)arg1;
- (void)_updateNavigationBar;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (bool)canBeShownFromSuspendedState;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)initWithFieldCollection:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initWithUserInput:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (int)outDirection;
- (void)profileConnection:(id)arg1 didFinishPreflightWithError:(id)arg2;
- (id)questionsDelegate;
- (void)setOutDirection:(int)arg1;
- (void)setQuestionsDelegate:(id)arg1;
- (void)setTextField:(id)arg1;
- (void)stopWaitingForMoreInput;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)textField;
- (void)updateWithUserInput:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)waitForMoreInput;

@end

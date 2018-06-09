/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
 */

@interface DASettingsAccountsUIController : ACUIViewController <DAValidityCheckConsumer, UIActionSheetDelegate, UIAlertViewDelegate> {
    DAAccount * _account;
    bool  _accountNeedsAdd;
    bool  _attemptedValidation;
    bool  _confirmedUnvalidatedAccount;
    bool  _didSetFullHostURL;
    bool  _haveRegisteredForAccountsChanged;
    bool  _isSettingUpNewAccount;
    bool  _needsSave;
    bool  _transitioningToFinishedAccountSetup;
    bool  _validatedSuccessfully;
}

@property (nonatomic, retain) DAAccount *account;
@property (nonatomic) bool accountNeedsAdd;
@property (nonatomic) bool attemptedValidation;
@property (nonatomic) bool confirmedUnvalidatedAccount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didSetFullHostURL;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool haveRegisteredForAccountsChanged;
@property (nonatomic) bool isSettingUpNewAccount;
@property (nonatomic) bool needsSave;
@property (readonly) Class superclass;
@property (nonatomic) bool transitioningToFinishedAccountSetup;
@property (nonatomic) bool validatedSuccessfully;

- (void).cxx_destruct;
- (void)_accountsChanged:(id)arg1;
- (void)_beginAccountValidation;
- (void)_confirmSaveUnvalidatedAccount;
- (id)_defaultAccountDescription;
- (void)_deleteAccount;
- (void)_dismissAndUpdateParent;
- (void)_finishSaveAccountDismissWhenDone:(bool)arg1;
- (void)_saveAccountDismissWhenDone:(bool)arg1;
- (id)account;
- (void)account:(id)arg1 isValid:(bool)arg2 validationError:(id)arg3;
- (id)accountBooleanPropertyWithSpecifier:(id)arg1;
- (id)accountFromSpecifier;
- (bool)accountNeedsAdd;
- (id)accountPropertyWithSpecifier:(id)arg1;
- (id)accountSpecifiers;
- (bool)attemptedValidation;
- (void)cancelButtonTapped:(id)arg1;
- (bool)confirmedUnvalidatedAccount;
- (id)currentlyEditingCell;
- (id)daAccountWithBackingAccountInfo:(id)arg1;
- (void)dealloc;
- (void)deleteAccountButtonTapped;
- (void)didConfirmSaveUnvalidatedAccount:(bool)arg1;
- (void)didConfirmTryWithoutSSL:(bool)arg1;
- (bool)didSetFullHostURL;
- (bool)dismissesAfterInitialSetup;
- (void)doneButtonTapped:(id)arg1;
- (void)finishedAccountSetup;
- (bool)haveEnoughValues;
- (bool)haveRegisteredForAccountsChanged;
- (void)hideProgressWithPrompt:(id)arg1;
- (int)indexOfCurrentlyEditingCell;
- (bool)isRunningFromMobileMailApp;
- (bool)isSettingUpNewAccount;
- (id)lastGroupSpecifierInSpecifiers:(id)arg1;
- (id)localizedAccountSetupTitleString;
- (id)localizedAccountTitleString;
- (id)localizedConfirmSaveUnvalidatedAccountMessageString;
- (id)localizedConfirmSaveUnvalidatedAccountTitleString;
- (id)localizedValidationFailureTitleString;
- (bool)needsSave;
- (id)newDefaultAccount;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(bool)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(bool)arg3 error:(id)arg4;
- (void)propertyValueChanged:(id)arg1;
- (void)reloadAccount;
- (void)setAccount:(id)arg1;
- (void)setAccountBooleanProperty:(id)arg1 withSpecifier:(id)arg2;
- (void)setAccountNeedsAdd:(bool)arg1;
- (void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2;
- (void)setAttemptedValidation:(bool)arg1;
- (void)setConfirmedUnvalidatedAccount:(bool)arg1;
- (void)setDidSetFullHostURL:(bool)arg1;
- (void)setHaveRegisteredForAccountsChanged:(bool)arg1;
- (void)setHostString:(id)arg1;
- (void)setIsSettingUpNewAccount:(bool)arg1;
- (void)setNeedsSave:(bool)arg1;
- (void)setNeedsSaveAndValidation:(bool)arg1;
- (void)setTransitioningToFinishedAccountSetup:(bool)arg1;
- (void)setValidatedSuccessfully:(bool)arg1;
- (void)showIdenticalAccountFailureView;
- (void)showSSLFailureView;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (bool)transitioningToFinishedAccountSetup;
- (bool)transitionsAfterInitialSetup;
- (void)updateDoneButton;
- (bool)validateAccount;
- (bool)validatedSuccessfully;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

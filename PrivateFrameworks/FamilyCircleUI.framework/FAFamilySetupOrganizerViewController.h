/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FAFamilySetupOrganizerViewController : FAConfirmIdentityViewController <FAFamilySetupPage> {
    <FAFamilySetupPageDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FAFamilySetupPageDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelButtonWasTapped:(id)arg1;
- (id)_createCancelButton;
- (void)continueButtonWasTapped:(id)arg1;
- (id)delegate;
- (id)initWithAccount:(id)arg1 store:(id)arg2;
- (id)instructions;
- (id)pageTitle;
- (void)setDelegate:(id)arg1;
- (bool)shouldShowInviteeInstructions;
- (id)titleForContinuebutton;
- (void)viewDidLoad;

@end

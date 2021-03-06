/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BYFollowUpPasscodeController : NSObject <BFFPasscodeViewControllerDelegate, BYFollowUpFlowControlling> {
    id /* block */  _completion;
    BFFPasscodeViewController * _passcodeViewController;
    BYFollowUpPasscodeController * _selfReference;
}

@property (nonatomic, copy) id /* block */ completion;

+ (id)followUpPasscodeController;

- (void).cxx_destruct;
- (void)_completeWithPasscode:(id)arg1 result:(unsigned long long)arg2;
- (void)_userDidTapCancelButton:(id)arg1;
- (id /* block */)completion;
- (void)passcodeViewController:(id)arg1 didFinishWithPasscodeCreation:(id)arg2;
- (void)setCompletion:(id /* block */)arg1;
- (id)viewControllerWithCompletion:(id /* block */)arg1;

@end

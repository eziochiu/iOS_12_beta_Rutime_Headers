/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
 */

@interface VCUIDebugWorkflowViewController : UIViewController <WFLActionUserInterface, WFLWorkflowControllerDelegate> {
    <VCUIDebugWorkflowViewControllerDelegate> * _delegate;
    UITextView * _outputView;
    UIProgressView * _progressView;
    WFLWorkflow * _workflow;
    WFLWorkflowController * _workflowController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VCUIDebugWorkflowViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UITextView *outputView;
@property (nonatomic) UIProgressView *progressView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WFLWorkflow *workflow;
@property (nonatomic, retain) WFLWorkflowController *workflowController;

- (void).cxx_destruct;
- (void)action:(id)arg1 requiresUserConfirmation:(bool)arg2 requiresUserAuthentication:(bool)arg3 proceedHandler:(id /* block */)arg4;
- (id)delegate;
- (void)dismiss;
- (id)initWithWorkflow:(id)arg1;
- (void)loadView;
- (void)logDebugInformation:(id)arg1;
- (id)outputView;
- (id)progressView;
- (void)promptAuthenticationForIntent:(id)arg1 proceedHandler:(id /* block */)arg2 cancelationHandler:(id /* block */)arg3;
- (void)promptConfirmationForIntent:(id)arg1 proceedHandler:(id /* block */)arg2 cancelationHandler:(id /* block */)arg3;
- (void)run;
- (void)setDelegate:(id)arg1;
- (void)setOutputView:(id)arg1;
- (void)setProgressView:(id)arg1;
- (void)setWorkflowController:(id)arg1;
- (void)stop;
- (void)updateNavigationButtons;
- (id)workflow;
- (id)workflowController;
- (id)workflowController:(id)arg1 userInterfaceForRunningAction:(id)arg2;
- (void)workflowController:(id)arg1 willRunAction:(id)arg2 withInput:(id)arg3 proceedHandler:(id /* block */)arg4;
- (void)workflowControllerDidFinishRunning:(id)arg1 withOutput:(id)arg2;
- (void)workflowControllerDidStop:(id)arg1 withError:(id)arg2;
- (void)workflowControllerWillRun:(id)arg1;

@end

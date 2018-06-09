/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPUIBaseController : NSObject <CDPStateUIProvider> {
    UIViewController * _presentingViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *presentingViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(bool)arg2 numericLength:(id)arg3 isRandom:(bool)arg4 validator:(id)arg5;
- (void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 promptForLocalSecretWithHandler:(id)arg2;
- (void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(bool)arg3 validator:(id)arg4;
- (void)cdpContext:(id)arg1 showError:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)cdpContext:(id)arg1 showError:(id)arg2 withDefaultIndex:(long long)arg3 withCompletion:(id /* block */)arg4;
- (id)initWithPresentingViewController:(id)arg1;
- (id)initWithPresentingViewControlller:(id)arg1;
- (id)presentingViewController;
- (void)setPresentingViewController:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFFollowUpPINVerificationViewController : DevicePINSetupController <DevicePINControllerDelegate> {
    id /* block */  _completion;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)completion;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (void)loadView;
- (void)setCompletion:(id /* block */)arg1;
- (id)stringsBundle;

@end

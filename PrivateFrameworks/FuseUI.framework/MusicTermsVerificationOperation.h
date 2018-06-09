/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicTermsVerificationOperation : NSOperation <MusicTermsAgreementViewControllerDelegate> {
    SSVFairPlaySAPSession * _SAPSession;
    unsigned long long  _acceptingTermsVersion;
    NSObject<OS_dispatch_queue> * _accessQueue;
    id /* block */  _additionalPresentationHandler;
    NSError * _error;
    bool  _executing;
    bool  _finished;
    MusicTermsAgreementViewController * _termsAgreementViewController;
}

@property (retain) SSVFairPlaySAPSession *SAPSession;
@property (readonly, copy) id /* block */ additionalPresentationHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)requiresTermsVerification;

- (void).cxx_destruct;
- (id)SAPSession;
- (void)_cleanUpTermsAgreementViewController:(id)arg1;
- (void)_dismissTermsAgreementViewControllerWithCompletionHandler:(id /* block */)arg1;
- (void)_finishWithError:(id)arg1;
- (id)_newTermsUpdateOperationWithAcceptedStoreTermsVersion:(unsigned long long)arg1;
- (void)_updateSubscriptionStatus;
- (id /* block */)additionalPresentationHandler;
- (id)error;
- (id)init;
- (id)initWithAdditionalPresentationHandler:(id /* block */)arg1;
- (bool)isExecuting;
- (bool)isFinished;
- (void)setSAPSession:(id)arg1;
- (void)start;
- (void)termsAgreementViewController:(id)arg1 didRequestSendByEmailToEmailAddress:(id)arg2;
- (void)termsAgreementViewControllerDidAcceptTerms:(id)arg1;
- (void)termsAgreementViewControllerDidCancel:(id)arg1;

@end

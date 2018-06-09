/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIAppAutofillManager : NSObject {
    NSString * _clientIdentifierForLastAutofillGeneration;
    NSString * _clientIdentifierForLastKeyboardSync;
    NSDictionary * _currentOneTimeCode;
    NSUUID * _documentIdentifierForLastAutofillGeneration;
    LAContext * _laContext;
    IMOneTimeCodeAccelerator * _oneTimeCodeAccelerator;
    NSObject<OS_dispatch_queue> * _oneTimeCodeAcceleratorQueue;
    NSDictionary * _queuedCustomInfo;
}

@property (nonatomic, retain) NSString *clientIdentifierForLastAutofillGeneration;
@property (nonatomic, retain) NSString *clientIdentifierForLastKeyboardSync;
@property (nonatomic, retain) NSDictionary *currentOneTimeCode;
@property (nonatomic, retain) NSUUID *documentIdentifierForLastAutofillGeneration;
@property (nonatomic, retain) LAContext *laContext;
@property (nonatomic, retain) IMOneTimeCodeAccelerator *oneTimeCodeAccelerator;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *oneTimeCodeAcceleratorQueue;
@property (nonatomic, retain) NSDictionary *queuedCustomInfo;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)clientIdentifierForLastAutofillGeneration;
- (id)clientIdentifierForLastKeyboardSync;
- (id)currentOneTimeCode;
- (id)customInfoFromCredential:(id)arg1;
- (id)documentIdentifierForLastAutofillGeneration;
- (id)generateAutofillFormCandidatesWithSecureCandidateRenderer:(id)arg1 withRenderTraits:(id)arg2 withKeyboardState:(id)arg3;
- (id)generateAutofillFormSuggestedUsernameWithSecureCandidateRenderer:(id)arg1 withRenderTraits:(id)arg2 withKeyboardState:(id)arg3;
- (id)generateOneTimeCodeCandidatesWithSecureCandidateRenderer:(id)arg1 withRenderTraits:(id)arg2 withKeyboardState:(id)arg3;
- (id)getCredentialsWithApplicationIdentifier:(id)arg1 autofillContext:(id)arg2;
- (id)initPrivate;
- (bool)isValidedString:(id)arg1;
- (id)laContext;
- (id)obtainApplicationIdentifierFromConnection:(id)arg1;
- (id)obtainBundleIdentifierFromConnection:(id)arg1;
- (void)obtainCredential:(id)arg1;
- (void)obtainOneTimeCodeCredential:(id)arg1;
- (id)oneTimeCodeAccelerator;
- (id)oneTimeCodeAcceleratorQueue;
- (void)pushQueuedCredentialIfNecessaryForKeyboardState:(id)arg1;
- (id)queuedCustomInfo;
- (void)setClientIdentifierForLastAutofillGeneration:(id)arg1;
- (void)setClientIdentifierForLastKeyboardSync:(id)arg1;
- (void)setCurrentOneTimeCode:(id)arg1;
- (void)setDocumentIdentifierForLastAutofillGeneration:(id)arg1;
- (void)setLaContext:(id)arg1;
- (void)setOneTimeCodeAccelerator:(id)arg1;
- (void)setOneTimeCodeAcceleratorQueue:(id)arg1;
- (void)setQueuedCustomInfo:(id)arg1;
- (void)shouldAcceptAutofill:(id)arg1 withPayload:(id)arg2 completion:(id /* block */)arg3;
- (void)shouldAcceptOneTimeCode:(id)arg1 completion:(id /* block */)arg2;
- (bool)shouldAuthenticateToAcceptAutofill;

@end

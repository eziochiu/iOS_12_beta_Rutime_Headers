/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSApplicationController : NSObject <VSAppDocumentControllerDelegate, VSApplicationDelegate, VSStateMachineDelegate> {
    bool  _allowUI;
    VSAppDocumentController * _appDocumentController;
    VSApplication * _application;
    JSValue * _applicationReadyCallback;
    VSAuditToken * _auditToken;
    <VSApplicationControllerDelegate> * _delegate;
    NSError * _delegateError;
    VSIdentityProvider * _identityProvider;
    NSError * _onLaunchError;
    VSPreferences * _preferences;
    NSOperationQueue * _privateQueue;
    VSApplicationControllerResponseHandler * _responseHandler;
    VSStateMachine * _stateMachine;
}

@property (nonatomic) bool allowUI;
@property (nonatomic, retain) VSAppDocumentController *appDocumentController;
@property (retain) VSApplication *application;
@property (nonatomic, retain) JSValue *applicationReadyCallback;
@property (nonatomic, copy) VSAuditToken *auditToken;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSApplicationControllerDelegate> *delegate;
@property (retain) NSError *delegateError;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VSIdentityProvider *identityProvider;
@property (retain) NSError *onLaunchError;
@property (nonatomic, retain) VSPreferences *preferences;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, retain) VSApplicationControllerResponseHandler *responseHandler;
@property (nonatomic, retain) VSStateMachine *stateMachine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_applicationLaunchParams;
- (void)_applicationReadyWithSuccess:(bool)arg1 javascriptErrorValue:(id)arg2;
- (void)_beginAuthentication;
- (id)_bootURL;
- (void)_completeRequest:(id)arg1 withJavascriptResponse:(id)arg2 javascriptErrorValue:(id)arg3;
- (void)_completeRequest:(id)arg1 withResult:(id)arg2;
- (id)_errorForJavascriptErrorValueValue:(id)arg1 withRequest:(id)arg2;
- (id)_javascriptRequestForRequest:(id)arg1 withVerificationData:(id)arg2;
- (id)_makeJavaScriptRequest;
- (void)_makeJavascriptRequestForRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_notifyDelegateWithBlock:(id /* block */)arg1;
- (void)_notifyDidReceiveViewModel:(id)arg1;
- (void)_notifyDidReceiveViewModelError:(id)arg1;
- (void)_notifyDidStart;
- (void)_notifyRequest:(id)arg1 didCompleteWithResponse:(id)arg2;
- (void)_notifyRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)_notifyStartDidFailWithError:(id)arg1;
- (void)_presentDocument:(id)arg1;
- (void)_submitJavascriptRequest:(id)arg1 forApplicationControllerRequest:(id)arg2;
- (id)activeAppDocumentForApplication:(id)arg1;
- (bool)allowUI;
- (id)appDocumentController;
- (void)appDocumentController:(id)arg1 didFailToUpdateViewModelWithError:(id)arg2;
- (void)appDocumentController:(id)arg1 didUpdateViewModel:(id)arg2;
- (id)application;
- (void)application:(id)arg1 evaluateAppJavascriptInContext:(id)arg2;
- (void)application:(id)arg1 startDidFailWithError:(id)arg2;
- (void)applicationDidStart:(id)arg1;
- (id)applicationReadyCallback;
- (id)auditToken;
- (void)dealloc;
- (id)delegate;
- (id)delegateError;
- (id)identityProvider;
- (id)init;
- (id)initWithIdentityProvider:(id)arg1;
- (id)launchParamsForApplication:(id)arg1;
- (id)onLaunchError;
- (id)preferences;
- (id)privateQueue;
- (oneway void)release;
- (id)responseHandler;
- (void)setAllowUI:(bool)arg1;
- (void)setAppDocumentController:(id)arg1;
- (void)setApplication:(id)arg1;
- (void)setApplicationReadyCallback:(id)arg1;
- (void)setAuditToken:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateError:(id)arg1;
- (void)setIdentityProvider:(id)arg1;
- (void)setOnLaunchError:(id)arg1;
- (void)setPreferences:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setResponseHandler:(id)arg1;
- (void)setStateMachine:(id)arg1;
- (void)showAuthenticationUserInterfaceWithAuthenticationToken:(id)arg1;
- (void)start;
- (id)stateMachine;
- (void)stop;
- (void)submitRequest:(id)arg1;
- (void)transitionToInvalidState;
- (void)transitionToNotifyingOfLaunchFailureState;
- (void)transitionToReadyState;
- (void)transitionToWaitingForBothLaunchCallbacksState;

@end

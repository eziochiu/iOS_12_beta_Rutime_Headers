/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
 */

@interface ITIdleTimerStateService : NSObject <ITIdleTimerStateServerDelegate> {
    NSMutableDictionary * _assertionReasonsByClientID;
    NSMutableDictionary * _assertionsByReason;
    NSObject<OS_dispatch_queue> * _calloutDispatchQueue;
    FBSSerialQueue * _calloutQueue;
    <ITIdleTimerStateServiceDelegate> * _delegate;
    ITIdleTimerStateServer * _server;
    <BSInvalidatable> * _stateCaptureAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ITIdleTimerStateServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addStateCaptureHandler;
- (id)_identifierForClient:(id)arg1;
- (void)client:(id)arg1 setIdleTimerDisabled:(bool)arg2 forReason:(id)arg3;
- (void)clientDidDisconnect:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithDispatchQueue:(id)arg1;
- (bool)isIdleTimerServiceAvailable;
- (void)setDelegate:(id)arg1;

@end

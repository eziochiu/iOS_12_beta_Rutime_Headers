/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
 */

@interface ITIdleTimerStateServer : FBSServiceFacility {
    <ITIdleTimerStateServerDelegate> * _delegate;
}

@property (nonatomic) <ITIdleTimerStateServerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_handleMessage_isIdleTimerServiceAvailable:(id)arg1;
- (void)_handleMessage_setIdleTimerDisabledForClient:(id)arg1 withMessage:(id)arg2;
- (id)delegate;
- (id)initWithCalloutQueue:(id)arg1;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)setDelegate:(id)arg1;
- (bool)shouldAllowClientConnection:(id)arg1 withMessage:(id)arg2;

@end

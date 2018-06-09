/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentTimeoutManager : NSObject <SXWebContentMessageHandler, SXWebContentTimeoutManager> {
    NFStateMachine * _stateMachine;
    NSMutableArray * _timeoutBlocks;
    NSTimer * _timer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NFStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSMutableArray *timeoutBlocks;
@property (nonatomic, retain) NSTimer *timer;

- (void).cxx_destruct;
- (void)didReceiveMessage:(id)arg1 securityOrigin:(id)arg2;
- (id)initWithTimeout:(double)arg1 messageHandlerManager:(id)arg2 documentStateProvider:(id)arg3;
- (void)onTimeout:(id /* block */)arg1;
- (void)setTimer:(id)arg1;
- (id)stateMachine;
- (id)timeoutBlocks;
- (id)timer;

@end

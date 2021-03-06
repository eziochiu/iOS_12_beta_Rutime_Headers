/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFStateMachineActivityCollector : NSObject <PFStateMachineActivityReceiver> {
    PFTraceBuffer * _traceBuffer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)collector;

- (void).cxx_destruct;
- (id)activities;
- (id)description;
- (id)init;
- (id)initWithMaximumCount:(unsigned long long)arg1;
- (void)stateMachine:(id)arg1 source:(id)arg2 eventName:(id)arg3 destination:(id)arg4;
- (void)stateMachine:(id)arg1 trace:(id)arg2;
- (void)stateMachine:(id)arg1 trace:(id)arg2 state:(id)arg3;
- (void)stateMachineWasCreated:(id)arg1;
- (void)stateMachineWasDeleted:(id)arg1 name:(id)arg2;

@end

/* made by EzioChiu.
 */

@protocol PFStateMachineActivity

@optional

- (void)stateMachine:(PFStateMachine *)arg1 source:(PFStateMachineNode *)arg2 eventName:(NSString *)arg3 destination:(PFStateMachineNode *)arg4;
- (void)stateMachine:(PFStateMachine *)arg1 trace:(NSString *)arg2;
- (void)stateMachine:(PFStateMachine *)arg1 trace:(id)arg2 state:(NSString *)arg3;
- (void)stateMachineWasCreated:(PFStateMachine *)arg1;
- (void)stateMachineWasDeleted:(id)arg1 name:(NSString *)arg2;

@end

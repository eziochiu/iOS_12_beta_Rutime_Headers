/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFStateMachineSubflowTransition : PFStateMachineTransition {
    NSString * _subflowName;
}

@property (readonly) NSString *subflowName;

- (void).cxx_destruct;
- (id)description;
- (id)destination:(id)arg1;
- (id)dot:(id)arg1 prefix:(id)arg2 graph:(id)arg3;
- (id)initWithEventName:(id)arg1 subflow:(id)arg2 to:(id)arg3;
- (void)performAction:(id)arg1;
- (id)returnDestination:(id)arg1;
- (id)subflowName;

@end

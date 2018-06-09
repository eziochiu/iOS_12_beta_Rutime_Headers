/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFStateMachineNode : NSObject {
    id /* block */  _action;
    NSString * _name;
    NSMutableDictionary * _transitions;
}

@property (readonly) NSString *name;

+ (id)nodeWithName:(id)arg1;

- (void).cxx_destruct;
- (id)_dotReachableNodes:(id)arg1 graph:(id)arg2;
- (id)addReturnTransitionOn:(id)arg1;
- (id)addTransition:(id)arg1;
- (id)addTransitionOn:(id)arg1 subflow:(id)arg2 to:(id)arg3;
- (id)addTransitionOn:(id)arg1 to:(id)arg2;
- (id)description;
- (id)dot:(id)arg1 prefix:(id)arg2 graph:(id)arg3;
- (id)initWithName:(id)arg1;
- (id)name;
- (id)performAction:(id)arg1;
- (void)setAction:(id /* block */)arg1;
- (id)transitionForEventName:(id)arg1;

@end

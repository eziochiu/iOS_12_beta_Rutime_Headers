/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFStateMachineTransition : NSObject {
    id /* block */  _action;
    NSString * _destinationName;
    NSString * _eventName;
}

@property (readonly) NSString *destinationName;
@property (readonly) NSString *eventName;

+ (id)returnTransitionOn:(id)arg1;
+ (id)transitionOn:(id)arg1 subflow:(id)arg2 to:(id)arg3;
+ (id)transitionOn:(id)arg1 to:(id)arg2;
+ (id)transitionOn:(id)arg1 to:(id)arg2 action:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_dotReachableNodes:(id)arg1;
- (id)description;
- (id)destination:(id)arg1;
- (id)destinationName;
- (id)dot:(id)arg1 prefix:(id)arg2 graph:(id)arg3;
- (id)eventName;
- (id)initWithEventName:(id)arg1 to:(id)arg2 action:(id /* block */)arg3;
- (void)performAction:(id)arg1;
- (void)setAction:(id /* block */)arg1;

@end

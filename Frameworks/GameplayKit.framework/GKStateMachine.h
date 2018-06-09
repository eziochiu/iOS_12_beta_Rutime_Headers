/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKStateMachine : NSObject {
    GKState * _currentState;
    NSDictionary * _states;
}

@property (nonatomic, readonly) GKState *currentState;

+ (id)stateMachineWithStates:(id)arg1;

- (void).cxx_destruct;
- (id)_dotStringInstanceData;
- (id)_instanceData;
- (bool)canEnterState:(Class)arg1;
- (id)currentState;
- (bool)enterState:(Class)arg1;
- (void)forceEnterState:(Class)arg1;
- (id)init;
- (id)initWithStates:(id)arg1;
- (id)stateForClass:(Class)arg1;
- (void)updateWithDeltaTime:(double)arg1;

@end

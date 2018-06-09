/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSStateMachine : NSObject {
    long long  _currentState;
    <CSStateMachineDelegate> * _delegate;
    long long  _initialState;
    NSMutableDictionary * _transitions;
}

@property (nonatomic, readonly) long long currentState;
@property (nonatomic) <CSStateMachineDelegate> *delegate;
@property (nonatomic) long long initialState;
@property (nonatomic, retain) NSMutableDictionary *transitions;

- (void).cxx_destruct;
- (void)addTransitionFrom:(long long)arg1 to:(long long)arg2 for:(long long)arg3;
- (long long)currentState;
- (id)delegate;
- (id)initWithInitialState:(long long)arg1;
- (long long)initialState;
- (void)performTransitionForEvent:(long long)arg1;
- (void)reset;
- (void)setDelegate:(id)arg1;
- (void)setInitialState:(long long)arg1;
- (void)setTransitions:(id)arg1;
- (id)transitions;

@end

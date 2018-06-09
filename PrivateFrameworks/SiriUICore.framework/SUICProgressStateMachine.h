/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

@interface SUICProgressStateMachine : NSObject {
    CUState * _abstractState;
    unsigned long long  _currentState;
    NSArray * _observers;
    NSDictionary * _stateForStateName;
    CUStateMachine * _underlyingStateMachine;
}

@property (nonatomic, copy) NSArray *observers;
@property (readonly) unsigned long long state;

- (void).cxx_destruct;
- (void)_ignoreEvent:(unsigned long long)arg1;
- (void)_transitionToState:(unsigned long long)arg1 forEvent:(unsigned long long)arg2;
- (void)dealloc;
- (void)handleEvent:(unsigned long long)arg1;
- (id)init;
- (id)observers;
- (void)setObservers:(id)arg1;
- (unsigned long long)state;

@end

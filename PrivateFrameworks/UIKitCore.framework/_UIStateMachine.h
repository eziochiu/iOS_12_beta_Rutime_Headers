/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStateMachine : NSObject {
    unsigned long long  _eventCount;
    unsigned long long  _state;
    unsigned long long  _stateCount;
    struct { unsigned long long x1; unsigned long long x2; id /* block */ x3; } * _transitionTable;
}

@property (nonatomic) unsigned long long state;

- (void)dealloc;
- (void)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;
- (id)initWithStates:(unsigned long long)arg1 events:(unsigned long long)arg2 initialState:(unsigned long long)arg3;
- (void)setState:(unsigned long long)arg1;
- (void)setTransitionHandlerForState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 transitionHandler:(id /* block */)arg3;
- (unsigned long long)state;

@end

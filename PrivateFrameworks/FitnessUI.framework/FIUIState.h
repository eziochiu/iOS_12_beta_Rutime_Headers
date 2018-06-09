/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIState : NSObject {
    id /* block */  _entry;
    id /* block */  _exit;
    NSString * _label;
    bool  _transitional;
    NSMutableDictionary * _transitions;
}

@property (copy) id /* block */ entry;
@property (copy) id /* block */ exit;
@property (readonly) NSString *label;
@property (getter=isTransitional) bool transitional;

+ (id)stateWithLabel:(id)arg1;
+ (id)transitionalStateFromState:(id)arg1 toState:(id)arg2 entryEvent:(long long)arg3 exitEvent:(long long)arg4;

- (void).cxx_destruct;
- (id)allTransitions;
- (id)description;
- (id /* block */)entry;
- (void)enumerateEvents:(id /* block */)arg1;
- (id /* block */)exit;
- (id)initWithLabel:(id)arg1;
- (bool)isTransitional;
- (id)label;
- (void)registerTransition:(long long)arg1 label:(id)arg2 toState:(id)arg3;
- (void)registerTransition:(long long)arg1 label:(id)arg2 toState:(id)arg3 handler:(id /* block */)arg4 gate:(id /* block */)arg5;
- (void)setEntry:(id /* block */)arg1;
- (void)setExit:(id /* block */)arg1;
- (void)setTransitional:(bool)arg1;
- (id)transitionForEvent:(long long)arg1;

@end

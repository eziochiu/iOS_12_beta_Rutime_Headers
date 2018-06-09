/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HULayoutTransition : NSObject {
    id /* block */  _completionBlock;
    id  _fromState;
    unsigned long long  _phase;
    id /* block */  _setupBlock;
    id  _toState;
    id /* block */  _transitionBlock;
    UIView * _view;
}

@property (nonatomic, readonly, copy) id /* block */ completionBlock;
@property (nonatomic, retain) id fromState;
@property (nonatomic) unsigned long long phase;
@property (nonatomic, readonly, copy) id /* block */ setupBlock;
@property (nonatomic, retain) id toState;
@property (nonatomic, readonly, copy) id /* block */ transitionBlock;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)completeTransition;
- (id /* block */)completionBlock;
- (void)executeTransition;
- (id)fromState;
- (id)init;
- (id)initWithView:(id)arg1 setupBlock:(id /* block */)arg2 transitionBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (unsigned long long)phase;
- (void)setFromState:(id)arg1;
- (void)setPhase:(unsigned long long)arg1;
- (void)setToState:(id)arg1;
- (id /* block */)setupBlock;
- (void)setupTransitionWithFromState:(id)arg1 toState:(id)arg2;
- (id)toState;
- (id /* block */)transitionBlock;
- (id)view;

@end

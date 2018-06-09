/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIViewAnimationInfo : NSObject {
    NSMutableDictionary * _animatablePropertyStates;
    id /* block */  _invalidationBlock;
    NSMutableDictionary * _isPartOfHigherOrderProperty;
    NSObject<OS_dispatch_queue> * _lockingQueue;
    NSMutableDictionary * _modifierGroupRequestHandlers;
    UIView * _owningView;
    NSMutableDictionary * _presentationModifiers;
}

@property (nonatomic, retain) NSMutableDictionary *animatablePropertyStates;
@property (nonatomic, copy) id /* block */ invalidationBlock;
@property (nonatomic, retain) NSMutableDictionary *isPartOfHigherOrderProperty;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *lockingQueue;
@property (nonatomic, retain) NSMutableDictionary *modifierGroupRequestHandlers;
@property UIView *owningView;
@property (nonatomic, retain) NSMutableDictionary *presentationModifiers;

- (void).cxx_destruct;
- (bool)_canInvalidate;
- (void)_invalidateIfPossible;
- (id)animatablePropertyStateForKey:(id)arg1 createIfNecessary:(bool)arg2;
- (id)animatablePropertyStateKeys;
- (id)animatablePropertyStates;
- (id)initWithView:(id)arg1;
- (id /* block */)invalidationBlock;
- (id)isPartOfHigherOrderProperty;
- (id)lockingQueue;
- (id)modifierGroupRequestHandlerForKey:(id)arg1;
- (id)modifierGroupRequestHandlers;
- (id)owningView;
- (void)performWithLock:(id /* block */)arg1;
- (id)presentationModifierForKey:(id)arg1;
- (id)presentationModifiers;
- (void)setAnimatablePropertyState:(id)arg1 forKey:(id)arg2;
- (void)setAnimatablePropertyStates:(id)arg1;
- (void)setInvalidationBlock:(id /* block */)arg1;
- (void)setIsPartOfHigherOrderProperty:(id)arg1;
- (void)setLockingQueue:(id)arg1;
- (void)setModifierGroupRequestHandler:(id)arg1 forKey:(id)arg2;
- (void)setModifierGroupRequestHandlers:(id)arg1;
- (void)setOwningView:(id)arg1;
- (void)setPresentationModifier:(id)arg1 forKey:(id)arg2;
- (void)setPresentationModifiers:(id)arg1;

@end

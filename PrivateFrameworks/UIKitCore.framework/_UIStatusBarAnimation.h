/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarAnimation : NSObject <NSCopying> {
    id /* block */  _animationBlock;
    NSMutableArray * _completionHandlers;
    NSSet * _delayedDisplayItemPlacements;
    NSSet * _delayedItemIdentifiers;
    bool  _delaysAnimatingItems;
    bool  _delaysDependentItems;
    _UIStatusBarIdentifier * _displayItemIdentifier;
    bool  _enabled;
    NSString * _exclusivityGroupIdentifier;
    NSString * _identifier;
    _UIStatusBarAnimation * _parentAnimation;
    id /* block */  _prepareBlock;
    long long  _priority;
    NSMutableArray * _subAnimations;
    long long  _type;
}

@property (nonatomic, copy) id /* block */ animationBlock;
@property (nonatomic, retain) NSMutableArray *completionHandlers;
@property (nonatomic, copy) NSSet *delayedDisplayItemPlacements;
@property (nonatomic, copy) NSSet *delayedItemIdentifiers;
@property (nonatomic) bool delaysAnimatingItems;
@property (nonatomic) bool delaysDependentItems;
@property (nonatomic, copy) _UIStatusBarIdentifier *displayItemIdentifier;
@property (nonatomic, readonly) NSSet *effectiveDelayedItemIdentifiers;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, copy) NSString *exclusivityGroupIdentifier;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) _UIStatusBarAnimation *parentAnimation;
@property (nonatomic, copy) id /* block */ prepareBlock;
@property (nonatomic) long long priority;
@property (nonatomic, retain) NSMutableArray *subAnimations;
@property (nonatomic) long long type;

+ (void)_addAnimations:(id)arg1 toDispatchGroup:(id)arg2;
+ (void)_addAnimations:(id)arg1 toPreparingAnimations:(id)arg2 exclusiveAnimations:(id)arg3 visitedDisplayItemIdentifiers:(id)arg4;
+ (id)animationWithBlock:(id /* block */)arg1;
+ (void)initialize;
+ (void)prepareAnimations:(id)arg1 forStatusBar:(id)arg2;

- (void).cxx_destruct;
- (id)_dependentItemIdentifiersEnabledOnly:(bool)arg1;
- (void)_prepareForStatusBar:(id)arg1 preparingAnimations:(id)arg2 exclusiveAnimations:(id)arg3;
- (void)addCompletionHandler:(id /* block */)arg1;
- (void)addSubAnimation:(id)arg1 forDisplayItemWithIdentifier:(id)arg2;
- (void)addTotalCompletionHandler:(id /* block */)arg1;
- (id /* block */)animationBlock;
- (void)cancel;
- (id)completionHandlers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delayedDisplayItemPlacements;
- (id)delayedItemIdentifiers;
- (bool)delaysAnimatingItems;
- (bool)delaysDependentItems;
- (id)description;
- (id)displayItemIdentifier;
- (id)effectiveDelayedItemIdentifiers;
- (id)exclusivityGroupIdentifier;
- (id)identifier;
- (bool)isEnabled;
- (id)parentAnimation;
- (void)performForStatusBar:(id)arg1;
- (id /* block */)prepareBlock;
- (long long)priority;
- (void)setAnimationBlock:(id /* block */)arg1;
- (void)setCompletionHandlers:(id)arg1;
- (void)setDelayedDisplayItemPlacements:(id)arg1;
- (void)setDelayedItemIdentifiers:(id)arg1;
- (void)setDelaysAnimatingItems:(bool)arg1;
- (void)setDelaysDependentItems:(bool)arg1;
- (void)setDisplayItemIdentifier:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setExclusivityGroupIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setParentAnimation:(id)arg1;
- (void)setPrepareBlock:(id /* block */)arg1;
- (void)setPriority:(long long)arg1;
- (void)setSubAnimations:(id)arg1;
- (void)setType:(long long)arg1;
- (id)subAnimations;
- (long long)type;

@end

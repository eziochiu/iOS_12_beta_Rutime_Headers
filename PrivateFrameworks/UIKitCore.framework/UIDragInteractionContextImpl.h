/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDragInteractionContextImpl : NSObject <UIDragAnimating, UIDragInteractionContext> {
    bool  _accessibilityDrag;
    NSMutableArray * _animationBlocks;
    id /* block */  _animations;
    UIDelayedAction * _cancellationTimer;
    id /* block */  _completion;
    NSMutableArray * _completionBlocks;
    UIDelayedAction * _gateTimer;
    bool  _hasBegunDrag;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialLocation;
    NSArray * _items;
    bool  _preparedForLift;
    bool  _shouldAnimateLift;
    long long  _state;
}

@property (getter=isAccessibilityDrag, nonatomic) bool accessibilityDrag;
@property (nonatomic, readonly) NSMutableArray *animationBlocks;
@property (nonatomic, copy) id /* block */ animations;
@property (nonatomic, retain) UIDelayedAction *cancellationTimer;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, readonly) NSMutableArray *completionBlocks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDelayedAction *gateTimer;
@property (nonatomic) bool hasBegunDrag;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialLocation;
@property (nonatomic, retain) NSArray *items;
@property (getter=isPreparedForLift, nonatomic) bool preparedForLift;
@property (nonatomic) bool shouldAnimateLift;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_api_addCompletion:(id /* block */)arg1;
- (void)addAnimations:(id /* block */)arg1;
- (void)addCompletion:(id /* block */)arg1;
- (id)animationBlocks;
- (id /* block */)animations;
- (id)cancellationTimer;
- (id /* block */)completion;
- (id)completionBlocks;
- (id)gateTimer;
- (bool)hasBegunDrag;
- (struct CGPoint { double x1; double x2; })initialLocation;
- (bool)isAccessibilityDrag;
- (bool)isPreparedForLift;
- (id)items;
- (void)setAccessibilityDrag:(bool)arg1;
- (void)setAnimations:(id /* block */)arg1;
- (void)setCancellationTimer:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setGateTimer:(id)arg1;
- (void)setHasBegunDrag:(bool)arg1;
- (void)setInitialLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setItems:(id)arg1;
- (void)setPreparedForLift:(bool)arg1;
- (void)setShouldAnimateLift:(bool)arg1;
- (void)setState:(long long)arg1;
- (bool)shouldAnimateLift;
- (long long)state;

@end

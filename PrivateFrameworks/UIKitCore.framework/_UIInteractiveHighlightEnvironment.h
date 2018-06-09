/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIInteractiveHighlightEnvironment : NSObject {
    NSUUID * _backgroundAnimationIdentifier;
    UIViewPropertyAnimator * _backgroundEffectAnimator;
    id /* block */  _backgroundEffectApplyBlock;
    UIViewFloatAnimatableProperty * _backgroundEffectProgress;
    UIVisualEffectView * _backgroundEffectView;
    _UIInteractiveHighlightEnvironment * _childEnvironment;
    UIScreen * _containerScreen;
    UIView * _containerView;
    _UIInteractiveHighlightEffectWindow * _containerWindow;
    UIView * _contentClipView;
    UIView * _contentOverlayView;
    UIView * _contentView;
    UIView * _customBackgroundEffectView;
    _UIInteractiveHighlightEnvironment * _parentEnvironment;
    NSArray * _viewRecords;
}

@property (nonatomic, copy) id /* block */ backgroundEffectApplyBlock;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) UIView *contentClipView;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, retain) UIView *customBackgroundEffectView;
@property (getter=isHidden, nonatomic) bool hidden;

+ (id)interactiveHighlightEnvironmentForContainerView:(id)arg1;
+ (id)requestInteractiveHighlightEnvironmentForView:(id)arg1;

- (void).cxx_destruct;
- (void)applyBackgroundEffectWithMagnitude:(double)arg1 interactive:(bool)arg2 completion:(id /* block */)arg3;
- (void)applyContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id /* block */)backgroundEffectApplyBlock;
- (id)backgroundVisualEffectForProgress:(double)arg1;
- (id)containerView;
- (id)contentClipView;
- (id)contentView;
- (id)customBackgroundEffectView;
- (void)dealloc;
- (void)disableClippingForView:(id)arg1 ancestorView:(id)arg2;
- (void)finalizeBackgroundEffect;
- (void)finalizeContainerWindowIfNeeded;
- (void)finalizeContentViewIfNeeded;
- (void)finalizeViewRecord:(id)arg1;
- (long long)indexOfViewRecordForView:(id)arg1;
- (void)initBackgroundEffectViewIfNeeded;
- (void)initContainerWindowIfNeeded;
- (void)initContentViewIfNeeded;
- (id)initWithContainerScreen:(id)arg1;
- (id)initWithContainerView:(id)arg1;
- (id)initWithParentEnvironment:(id)arg1;
- (id)interactiveHighlightEffectForView:(id)arg1 options:(unsigned long long)arg2;
- (bool)isHidden;
- (id)newBackgroundEffectAnimator;
- (id)newViewRecordForView:(id)arg1 options:(unsigned long long)arg2;
- (void)removeAllViewRecords;
- (void)removeInteractiveHighlightEffect:(id)arg1;
- (void)removeViewRecordsIfNeeded;
- (void)reset;
- (void)setBackgroundEffectApplyBlock:(id /* block */)arg1;
- (void)setCustomBackgroundEffectView:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHidden:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setUserInteractionOnContainerEnabled:(bool)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionViewControllerLayoutToLayoutTransition : NSObject <UIViewControllerAnimatedTransitioning> {
    bool  _crossFadeBottomBars;
    bool  _crossFadeNavigationBar;
    bool  _interactionAborted;
    UIPercentDrivenInteractiveTransition * _interactionController;
    long long  _operation;
    UICollectionViewLayout * _toLayout;
}

@property (nonatomic) bool crossFadeBottomBars;
@property (nonatomic) bool crossFadeNavigationBar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool interactionAborted;
@property (nonatomic) UIPercentDrivenInteractiveTransition *interactionController;
@property (nonatomic) long long operation;
@property (readonly) Class superclass;
@property (nonatomic, retain) UICollectionViewLayout *toLayout;

+ (id)transitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;

- (void).cxx_destruct;
- (bool)_shouldCrossFadeBottomBars;
- (bool)_shouldCrossFadeNavigationBar;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(bool)arg1;
- (bool)crossFadeBottomBars;
- (bool)crossFadeNavigationBar;
- (bool)interactionAborted;
- (id)interactionController;
- (long long)operation;
- (void)setCrossFadeBottomBars:(bool)arg1;
- (void)setCrossFadeNavigationBar:(bool)arg1;
- (void)setInteractionAborted:(bool)arg1;
- (void)setInteractionController:(id)arg1;
- (void)setOperation:(long long)arg1;
- (void)setToLayout:(id)arg1;
- (id)toLayout;
- (double)transitionDuration:(id)arg1;

@end

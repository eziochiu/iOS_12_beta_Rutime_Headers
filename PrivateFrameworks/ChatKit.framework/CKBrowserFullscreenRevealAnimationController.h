/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBrowserFullscreenRevealAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {
    UIViewPropertyAnimator * _ascentDescentAnimator;
    bool  _presenting;
}

@property (nonatomic, retain) UIViewPropertyAnimator *ascentDescentAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPresenting, nonatomic) bool presenting;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)ascentDescentAnimator;
- (id)initWithDirection:(bool)arg1;
- (bool)isPresenting;
- (void)setAscentDescentAnimator:(id)arg1;
- (void)setPresenting:(bool)arg1;
- (double)transitionDuration:(id)arg1;

@end

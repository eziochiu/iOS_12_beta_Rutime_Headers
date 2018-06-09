/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicNavigationControllerBlastDoorAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    bool  _reversed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isReversed, nonatomic) bool reversed;
@property (readonly) Class superclass;

- (void)animateTransition:(id)arg1;
- (bool)isReversed;
- (void)setReversed:(bool)arg1;
- (double)transitionDuration:(id)arg1;

@end

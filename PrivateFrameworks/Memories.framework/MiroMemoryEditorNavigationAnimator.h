/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMemoryEditorNavigationAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    bool  _isPresenting;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPresenting;
@property (readonly) Class superclass;

- (void)animateTransition:(id)arg1;
- (bool)isPresenting;
- (void)setIsPresenting:(bool)arg1;
- (double)transitionDuration:(id)arg1;

@end

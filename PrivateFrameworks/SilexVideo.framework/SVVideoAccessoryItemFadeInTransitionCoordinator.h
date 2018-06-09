/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoAccessoryItemFadeInTransitionCoordinator : NSObject <SVVideoAccessoryItemTransitioning> {
    UIViewPropertyAnimator * _animator;
}

@property (nonatomic, retain) UIViewPropertyAnimator *animator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateWithContext:(id)arg1;
- (id)animator;
- (void)cancelTransition;
- (void)setAnimator:(id)arg1;

@end

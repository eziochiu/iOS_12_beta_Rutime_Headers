/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoAccessoryItemCrossfadeTransitionCoordinator : NSObject <SVVideoAccessoryItemTransitioning> {
    UIViewPropertyAnimator * _fadeInAnimator;
    UIViewPropertyAnimator * _fadeOutAnimator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIViewPropertyAnimator *fadeInAnimator;
@property (nonatomic, retain) UIViewPropertyAnimator *fadeOutAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateWithContext:(id)arg1;
- (void)cancelTransition;
- (id)fadeInAnimator;
- (id)fadeOutAnimator;
- (void)setFadeInAnimator:(id)arg1;
- (void)setFadeOutAnimator:(id)arg1;

@end

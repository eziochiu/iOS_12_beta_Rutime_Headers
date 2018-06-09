/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoAccessoryItemDisplayModeTransitionCoordinator : NSObject <SVVideoAccessoryItemDisplayModeTransitioning> {
    NSMutableArray * _alongsideBlocks;
    bool  _animated;
    UIViewPropertyAnimator * _animator;
    NSMutableArray * _completionBlocks;
}

@property (nonatomic, readonly) NSMutableArray *alongsideBlocks;
@property (nonatomic, readonly) bool animated;
@property (nonatomic, retain) UIViewPropertyAnimator *animator;
@property (nonatomic, readonly) NSMutableArray *completionBlocks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)alongsideBlocks;
- (void)animateAlongsideTransition:(id /* block */)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)animateWithContext:(id)arg1;
- (bool)animated;
- (id)animator;
- (void)cancelTransition;
- (id)completionBlocks;
- (id)initWithAnimated:(bool)arg1;
- (void)setAnimator:(id)arg1;

@end

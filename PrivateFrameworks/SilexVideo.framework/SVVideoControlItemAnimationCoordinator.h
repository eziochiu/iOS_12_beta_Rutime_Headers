/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoControlItemAnimationCoordinator : NSObject <SVVideoControlItemAnimating> {
    NSMutableArray * _animationBlocks;
    NSMutableArray * _completionBlocks;
    <AVPlayerViewControllerAnimationCoordinator> * _coordinator;
}

@property (nonatomic, readonly) NSMutableArray *animationBlocks;
@property (nonatomic, readonly) NSMutableArray *completionBlocks;
@property (nonatomic, readonly) <AVPlayerViewControllerAnimationCoordinator> *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateWithAnimationBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (id)animationBlocks;
- (id)completionBlocks;
- (id)coordinator;
- (id)initWithAnimationCoordinator:(id)arg1;

@end

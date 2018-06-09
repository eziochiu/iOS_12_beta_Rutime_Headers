/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoAccessoryBarItemTransitionContext : NSObject <SVVideoAccessoryItemTransitionContext> {
    id /* block */  _completionBlock;
    UIView * _containerView;
    UIView * _fromView;
    UIView * _toView;
    bool  _transitionWasCancelled;
}

@property (nonatomic, readonly, copy) id /* block */ completionBlock;
@property (nonatomic, readonly) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIView *fromView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *toView;
@property (nonatomic) bool transitionWasCancelled;

- (void).cxx_destruct;
- (void)completeTransition:(bool)arg1;
- (id /* block */)completionBlock;
- (id)containerView;
- (id)fromView;
- (id)initWithContainerView:(id)arg1 fromView:(id)arg2 toView:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)setTransitionWasCancelled:(bool)arg1;
- (id)toView;
- (bool)transitionWasCancelled;

@end

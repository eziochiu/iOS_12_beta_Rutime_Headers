/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoAccessoryBarItemTransition : NSObject {
    SVVideoAccessoryBarItemTransitionContext * _context;
    <SVAccessoryItem> * _fromItem;
    <SVAccessoryItem> * _toItem;
    <SVVideoAccessoryItemTransitioning> * _transitionCoordinator;
}

@property (nonatomic, retain) SVVideoAccessoryBarItemTransitionContext *context;
@property (nonatomic, readonly) <SVAccessoryItem> *fromItem;
@property (nonatomic, readonly) <SVAccessoryItem> *toItem;
@property (nonatomic, readonly) <SVVideoAccessoryItemTransitioning> *transitionCoordinator;

- (void).cxx_destruct;
- (void)cancel;
- (id)context;
- (id)fromItem;
- (id)initWithFromItem:(id)arg1 toItem:(id)arg2 transitionCoordinator:(id)arg3;
- (void)performTransitionOnContainerView:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)setContext:(id)arg1;
- (id)toItem;
- (id)transitionCoordinator;

@end

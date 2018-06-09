/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIViewAnimationContext : NSObject {
    long long  _animationCount;
    id /* block */  _completionHandler;
    UITableViewCell * _swipeToDeleteCell;
    NSArray * _viewAnimations;
}

@property (nonatomic) long long animationCount;
@property (nonatomic, readonly) id /* block */ completionHandler;
@property (nonatomic, retain) UITableViewCell *swipeToDeleteCell;
@property (nonatomic, retain) NSArray *viewAnimations;

- (void).cxx_destruct;
- (long long)animationCount;
- (id /* block */)completionHandler;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (void)setAnimationCount:(long long)arg1;
- (void)setSwipeToDeleteCell:(id)arg1;
- (void)setViewAnimations:(id)arg1;
- (id)swipeToDeleteCell;
- (id)viewAnimations;

@end

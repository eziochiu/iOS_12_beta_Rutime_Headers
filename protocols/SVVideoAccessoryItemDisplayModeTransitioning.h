/* made by EzioChiu.
 */

@protocol SVVideoAccessoryItemDisplayModeTransitioning <NSObject>

@required

- (void)animateAlongsideTransition:(void *)arg1 withCompletionBlock:(void *)arg2; // needs 2 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, bool, void*
- (void)animateWithContext:(id <SVVideoAccessoryItemDisplayModeTransitionContext>)arg1;
- (void)cancelTransition;

@end

/* made by EzioChiu.
 */

@protocol CCUIStatusLabelViewControllerDelegate <NSObject>

@optional

- (void)statusLabelViewControllerDidFinishStatusUpdates:(CCUIStatusLabelViewController *)arg1;
- (void)statusLabelViewControllerWillBeginStatusUpdates:(CCUIStatusLabelViewController *)arg1;

@end

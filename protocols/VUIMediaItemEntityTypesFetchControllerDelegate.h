/* made by EzioChiu.
 */

@protocol VUIMediaItemEntityTypesFetchControllerDelegate <NSObject>

@required

- (void)controller:(VUIMediaItemEntityTypesFetchController *)arg1 fetchDidCompleteWithResult:(VUIMediaItemEntityTypesFetchControllerResult *)arg2;
- (void)controller:(VUIMediaItemEntityTypesFetchController *)arg1 fetchDidFailWithError:(NSError *)arg2;

@end

/* made by EzioChiu.
 */

@protocol OSActivityStreamDelegate <NSObject>

@required

- (bool)activityStream:(OSActivityStream *)arg1 results:(NSArray *)arg2;

@optional

- (bool)activityStream:(OSActivityStream *)arg1 results:(NSArray *)arg2 error:(NSError *)arg3;
- (void)streamDidFail:(OSActivityStream *)arg1 error:(NSError *)arg2;
- (void)streamDidStart:(OSActivityStream *)arg1;
- (void)streamDidStop:(OSActivityStream *)arg1;

@end

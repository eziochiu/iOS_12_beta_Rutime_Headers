/* made by EzioChiu.
 */

@protocol SASProximitySessionDelegate <NSObject>

@optional

- (void)finishedWithError:(NSError *)arg1;
- (void)ready;
- (void)receivedBackupAction:(SASProximityBackupAction *)arg1;

@end

/* made by EzioChiu.
 */

@protocol BRCDownloadTracking <NSObject>

@required

- (void)downloadTrackedForItemWithDocID:(NSNumber *)arg1 didFinishWithError:(NSError *)arg2;

@end

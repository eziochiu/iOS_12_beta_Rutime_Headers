/* made by EzioChiu.
 */

@protocol NSURLStorageCacheClient

@required

- (void)notifyCacheClientOfTimeRelativeResponses:(NSArray *)arg1;
- (void)notifyCachedURLResponseBecameFileBacked:(NSString *)arg1 filePath:(NSString *)arg2 forUUID:(NSString *)arg3;

@end

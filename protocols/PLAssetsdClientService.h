/* made by EzioChiu.
 */

@protocol PLAssetsdClientService <NSObject>

@required

- (void)assetAvailableForIdentifier:(NSString *)arg1 success:(bool)arg2 error:(NSError *)arg3;
- (void)downloadFinishedForIdentifier:(NSString *)arg1 success:(bool)arg2 url:(NSURL *)arg3 data:(NSData *)arg4 info:(NSDictionary *)arg5 error:(NSError *)arg6;
- (void)downloadStatusForIdentifier:(NSString *)arg1 progress:(double)arg2 completed:(bool)arg3 data:(NSData *)arg4 error:(NSError *)arg5;
- (void)resourceURLReceivedForIdentifier:(NSString *)arg1 url:(NSURL *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;

@end

/* made by EzioChiu.
 */

@protocol IKNetworkRequestRecord <NSObject>

@required

- (void)didCompleteLoadingFromCache:(long long)arg1 withResponseBody:(NSData *)arg2 mimeType:(NSString *)arg3;
- (void)didCompleteLoadingWithResponseBody:(NSData *)arg1;
- (void)didFailWithError:(NSError *)arg1;
- (void)didReceiveData:(NSData *)arg1;
- (void)didReceiveResponse:(NSHTTPURLResponse *)arg1 timingData:(NSDictionary *)arg2;
- (NSString *)identifier;
- (long long)initiatorType;
- (long long)resourceType;
- (void)willSendRequest:(NSURLRequest *)arg1;

@end

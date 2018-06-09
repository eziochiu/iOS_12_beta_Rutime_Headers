/* made by EzioChiu.
 */

@protocol GEOServiceRequestConfiguring <NSObject>

@required

- (NSDictionary *)additionalHTTPHeaders;
- (NSArray *)additionalURLQueryItems;
- (int)dataRequestKindForRequest:(PBRequest *)arg1;
- (NSString *)debugRequestName;
- (int)experimentDispatcherRequestTypeForRequest:(PBRequest *)arg1;
- (long long)experimentType;
- (unsigned char)requestCounterInfoTypeForRequest:(PBRequest *)arg1;
- (NSNumber *)serviceTypeNumber;
- (bool)shouldThrottleRequests;
- (NSString *)throttleKey;
- (unsigned long long)urlType;

@optional

- (double)timeout;

@end

/* made by EzioChiu.
 */

@protocol VCMomentsMessengerDelegate <NSObject>

@required

- (void)streamToken:(long long)arg1 didEndProcessingRequest:(NSDictionary *)arg2 URL:(NSURL *)arg3 error:(NSError *)arg4;
- (void)streamToken:(long long)arg1 didFinishRequest:(NSDictionary *)arg2 didSucceed:(bool)arg3;
- (void)streamToken:(long long)arg1 didStartProcessingRequest:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)streamTokenDidCleanupAllRequests:(long long)arg1;

@end

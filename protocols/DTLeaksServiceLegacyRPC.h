/* made by EzioChiu.
 */

@protocol DTLeaksServiceLegacyRPC <DTXAllowedRPC>

@required

- (void)cancelAllRequests;
- (void)requestLeaksForPid:(NSNumber *)arg1 context:(NSNumber *)arg2 provideBacktraces:(NSNumber *)arg3;

@end

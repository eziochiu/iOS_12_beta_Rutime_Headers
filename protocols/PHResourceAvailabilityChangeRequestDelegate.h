/* made by EzioChiu.
 */

@protocol PHResourceAvailabilityChangeRequestDelegate <NSObject>

@required

- (void)resourceAvailabilityChangeRequest:(PHResourceAvailabilityChangeRequest *)arg1 didFinishWithSuccess:(bool)arg2 url:(NSURL *)arg3 data:(NSData *)arg4 info:(NSDictionary *)arg5 error:(NSError *)arg6;
- (void)resourceAvailabilityChangeRequest:(PHResourceAvailabilityChangeRequest *)arg1 didReportProgress:(double)arg2 completed:(bool)arg3 error:(NSError *)arg4;

@end

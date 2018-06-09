/* made by EzioChiu.
 */

@protocol PHVideoChoosingAndAvailabilityRequestDelegate <NSObject>

@required

- (void)videoChoosingAndAvailabilityRequest:(PHVideoChoosingAndAvailabilityRequest *)arg1 didFinishWithVideoURL:(NSURL *)arg2 info:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)videoChoosingAndAvailabilityRequest:(PHVideoChoosingAndAvailabilityRequest *)arg1 didReportProgress:(double)arg2 completed:(bool)arg3 error:(NSError *)arg4;

@end

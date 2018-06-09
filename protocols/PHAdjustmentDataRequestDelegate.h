/* made by EzioChiu.
 */

@protocol PHAdjustmentDataRequestDelegate <NSObject>

@required

- (void)adjustmentDataRequest:(PHAdjustmentDataRequest *)arg1 didFinishWithResultInfo:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)adjustmentDataRequest:(PHAdjustmentDataRequest *)arg1 didReportProgress:(double)arg2 completed:(bool)arg3 error:(NSError *)arg4;

@end

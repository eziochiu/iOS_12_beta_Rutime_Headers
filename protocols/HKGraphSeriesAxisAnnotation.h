/* made by EzioChiu.
 */

@protocol HKGraphSeriesAxisAnnotation <NSObject>

@required

- (void)addAxisAnnotation:(NSString *)arg1 forSeries:(HKGraphSeries *)arg2 textColor:(UIColor *)arg3 modelCoordinate:(id)arg4;
- (void)clearAxisAnnotations;

@end

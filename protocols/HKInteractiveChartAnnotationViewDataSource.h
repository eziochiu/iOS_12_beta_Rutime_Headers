/* made by EzioChiu.
 */

@protocol HKInteractiveChartAnnotationViewDataSource <NSObject>

@required

- (UIView *)columnViewForColumnAtIndex:(long long)arg1;
- (long long)numberOfColumnsForAnnotationView:(HKInteractiveChartAnnotationView *)arg1;

@end

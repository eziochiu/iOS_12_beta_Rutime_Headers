/* made by EzioChiu.
 */

@protocol TSDSelectionStatisticsContributor <TSDInfo>

@required

- (void)processSelectedStoragesWithStatisticsController:(NSObject<TSDSelectionStatisticsCalculator> *)arg1;

@end

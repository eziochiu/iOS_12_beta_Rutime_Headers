/* made by EzioChiu.
 */

@protocol HDStatisticsCollectionCalculatorDataSource <NSObject>

@required

- (bool)collectionCalculator:(void *)arg1 queryForInterval:(void *)arg2 error:(void *)arg3 sampleHandler:(void *)arg4; // needs 4 arg types, found 13: HDStatisticsCollectionCalculator *, NSDateInterval *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, double, double, double, long long, bool, id*

@end

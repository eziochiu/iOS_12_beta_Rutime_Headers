/* made by EzioChiu.
 */

@protocol HDDataCollector <NSObject>

@required

- (void)beginCollectionForDataAggregator:(HDDataAggregator *)arg1 lastPersistedSensorDatum:(id <HDCollectedSensorDatum>)arg2;
- (void)dataAggregator:(HDDataAggregator *)arg1 wantsCollectionWithConfiguration:(HDDataCollectorConfiguration *)arg2;
- (HKDevice *)deviceForDataAggregator:(HDDataAggregator *)arg1;
- (NSString *)identifierForDataAggregator:(HDDataAggregator *)arg1;
- (HKSource *)sourceForDataAggregator:(HDDataAggregator *)arg1;

@optional

- (double)preferredAggregationIntervalForAggregator:(HDDataAggregator *)arg1;
- (Class)sensorDatumClassForAggregator:(HDDataAggregator *)arg1;

@end

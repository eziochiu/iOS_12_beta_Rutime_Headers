/* made by EzioChiu.
 */

@protocol HKQuantitySeriesSampleQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverQuantitySeries:(HKCodableQuantitySeries *)arg1 seriesAnchor:(long long)arg2 isFinal:(bool)arg3 query:(NSUUID *)arg4;

@end

/* made by EzioChiu.
 */

@protocol HKDateRangeQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverDateRangeDictionary:(NSDictionary *)arg1 forQuery:(NSUUID *)arg2;

@end

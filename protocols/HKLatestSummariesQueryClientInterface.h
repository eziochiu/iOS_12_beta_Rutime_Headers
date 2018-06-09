/* made by EzioChiu.
 */

@protocol HKLatestSummariesQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverResetSummaries:(NSArray *)arg1 forQuery:(NSUUID *)arg2;
- (void)client_deliverSummaries:(NSArray *)arg1 forQuery:(NSUUID *)arg2;
- (void)client_deliverUpdatedSummaries:(NSArray *)arg1 forQuery:(NSUUID *)arg2;

@end

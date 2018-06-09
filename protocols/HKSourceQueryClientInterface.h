/* made by EzioChiu.
 */

@protocol HKSourceQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverSources:(NSSet *)arg1 forQuery:(NSUUID *)arg2;
- (void)client_deliverUpdatedSources:(NSSet *)arg1 added:(NSSet *)arg2 forQuery:(NSUUID *)arg3;

@end
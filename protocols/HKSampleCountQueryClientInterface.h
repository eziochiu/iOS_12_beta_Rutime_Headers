/* made by EzioChiu.
 */

@protocol HKSampleCountQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverSampleCountDictionary:(NSDictionary *)arg1 forQuery:(NSUUID *)arg2;

@end

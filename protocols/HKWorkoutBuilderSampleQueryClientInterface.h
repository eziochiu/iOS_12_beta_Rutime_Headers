/* made by EzioChiu.
 */

@protocol HKWorkoutBuilderSampleQueryClientInterface <HKQueryClientInterface>

@required

- (void)client_deliverSamples:(NSArray *)arg1 hasFinishedHistoricalFetch:(bool)arg2 queryUUID:(NSUUID *)arg3;

@end

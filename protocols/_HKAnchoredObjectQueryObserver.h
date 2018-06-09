/* made by EzioChiu.
 */

@protocol _HKAnchoredObjectQueryObserver <NSObject>

@required

- (void)queryManager:(_HKAnchoredObjectQueryManager *)arg1 didReceiveUpdatesForType:(HKObjectType *)arg2 samplesAdded:(NSArray *)arg3 objectsRemoved:(NSArray *)arg4;

@end

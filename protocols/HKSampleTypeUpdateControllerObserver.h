/* made by EzioChiu.
 */

@protocol HKSampleTypeUpdateControllerObserver <NSObject>

@required

- (void)updateController:(HKSampleTypeUpdateController *)arg1 didReceiveUpdateForType:(HKObjectType *)arg2 samplesAdded:(NSArray *)arg3 objectsRemoved:(NSArray *)arg4;

@end

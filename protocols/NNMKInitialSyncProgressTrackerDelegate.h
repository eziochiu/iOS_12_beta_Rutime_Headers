/* made by EzioChiu.
 */

@protocol NNMKInitialSyncProgressTrackerDelegate <NNMKDeviceRegistryHolder>

@required

- (void)trackerDidFinishSendingInitialSyncContentToPairedDevice:(NNMKInitialSyncProgressTracker *)arg1;

@end

/* made by EzioChiu.
 */

@protocol PXCMMComposeRecipientSelectionManagerDelegate <NSObject>

@required

- (void)composeRecipientSelectionManager:(PXCMMComposeRecipientSelectionManager *)arg1 didUpdateSelectionSnapshotWithChangeDetails:(PXArrayChangeDetails *)arg2;

@end

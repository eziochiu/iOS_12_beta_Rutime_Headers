/* made by EzioChiu.
 */

@protocol PXCMMComposeRecipientValidationManagerDelegate <NSObject>

@required

- (void)composeRecipientValidationManager:(PXCMMComposeRecipientValidationManager *)arg1 didUpdateValidationWithChangedIndexes:(NSIndexSet *)arg2;

@end

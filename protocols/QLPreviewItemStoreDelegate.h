/* made by EzioChiu.
 */

@protocol QLPreviewItemStoreDelegate

@required

- (bool)itemStore:(QLPreviewItemStore *)arg1 canEditItem:(QLItem *)arg2;
- (bool)itemStore:(QLPreviewItemStore *)arg1 canShareItem:(QLItem *)arg2;
- (unsigned long long)itemStore:(QLPreviewItemStore *)arg1 editedFileBehaviorForItem:(QLItem *)arg2;

@end

/* made by EzioChiu.
 */

@protocol QLPreviewControllerDataSource

@required

- (long long)numberOfPreviewItemsInPreviewController:(QLPreviewController *)arg1;
- (<QLPreviewItem> *)previewController:(QLPreviewController *)arg1 previewItemAtIndex:(long long)arg2;

@end

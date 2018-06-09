/* made by EzioChiu.
 */

@protocol CFXPreviewViewControllerDelegate <NSObject>

@required

- (void)previewViewController:(CFXPreviewViewController *)arg1 didFinishExportingMediaItem:(CFXMediaItem *)arg2 withError:(NSError *)arg3;
- (void)previewViewController:(CFXPreviewViewController *)arg1 didProgress:(double)arg2 exportingMediaItem:(CFXMediaItem *)arg3;
- (void)previewViewController:(CFXPreviewViewController *)arg1 didStartExportingMediaItem:(CFXMediaItem *)arg2;
- (void)previewViewControllerDidHideUserInterface:(CFXPreviewViewController *)arg1;
- (void)previewViewControllerDidShowUserInterface:(CFXPreviewViewController *)arg1;

@end

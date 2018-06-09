/* made by EzioChiu.
 */

@protocol QLPreviewItemViewControllerDelegate <NSObject>

@required

- (long long)dragDataOwnerForPreviewItemViewController:(QLItemViewController *)arg1;
- (void)expandContentOfPreviewItemViewController:(QLItemViewController *)arg1;
- (NSString *)loadingTextForPreviewItemViewController:(QLItemViewController *)arg1;
- (void)previewItemViewController:(QLItemViewController *)arg1 didEnableEditMode:(bool)arg2;
- (void)previewItemViewController:(QLItemViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)previewItemViewController:(QLItemViewController *)arg1 hasUnsavedEdits:(bool)arg2;
- (void)previewItemViewController:(QLItemViewController *)arg1 wantsFullScreen:(bool)arg2;
- (void)previewItemViewController:(QLItemViewController *)arg1 wantsToOpenURL:(NSURL *)arg2;
- (void)previewItemViewController:(void *)arg1 wantsToShowShareSheetWithPopoverTracker:(void *)arg2 dismissCompletion:(void *)arg3; // needs 3 arg types, found 7: QLItemViewController *, <QLRemotePopoverTracker> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)previewItemViewControllerDidEditPreview:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: QLItemViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)previewItemViewControllerDidUpdatePreferredContentSize:(QLItemViewController *)arg1;
- (void)previewItemViewControllerDidUpdateTitle:(QLItemViewController *)arg1;
- (void)previewItemViewControllerWantsToDismissQuickLook:(QLItemViewController *)arg1;
- (void)previewItemViewControllerWantsToShowNoInternetConnectivityAlert:(QLItemViewController *)arg1;
- (void)previewItemViewControllerWantsToShowShareSheet:(QLItemViewController *)arg1;
- (void)previewItemViewControllerWantsUpdateKeyCommands:(QLItemViewController *)arg1;
- (void)previewItemViewControllerWantsUpdateOverlay:(QLItemViewController *)arg1 animated:(bool)arg2;
- (void)previewItemViewControllerWantsUpdatePrinter:(QLItemViewController *)arg1;

@end

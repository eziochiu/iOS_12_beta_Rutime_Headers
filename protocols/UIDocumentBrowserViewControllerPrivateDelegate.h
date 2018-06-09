/* made by EzioChiu.
 */

@protocol UIDocumentBrowserViewControllerPrivateDelegate <UIDocumentBrowserViewControllerDelegate>

@optional

- (void)didDismissDocumentManager:(UIDocumentBrowserViewController *)arg1;
- (void)documentBrowser:(UIDocumentBrowserViewController *)arg1 commitDocumentURLPreview:(NSURL *)arg2;
- (void)documentBrowser:(UIDocumentBrowserViewController *)arg1 didPickImportedURLs:(NSArray *)arg2;
- (bool)documentBrowser:(UIDocumentBrowserViewController *)arg1 shouldHandleLocation:(DOCConcreteLocation *)arg2;
- (bool)documentBrowser:(UIDocumentBrowserViewController *)arg1 shouldShowActivityViewControllerForDocumentURLs:(NSArray *)arg2 barButtonItem:(UIBarButtonItem *)arg3 popoverTracker:(id <DOCServicePopoverTrackerProtocol>)arg4;
- (bool)documentBrowser:(UIDocumentBrowserViewController *)arg1 shouldShowActivityViewControllerForDocumentURLs:(NSArray *)arg2 barButtonItem:(UIBarButtonItem *)arg3 popoverTracker:(id <DOCServicePopoverTrackerProtocol>)arg4 sourceIsManaged:(bool)arg5;
- (void)documentManagerWasCancelled:(UIDocumentBrowserViewController *)arg1;
- (void)willDismissDocumentManager:(UIDocumentBrowserViewController *)arg1;

@end

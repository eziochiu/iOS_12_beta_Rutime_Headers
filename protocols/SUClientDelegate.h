/* made by EzioChiu.
 */

@protocol SUClientDelegate <NSObject>

@required

- (bool)client:(SUClient *)arg1 presentModalViewController:(UIViewController *)arg2 animated:(bool)arg3;

@optional

- (bool)client:(SUClient *)arg1 openInternalURL:(NSURL *)arg2;
- (bool)client:(SUClient *)arg1 presentAccountViewController:(UIViewController *)arg2 animated:(bool)arg3;
- (bool)client:(SUClient *)arg1 presentComposeReviewViewController:(UIViewController *)arg2 animated:(bool)arg3;
- (SSDownloadManager *)downloadManagerForClient:(SUClient *)arg1 downloadKinds:(NSArray *)arg2;
- (SSDownloadQueue *)downloadQueueForClient:(SUClient *)arg1 downloadKinds:(NSSet *)arg2;
- (UIViewController *)topViewControllerForClient:(SUClient *)arg1;

@end

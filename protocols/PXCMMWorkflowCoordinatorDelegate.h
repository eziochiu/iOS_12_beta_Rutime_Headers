/* made by EzioChiu.
 */

@protocol PXCMMWorkflowCoordinatorDelegate <NSObject>

@optional

- (void)workflowCoordinator:(PXCMMWorkflowCoordinator *)arg1 didPublishToURL:(NSURL *)arg2;
- (void)workflowCoordinator:(PXCMMWorkflowCoordinator *)arg1 workflowViewController:(UIViewController *)arg2 didFinishWithActivityState:(unsigned long long)arg3;

@end

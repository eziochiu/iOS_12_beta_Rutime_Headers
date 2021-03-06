/* made by EzioChiu.
 */

@protocol SXPreviewViewControllerManagerDelegate <NSObject>

@required

- (bool)shouldStartPreviewForPreviewViewControllerManager:(id <SXPreviewViewControllerManager>)arg1;
- (void)willEndPreviewingForPreviewViewControllerManager:(id <SXPreviewViewControllerManager>)arg1;
- (void)willStartPreviewingForPreviewViewControllerManager:(id <SXPreviewViewControllerManager>)arg1;

@end

/* made by EzioChiu.
 */

@protocol SXPreviewViewControllerManager <UIViewControllerPreviewingDelegate>

@required

- (<SXPreviewViewControllerManagerDelegate> *)delegate;
- (void)setDelegate:(id <SXPreviewViewControllerManagerDelegate>)arg1;

@end

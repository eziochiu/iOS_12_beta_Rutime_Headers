/* made by EzioChiu.
 */

@protocol _PXFeedbackTapToRadarViewControllerDelegate <NSObject>

@required

- (void)didSelectFileRadarButtonWithScreenshotAllowed:(bool)arg1;
- (bool)shouldRequestScreenshotPermission;

@end

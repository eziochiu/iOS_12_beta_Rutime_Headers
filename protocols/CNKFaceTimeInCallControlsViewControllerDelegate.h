/* made by EzioChiu.
 */

@protocol CNKFaceTimeInCallControlsViewControllerDelegate

@required

- (void)inCallControlsViewController:(CNKFaceTimeInCallControlsViewController *)arg1 didTap:(long long)arg2;

@optional

- (void)inCallControlsViewController:(CNKFaceTimeInCallControlsViewController *)arg1 didAdd:(CNContact *)arg2;

@end

/* made by EzioChiu.
 */

@protocol CFXCameraControlsViewControllerDelegate <NSObject>

@required

- (void)cameraControlsViewControllerEffectsButtonWasTapped:(CFXCameraControlsViewController *)arg1;
- (void)cameraControlsViewControllerShutterButtonWasTapped:(CFXCameraControlsViewController *)arg1;
- (void)cameraControlsViewControllerSwitchCameraButtonWasTapped:(CFXCameraControlsViewController *)arg1;

@end

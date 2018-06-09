/* made by EzioChiu.
 */

@protocol _TVRControlViewInternalDelegate <NSObject>

@required

- (void)controlView:(_TVRControlView_Internal *)arg1 generatedButtonEvent:(TVRCButtonEvent *)arg2;
- (void)controlView:(_TVRControlView_Internal *)arg1 generatedGameControllerEvent:(TVRCGameControllerEvent *)arg2;
- (void)controlView:(_TVRControlView_Internal *)arg1 generatedTouchEvent:(TVRCTouchEvent *)arg2;
- (void)controlView:(_TVRControlView_Internal *)arg1 selectedDeviceFromPicker:(TVRCDevice *)arg2;
- (void)controlViewRequestsKeyboardPresentation:(_TVRControlView_Internal *)arg1;

@end

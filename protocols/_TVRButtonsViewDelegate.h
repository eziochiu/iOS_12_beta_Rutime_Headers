/* made by EzioChiu.
 */

@protocol _TVRButtonsViewDelegate <NSObject>

@required

- (void)buttonsView:(_TVRButtonsView *)arg1 generatedbuttonEvent:(TVRCButtonEvent *)arg2;
- (void)buttonsViewRequestedKeyboardPresentation:(_TVRButtonsView *)arg1;

@end

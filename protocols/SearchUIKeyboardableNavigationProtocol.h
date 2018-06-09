/* made by EzioChiu.
 */

@protocol SearchUIKeyboardableNavigationProtocol <NSObject>

@required

- (bool)canSetupKeyboardHandler;
- (bool)navigateKeyboardLeft;
- (bool)navigateKeyboardRight;
- (void)removeKeyboardHandler;
- (void)returnKeyPressed;
- (void)setupKeyboardHandler;

@end

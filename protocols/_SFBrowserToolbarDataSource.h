/* made by EzioChiu.
 */

@protocol _SFBrowserToolbarDataSource <NSObject>

@required

- (double)browserToolbarDismissButtonPadding:(_SFBrowserToolbar *)arg1;
- (struct CGSize { double x1; double x2; })browserToolbarDismissButtonSize:(_SFBrowserToolbar *)arg1;
- (bool)browserToolbarShouldShowOpenInSafariBarButtonItem:(_SFBrowserToolbar *)arg1;

@end

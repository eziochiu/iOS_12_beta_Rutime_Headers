/* made by EzioChiu.
 */

@protocol _SFBrowserKeyCommandMethods <NSObject>

@required

- (void)cancelKeyPressed;
- (void)findKeyPressed;
- (void)navigateBackKeyPressed;
- (void)navigateForwardKeyPressed;
- (void)nextFindResultKeyPressed;
- (void)previousFindResultKeyPressed;
- (void)reloadKeyPressed;
- (void)toggleReaderKeyPressed;

@end

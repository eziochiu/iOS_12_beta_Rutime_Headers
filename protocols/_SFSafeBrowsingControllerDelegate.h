/* made by EzioChiu.
 */

@protocol _SFSafeBrowsingControllerDelegate <NSObject>

@required

- (void)safeBrowsingController:(_SFSafeBrowsingController *)arg1 didIgnoreWarningWithURL:(NSURL *)arg2;
- (void)safeBrowsingControllerClosePage:(_SFSafeBrowsingController *)arg1;
- (void)safeBrowsingControllerDidShowSecurityWarningPage:(_SFSafeBrowsingController *)arg1;
- (NSURL *)safeBrowsingControllerExpectedOrCurrentURL:(_SFSafeBrowsingController *)arg1;
- (void)safeBrowsingControllerGoBack:(_SFSafeBrowsingController *)arg1;

@end

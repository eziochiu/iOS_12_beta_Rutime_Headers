/* made by EzioChiu.
 */

@protocol SXWebViewFactory <NSObject>

@required

- (WKWebView *)createWebViewWithUserContentController:(WKUserContentController *)arg1;

@end

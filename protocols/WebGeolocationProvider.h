/* made by EzioChiu.
 */

@protocol WebGeolocationProvider <NSObject>

@required

- (void)initializeGeolocationForWebView:(WebView *)arg1 listener:(id <WebGeolocationProviderInitializationListener>)arg2;
- (WebGeolocationPosition *)lastPosition;
- (void)registerWebView:(WebView *)arg1;
- (void)setEnableHighAccuracy:(bool)arg1;
- (void)stopTrackingWebView:(WebView *)arg1;
- (void)unregisterWebView:(WebView *)arg1;

@end

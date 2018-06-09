/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFApplicationManifestFetcher : NSObject {
    id /* block */  _completionHandler;
    _WKApplicationManifest * _manifest;
    long long  _state;
    WKWebView * _webView;
}

- (void).cxx_destruct;
- (void)getApplicationManifestWithCompletionHandler:(id /* block */)arg1;
- (id)initWithWebView:(id)arg1;

@end

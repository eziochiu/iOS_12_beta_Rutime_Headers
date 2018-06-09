/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFSafariSharingExtensionController : NSObject {
    <SFSharingExtensionWebProcessController> * _extensionControllerProxy;
    WKWebView * _webView;
}

- (void).cxx_destruct;
- (id)_extensionControllerProxy;
- (void)finalizeJavaScriptForSharingExtension:(id)arg1 arguments:(id)arg2;
- (id)initWithWebView:(id)arg1;
- (void)runJavaScriptForSharingExtension:(id)arg1 javaScript:(id)arg2 extraArguments:(id)arg3 completion:(id /* block */)arg4;

@end

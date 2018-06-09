/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFAppleConnectExtensionPageController : NSObject <_SFAppleConnectExtensionContentScriptMessageReceiver, _SFAppleConnectExtensionPageDelegate> {
    <_SFAppleConnectExtensionMessageReceiver> * _appleConnectExtensionMessageReceiver;
    _WKRemoteObjectInterface * _contentScriptMessageReceiverInterface;
    <_SFAppleConnectExtensionUIDelegate> * _delegate;
    WKWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFAppleConnectExtensionUIDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_appleConnectExtensionMessageReceiver;
- (id)delegate;
- (void)dismissExtensionViewController:(id)arg1;
- (void)dispatchMessageFromContentScript:(id)arg1 userInfo:(id)arg2;
- (void)dispatchMessageToContentScriptWithName:(id)arg1 userInfo:(id)arg2;
- (id)initWithWebView:(id)arg1;
- (void)invalidate;
- (void)presentExtensionViewController:(id)arg1;
- (void)setDelegate:(id)arg1;

@end

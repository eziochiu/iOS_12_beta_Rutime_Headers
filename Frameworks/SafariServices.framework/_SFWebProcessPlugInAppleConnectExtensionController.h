/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFWebProcessPlugInAppleConnectExtensionController : NSObject <_SFAppleConnectExtensionMessageReceiver> {
    <_SFAppleConnectExtensionContentScriptMessageReceiver> * _appleConnectExtensionContentScriptMessageReceiver;
    _WKRemoteObjectInterface * _extensionMessageReceiverInterface;
    WKWebProcessPlugInScriptWorld * _isolatedWorld;
    _SFWebProcessPlugInPageController * _pageController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_appleConnectExtensionContentScriptMessageReceiver;
- (void)dispatchMessageFromContentScript:(id)arg1 userInfo:(id)arg2;
- (void)dispatchMessageToContentScriptWithName:(id)arg1 userInfo:(id)arg2;
- (id)initWithPageController:(id)arg1;
- (void)injectAppleConnectBindingsForFrame:(id)arg1 inScriptWorld:(id)arg2;
- (void)invalidate;

@end

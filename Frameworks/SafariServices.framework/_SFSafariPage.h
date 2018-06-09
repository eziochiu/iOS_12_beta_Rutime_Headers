/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFSafariPage : NSObject {
    _SFAppleConnectExtensionContext * _extensionContext;
}

@property (nonatomic, readonly) _SFAppleConnectExtensionContext *_extensionContext;

- (void).cxx_destruct;
- (id)_extensionContext;
- (id)_initWithExtensionContext:(id)arg1;
- (id)_remoteObjectProxy;
- (void)dismissExtensionUI;
- (void)dispatchMessageToScriptWithName:(id)arg1 userInfo:(id)arg2;
- (void)presentExtensionUI;

@end

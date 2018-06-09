/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFAppleConnectExtensionHostContext : NSExtensionContext <_SFAppleConnectExtensionHostProtocol> {
    <_SFAppleConnectExtensionPageDelegate> * _delegate;
    UIViewController * _remoteViewController;
}

@property (nonatomic) <_SFAppleConnectExtensionPageDelegate> *delegate;
@property (nonatomic, retain) UIViewController *remoteViewController;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)dismissExtensionUI;
- (void)dispatchMessageToContentScriptWithName:(id)arg1 userInfo:(id)arg2;
- (void)presentExtensionUI;
- (id)remoteViewController;
- (void)setDelegate:(id)arg1;
- (void)setRemoteViewController:(id)arg1;

@end

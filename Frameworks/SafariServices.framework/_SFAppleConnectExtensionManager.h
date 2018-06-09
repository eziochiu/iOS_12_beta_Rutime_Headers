/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFAppleConnectExtensionManager : NSObject {
    NSExtension * _appleConnectExtension;
    id  _extensionDiscoveryToken;
    NSArray * _injectedUserScripts;
    WKUserContentController * _userContentController;
}

@property (getter=isAppleConnectExtensionInstalled, nonatomic, readonly) bool appleConnectExtensionInstalled;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_findAppleConnectExtension;
- (void)_loadAppleConnectExtension:(id)arg1;
- (void)_startListeningForExtensionUpdates;
- (void)appleConnectExtensionEnabledPreferenceChanged;
- (void)dispatchMessageToAppleConnectExtension:(id)arg1 fromPageDelegate:(id)arg2 userInfo:(id)arg3;
- (bool)isAppleConnectExtensionInstalled;
- (void)loadAppleConnectExtensionWithUserContentController:(id)arg1;

@end

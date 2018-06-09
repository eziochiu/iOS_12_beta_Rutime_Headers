/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
 */

@interface FLExtensionContext : NSExtensionContext <FLExtensionRemoteInterface> {
    id  _shadowPrincipalObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)_shadowPrincipalObject;
- (id)extensionLogicProvider;
- (void)followUpPerformUpdateWithCompletionHandler:(id /* block */)arg1;
- (id)hostContextWithErrorHandler:(id /* block */)arg1;
- (void)processFollowUpItem:(id)arg1 selectedAction:(id)arg2 completion:(id /* block */)arg3;

@end

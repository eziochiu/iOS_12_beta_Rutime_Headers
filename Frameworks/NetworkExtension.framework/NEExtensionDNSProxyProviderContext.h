/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEExtensionDNSProxyProviderContext : NEExtensionAppProxyProviderContext <NEExtensionDNSProxyProviderProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryVendorProtocol;

- (void)setInitialFlowDivertControlSocket:(id)arg1 extraValidation:(bool)arg2;
- (void)setSystemDNSSettings:(id)arg1;

@end

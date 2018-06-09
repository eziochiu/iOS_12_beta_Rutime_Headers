/* made by EzioChiu
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPBroadcastExtensionHostContext : NSExtensionContext <RPBroadcastExtensionHostProtocol, RPBroadcastExtensionInitProtocol> {
    RPBroadcastHostViewController * _hostViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) RPBroadcastHostViewController *hostViewController;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (oneway void)completeSetupWithBroadcastURL:(id)arg1;
- (id)extensionObjectProxy;
- (id)hostViewController;
- (void)setHostViewController:(id)arg1;
- (oneway void)updateBroadcastHandlerListenerEndpoint:(id /* block */)arg1;

@end

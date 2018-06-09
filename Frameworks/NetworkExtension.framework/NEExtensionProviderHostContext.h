/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEExtensionProviderHostContext : NSExtensionContext <NEExtensionProviderHostProtocol, NEExtensionProviderProtocol> {
    <NEExtensionProviderHostDelegate> * _delegate;
    NSString * _description;
    NEUserNotification * _notification;
    <NEExtensionProviderProtocol> * _vendorContext;
}

@property (readonly, copy) NSString *debugDescription;
@property <NEExtensionProviderHostDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) int pid;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)copyValueForEntitlement:(id)arg1;
- (id)delegate;
- (id)description;
- (void)displayMessage:(id)arg1 message:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)dispose;
- (int)pid;
- (void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2 deviceIdentifier:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setDescription:(id)arg1;
- (void)sleepWithCompletionHandler:(id /* block */)arg1;
- (void)startWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startedWithError:(id)arg1;
- (void)stopWithReason:(int)arg1;
- (id)vendorContext;
- (void)wake;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
 */

@interface FPUIActionRemoteContext : NSExtensionContext <FPUIActionRemoteContextProtocol> {
    <FPUIActionRemoteContextDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FPUIActionRemoteContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)_cancelRequestWithError:(id)arg1;
- (void)_completeRequest;
- (void)_openExtensionURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end

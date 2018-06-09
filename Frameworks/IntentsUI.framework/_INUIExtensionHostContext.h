/* made by EzioChiu
   Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

@interface _INUIExtensionHostContext : NSExtensionContext <_INUIExtensionContextHosting> {
    <INUIExtensionHostContextDelegate> * _extensionHostContextDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <INUIExtensionHostContextDelegate> *extensionHostContextDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)_errorHandlingExtensionContextProxy;
- (id)extensionHostContextDelegate;
- (void)requestHandlingOfIntent:(id)arg1;
- (void)setExtensionContextState:(id)arg1 completion:(id /* block */)arg2;
- (void)setExtensionHostContextDelegate:(id)arg1;

@end

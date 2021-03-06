/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKDiagnosticContext : NSExtensionContext <DKDiagnosticRemoteContext, DKResponder>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)cancelRemoteDiagnosticWithCompletion:(id /* block */)arg1;
- (void)completeWithDiagnosticResult:(id)arg1 completion:(id /* block */)arg2;
- (void)enableVolumeHUD:(bool)arg1;
- (void)getAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)setScreenToBrightness:(float)arg1 animate:(bool)arg2;
- (void)startRemoteDiagnosticWithDiagnosticParameters:(id)arg1 completion:(id /* block */)arg2;

@end

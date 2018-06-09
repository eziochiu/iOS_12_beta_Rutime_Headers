/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXExtensionProvider : CXProvider <CXProviderExtensionVendorContextDelegate, NSExtensionRequestHandling> {
    CXProviderExtensionVendorContext * _extensionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CXProviderExtensionVendorContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)extensionContext;
- (id)hostProtocolDelegate;
- (void)invalidate;
- (void)providerExtensionVendorContext:(id)arg1 handledActionTimeout:(id)arg2;
- (void)providerExtensionVendorContext:(id)arg1 handledAudioSessionActivationStateChangedTo:(bool)arg2;
- (void)providerExtensionVendorContext:(id)arg1 receivedCommittedTransaction:(id)arg2;
- (bool)requiresProxyingAVAudioSessionState;
- (void)setExtensionContext:(id)arg1;

@end

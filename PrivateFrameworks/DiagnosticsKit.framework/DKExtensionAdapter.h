/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKExtensionAdapter : NSObject <DKRequestDelegate> {
    NSObject<OS_dispatch_queue> * _adapterConnectQueue;
    NSObject<OS_dispatch_queue> * _adapterQueue;
    <DKExtensionAttributes> * _extensionAttributes;
    NSMutableDictionary * _extensionToRequestIdentifierLookup;
    NSMutableDictionary * _requestLookup;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *adapterConnectQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *adapterQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <DKExtensionAttributes> *extensionAttributes;
@property (nonatomic, retain) NSMutableDictionary *extensionToRequestIdentifierLookup;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *requestLookup;
@property (readonly) Class superclass;

+ (id)extensionAdapterWithExtensionAttributes:(id)arg1;

- (void).cxx_destruct;
- (void)_attachHandlersToExtension:(id)arg1;
- (void)_didCancelExtensionRequest:(id)arg1 error:(id)arg2;
- (void)_didCompleteExtensionRequest:(id)arg1;
- (void)_didInterruptExtensionRequest:(id)arg1;
- (id)_requestForExtensionRequestIdentifier:(id)arg1;
- (id)adapterConnectQueue;
- (id)adapterQueue;
- (void)beginRequest:(id)arg1 payload:(id)arg2 completion:(id /* block */)arg3;
- (void)cancelAll;
- (id)description;
- (id)extensionAttributes;
- (id)extensionToRequestIdentifierLookup;
- (id)initWithExtensionAttributes:(id)arg1;
- (void)request:(id)arg1 didCompleteWithPayload:(id)arg2 error:(id)arg3;
- (id)requestLookup;
- (void)setAdapterConnectQueue:(id)arg1;
- (void)setAdapterQueue:(id)arg1;
- (void)setExtensionToRequestIdentifierLookup:(id)arg1;
- (void)setRequestLookup:(id)arg1;

@end

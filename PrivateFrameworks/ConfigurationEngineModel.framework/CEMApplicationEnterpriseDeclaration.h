/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMApplicationEnterpriseDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadBundleIdentifier;
    CEMAssetBaseDescriptor * _payloadDescriptor;
    CEMAssetBaseReference * _payloadReference;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadBundleIdentifier;
@property (nonatomic, copy) CEMAssetBaseDescriptor *payloadDescriptor;
@property (nonatomic, copy) CEMAssetBaseReference *payloadReference;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withReference:(id)arg3 withBundleIdentifier:(id)arg4;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadBundleIdentifier;
- (id)payloadDescriptor;
- (id)payloadReference;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadBundleIdentifier:(id)arg1;
- (void)setPayloadDescriptor:(id)arg1;
- (void)setPayloadReference:(id)arg1;

@end

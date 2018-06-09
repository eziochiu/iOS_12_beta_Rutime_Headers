/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMNetworkVPNAppToAppLayerMappingDeclaration_AppLayerVPNMappingItem : CEMPayloadBase {
    NSString * _payloadDesignatedRequirement;
    NSString * _payloadIdentifier;
    NSString * _payloadSigningIdentifier;
    NSString * _payloadVPNUUID;
}

@property (nonatomic, copy) NSString *payloadDesignatedRequirement;
@property (nonatomic, copy) NSString *payloadIdentifier;
@property (nonatomic, copy) NSString *payloadSigningIdentifier;
@property (nonatomic, copy) NSString *payloadVPNUUID;

+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withVPNUUID:(id)arg2 withDesignatedRequirement:(id)arg3 withSigningIdentifier:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadDesignatedRequirement;
- (id)payloadIdentifier;
- (id)payloadSigningIdentifier;
- (id)payloadVPNUUID;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadDesignatedRequirement:(id)arg1;
- (void)setPayloadIdentifier:(id)arg1;
- (void)setPayloadSigningIdentifier:(id)arg1;
- (void)setPayloadVPNUUID:(id)arg1;

@end

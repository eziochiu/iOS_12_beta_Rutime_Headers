/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMNetworkVPNDeclaration_AlwaysOn : CEMPayloadBase {
    NSArray * _payloadTunnelConfigurations;
}

@property (nonatomic, copy) NSArray *payloadTunnelConfigurations;

+ (id)allowedPayloadKeys;
+ (id)buildWithTunnelConfigurations:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadTunnelConfigurations;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadTunnelConfigurations:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMNetworkVPNDeclaration_OnDemandRulesElement : CEMPayloadBase {
    NSString * _payloadAction;
    NSArray * _payloadDNSDomainMatch;
    NSArray * _payloadDNSServerAddressMatch;
    NSString * _payloadURLStringProbe;
}

@property (nonatomic, copy) NSString *payloadAction;
@property (nonatomic, copy) NSArray *payloadDNSDomainMatch;
@property (nonatomic, copy) NSArray *payloadDNSServerAddressMatch;
@property (nonatomic, copy) NSString *payloadURLStringProbe;

+ (id)allowedPayloadKeys;
+ (id)buildWithDNSDomainMatch:(id)arg1 withDNSServerAddressMatch:(id)arg2 withURLStringProbe:(id)arg3 withAction:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadAction;
- (id)payloadDNSDomainMatch;
- (id)payloadDNSServerAddressMatch;
- (id)payloadURLStringProbe;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAction:(id)arg1;
- (void)setPayloadDNSDomainMatch:(id)arg1;
- (void)setPayloadDNSServerAddressMatch:(id)arg1;
- (void)setPayloadURLStringProbe:(id)arg1;

@end

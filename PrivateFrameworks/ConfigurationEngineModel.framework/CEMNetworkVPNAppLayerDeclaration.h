/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMNetworkVPNAppLayerDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadOnDemandMatchAppEnabled;
    NSArray * _payloadSMBDomains;
    NSArray * _payloadSafariDomains;
    NSString * _payloadVPNUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadOnDemandMatchAppEnabled;
@property (nonatomic, copy) NSArray *payloadSMBDomains;
@property (nonatomic, copy) NSArray *payloadSafariDomains;
@property (nonatomic, copy) NSString *payloadVPNUUID;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withVPNUUID:(id)arg2 withSafariDomains:(id)arg3 withOnDemandMatchAppEnabled:(id)arg4 withSMBDomains:(id)arg5;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)multipleAllowed;
- (bool)mustBeSupervised;
- (id)payloadOnDemandMatchAppEnabled;
- (id)payloadSMBDomains;
- (id)payloadSafariDomains;
- (id)payloadVPNUUID;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadOnDemandMatchAppEnabled:(id)arg1;
- (void)setPayloadSMBDomains:(id)arg1;
- (void)setPayloadSafariDomains:(id)arg1;
- (void)setPayloadVPNUUID:(id)arg1;

@end

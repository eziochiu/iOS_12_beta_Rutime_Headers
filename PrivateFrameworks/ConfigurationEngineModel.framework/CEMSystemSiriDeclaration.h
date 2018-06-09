/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMSystemSiriDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowAssistant;
    NSNumber * _payloadAllowAssistantUserGeneratedContent;
    NSNumber * _payloadForceAssistantProfanityFilter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowAssistant;
@property (nonatomic, copy) NSNumber *payloadAllowAssistantUserGeneratedContent;
@property (nonatomic, copy) NSNumber *payloadForceAssistantProfanityFilter;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withAllowAssistant:(id)arg2 withAllowAssistantUserGeneratedContent:(id)arg3 withForceAssistantProfanityFilter:(id)arg4;
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
- (id)payloadAllowAssistant;
- (id)payloadAllowAssistantUserGeneratedContent;
- (id)payloadForceAssistantProfanityFilter;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowAssistant:(id)arg1;
- (void)setPayloadAllowAssistantUserGeneratedContent:(id)arg1;
- (void)setPayloadForceAssistantProfanityFilter:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMSecuritySingleSignOnDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    CEMSecuritySingleSignOnDeclaration_Kerberos * _payloadKerberos;
    NSString * _payloadName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CEMSecuritySingleSignOnDeclaration_Kerberos *payloadKerberos;
@property (nonatomic, copy) NSString *payloadName;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withName:(id)arg2 withKerberos:(id)arg3;
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
- (id)payloadKerberos;
- (id)payloadName;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadKerberos:(id)arg1;
- (void)setPayloadName:(id)arg1;

@end

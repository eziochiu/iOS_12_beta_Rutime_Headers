/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMNetworkVPNDeclaration_IPSec : CEMPayloadBase {
    NSString * _payloadAuthenticationMethod;
    NSString * _payloadLocalIdentifier;
    NSString * _payloadLocalIdentifierType;
    NSNumber * _payloadOnDemandEnabled;
    NSArray * _payloadOnDemandMatchDomainsAlways;
    NSArray * _payloadOnDemandMatchDomainsNever;
    NSArray * _payloadOnDemandMatchDomainsOnRetry;
    NSArray * _payloadOnDemandRules;
    NSString * _payloadPayloadCertificateUUID;
    NSNumber * _payloadPromptForVPNPIN;
    NSString * _payloadRemoteAddress;
    NSData * _payloadSharedSecret;
    NSNumber * _payloadXAuthEnabled;
    NSString * _payloadXAuthName;
    NSString * _payloadXAuthPassword;
    NSString * _payloadXAuthPasswordEncryption;
}

@property (nonatomic, copy) NSString *payloadAuthenticationMethod;
@property (nonatomic, copy) NSString *payloadLocalIdentifier;
@property (nonatomic, copy) NSString *payloadLocalIdentifierType;
@property (nonatomic, copy) NSNumber *payloadOnDemandEnabled;
@property (nonatomic, copy) NSArray *payloadOnDemandMatchDomainsAlways;
@property (nonatomic, copy) NSArray *payloadOnDemandMatchDomainsNever;
@property (nonatomic, copy) NSArray *payloadOnDemandMatchDomainsOnRetry;
@property (nonatomic, copy) NSArray *payloadOnDemandRules;
@property (nonatomic, copy) NSString *payloadPayloadCertificateUUID;
@property (nonatomic, copy) NSNumber *payloadPromptForVPNPIN;
@property (nonatomic, copy) NSString *payloadRemoteAddress;
@property (nonatomic, copy) NSData *payloadSharedSecret;
@property (nonatomic, copy) NSNumber *payloadXAuthEnabled;
@property (nonatomic, copy) NSString *payloadXAuthName;
@property (nonatomic, copy) NSString *payloadXAuthPassword;
@property (nonatomic, copy) NSString *payloadXAuthPasswordEncryption;

+ (id)allowedPayloadKeys;
+ (id)buildWithRemoteAddress:(id)arg1 withAuthenticationMethod:(id)arg2 withXAuthName:(id)arg3 withXAuthPassword:(id)arg4 withXAuthEnabled:(id)arg5 withXAuthPasswordEncryption:(id)arg6 withLocalIdentifier:(id)arg7 withLocalIdentifierType:(id)arg8 withSharedSecret:(id)arg9 withPayloadCertificateUUID:(id)arg10 withPromptForVPNPIN:(id)arg11 withOnDemandEnabled:(id)arg12 withOnDemandMatchDomainsAlways:(id)arg13 withOnDemandMatchDomainsNever:(id)arg14 withOnDemandMatchDomainsOnRetry:(id)arg15 withOnDemandRules:(id)arg16;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadAuthenticationMethod;
- (id)payloadLocalIdentifier;
- (id)payloadLocalIdentifierType;
- (id)payloadOnDemandEnabled;
- (id)payloadOnDemandMatchDomainsAlways;
- (id)payloadOnDemandMatchDomainsNever;
- (id)payloadOnDemandMatchDomainsOnRetry;
- (id)payloadOnDemandRules;
- (id)payloadPayloadCertificateUUID;
- (id)payloadPromptForVPNPIN;
- (id)payloadRemoteAddress;
- (id)payloadSharedSecret;
- (id)payloadXAuthEnabled;
- (id)payloadXAuthName;
- (id)payloadXAuthPassword;
- (id)payloadXAuthPasswordEncryption;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAuthenticationMethod:(id)arg1;
- (void)setPayloadLocalIdentifier:(id)arg1;
- (void)setPayloadLocalIdentifierType:(id)arg1;
- (void)setPayloadOnDemandEnabled:(id)arg1;
- (void)setPayloadOnDemandMatchDomainsAlways:(id)arg1;
- (void)setPayloadOnDemandMatchDomainsNever:(id)arg1;
- (void)setPayloadOnDemandMatchDomainsOnRetry:(id)arg1;
- (void)setPayloadOnDemandRules:(id)arg1;
- (void)setPayloadPayloadCertificateUUID:(id)arg1;
- (void)setPayloadPromptForVPNPIN:(id)arg1;
- (void)setPayloadRemoteAddress:(id)arg1;
- (void)setPayloadSharedSecret:(id)arg1;
- (void)setPayloadXAuthEnabled:(id)arg1;
- (void)setPayloadXAuthName:(id)arg1;
- (void)setPayloadXAuthPassword:(id)arg1;
- (void)setPayloadXAuthPasswordEncryption:(id)arg1;

@end

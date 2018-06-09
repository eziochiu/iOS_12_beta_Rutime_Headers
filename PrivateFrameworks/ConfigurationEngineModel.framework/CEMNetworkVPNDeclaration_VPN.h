/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMNetworkVPNDeclaration_VPN : CEMPayloadBase {
    NSString * _payloadAuthName;
    NSString * _payloadAuthPassword;
    NSString * _payloadAuthenticationMethod;
    NSNumber * _payloadDisconnectOnIdle;
    NSNumber * _payloadDisconnectOnIdleTimer;
    NSNumber * _payloadOnDemandEnabled;
    NSArray * _payloadOnDemandMatchDomainsAlways;
    NSArray * _payloadOnDemandMatchDomainsNever;
    NSArray * _payloadOnDemandMatchDomainsOnRetry;
    NSArray * _payloadOnDemandRules;
    NSString * _payloadPayloadCertificateUUID;
    NSString * _payloadRemoteAddress;
}

@property (nonatomic, copy) NSString *payloadAuthName;
@property (nonatomic, copy) NSString *payloadAuthPassword;
@property (nonatomic, copy) NSString *payloadAuthenticationMethod;
@property (nonatomic, copy) NSNumber *payloadDisconnectOnIdle;
@property (nonatomic, copy) NSNumber *payloadDisconnectOnIdleTimer;
@property (nonatomic, copy) NSNumber *payloadOnDemandEnabled;
@property (nonatomic, copy) NSArray *payloadOnDemandMatchDomainsAlways;
@property (nonatomic, copy) NSArray *payloadOnDemandMatchDomainsNever;
@property (nonatomic, copy) NSArray *payloadOnDemandMatchDomainsOnRetry;
@property (nonatomic, copy) NSArray *payloadOnDemandRules;
@property (nonatomic, copy) NSString *payloadPayloadCertificateUUID;
@property (nonatomic, copy) NSString *payloadRemoteAddress;

+ (id)allowedPayloadKeys;
+ (id)buildWithAuthName:(id)arg1 withAuthPassword:(id)arg2 withAuthenticationMethod:(id)arg3 withPayloadCertificateUUID:(id)arg4 withOnDemandEnabled:(id)arg5 withOnDemandMatchDomainsAlways:(id)arg6 withOnDemandMatchDomainsNever:(id)arg7 withOnDemandMatchDomainsOnRetry:(id)arg8 withOnDemandRules:(id)arg9 withDisconnectOnIdle:(id)arg10 withDisconnectOnIdleTimer:(id)arg11 withRemoteAddress:(id)arg12;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadAuthName;
- (id)payloadAuthPassword;
- (id)payloadAuthenticationMethod;
- (id)payloadDisconnectOnIdle;
- (id)payloadDisconnectOnIdleTimer;
- (id)payloadOnDemandEnabled;
- (id)payloadOnDemandMatchDomainsAlways;
- (id)payloadOnDemandMatchDomainsNever;
- (id)payloadOnDemandMatchDomainsOnRetry;
- (id)payloadOnDemandRules;
- (id)payloadPayloadCertificateUUID;
- (id)payloadRemoteAddress;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAuthName:(id)arg1;
- (void)setPayloadAuthPassword:(id)arg1;
- (void)setPayloadAuthenticationMethod:(id)arg1;
- (void)setPayloadDisconnectOnIdle:(id)arg1;
- (void)setPayloadDisconnectOnIdleTimer:(id)arg1;
- (void)setPayloadOnDemandEnabled:(id)arg1;
- (void)setPayloadOnDemandMatchDomainsAlways:(id)arg1;
- (void)setPayloadOnDemandMatchDomainsNever:(id)arg1;
- (void)setPayloadOnDemandMatchDomainsOnRetry:(id)arg1;
- (void)setPayloadOnDemandRules:(id)arg1;
- (void)setPayloadPayloadCertificateUUID:(id)arg1;
- (void)setPayloadRemoteAddress:(id)arg1;

@end
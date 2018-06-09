/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMApplicationInstallDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadApplication;
    CEMAnyPayload * _payloadConfiguration;
    NSNumber * _payloadInstallWhenActivated;
    NSNumber * _payloadManageData;
    NSNumber * _payloadMandatory;
    NSNumber * _payloadPreventDataBackup;
    NSNumber * _payloadRemoveWhenDeactivated;
    NSString * _payloadVPNUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadApplication;
@property (nonatomic, copy) CEMAnyPayload *payloadConfiguration;
@property (nonatomic, copy) NSNumber *payloadInstallWhenActivated;
@property (nonatomic, copy) NSNumber *payloadManageData;
@property (nonatomic, copy) NSNumber *payloadMandatory;
@property (nonatomic, copy) NSNumber *payloadPreventDataBackup;
@property (nonatomic, copy) NSNumber *payloadRemoveWhenDeactivated;
@property (nonatomic, copy) NSString *payloadVPNUUID;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withApplication:(id)arg2 withMandatory:(id)arg3 withInstallWhenActivated:(id)arg4 withRemoveWhenDeactivated:(id)arg5 withManageData:(id)arg6 withVPNUUID:(id)arg7 withPreventDataBackup:(id)arg8 withConfiguration:(id)arg9;
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
- (id)payloadApplication;
- (id)payloadConfiguration;
- (id)payloadInstallWhenActivated;
- (id)payloadManageData;
- (id)payloadMandatory;
- (id)payloadPreventDataBackup;
- (id)payloadRemoveWhenDeactivated;
- (id)payloadVPNUUID;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadApplication:(id)arg1;
- (void)setPayloadConfiguration:(id)arg1;
- (void)setPayloadInstallWhenActivated:(id)arg1;
- (void)setPayloadManageData:(id)arg1;
- (void)setPayloadMandatory:(id)arg1;
- (void)setPayloadPreventDataBackup:(id)arg1;
- (void)setPayloadRemoveWhenDeactivated:(id)arg1;
- (void)setPayloadVPNUUID:(id)arg1;

@end

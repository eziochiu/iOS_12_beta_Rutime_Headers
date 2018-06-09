/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMApplicationSettingsManagedDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowManagedAppsCloudSync;
    NSNumber * _payloadAllowOpenFromManagedToUnmanaged;
    NSNumber * _payloadAllowOpenFromUnmanagedToManaged;
    NSNumber * _payloadForceAirDropUnmanaged;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowManagedAppsCloudSync;
@property (nonatomic, copy) NSNumber *payloadAllowOpenFromManagedToUnmanaged;
@property (nonatomic, copy) NSNumber *payloadAllowOpenFromUnmanagedToManaged;
@property (nonatomic, copy) NSNumber *payloadForceAirDropUnmanaged;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withAllowOpenFromManagedToUnmanaged:(id)arg2 withAllowOpenFromUnmanagedToManaged:(id)arg3 withForceAirDropUnmanaged:(id)arg4 withAllowManagedAppsCloudSync:(id)arg5;
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
- (id)payloadAllowManagedAppsCloudSync;
- (id)payloadAllowOpenFromManagedToUnmanaged;
- (id)payloadAllowOpenFromUnmanagedToManaged;
- (id)payloadForceAirDropUnmanaged;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowManagedAppsCloudSync:(id)arg1;
- (void)setPayloadAllowOpenFromManagedToUnmanaged:(id)arg1;
- (void)setPayloadAllowOpenFromUnmanagedToManaged:(id)arg1;
- (void)setPayloadForceAirDropUnmanaged:(id)arg1;

@end

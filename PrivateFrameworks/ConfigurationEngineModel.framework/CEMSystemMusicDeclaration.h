/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMSystemMusicDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowMusicArtistActivity;
    NSNumber * _payloadAllowMusicService;
    NSNumber * _payloadAllowRadioService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowMusicArtistActivity;
@property (nonatomic, copy) NSNumber *payloadAllowMusicService;
@property (nonatomic, copy) NSNumber *payloadAllowRadioService;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withAllowMusicService:(id)arg2 withAllowRadioService:(id)arg3 withAllowMusicArtistActivity:(id)arg4;
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
- (id)payloadAllowMusicArtistActivity;
- (id)payloadAllowMusicService;
- (id)payloadAllowRadioService;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowMusicArtistActivity:(id)arg1;
- (void)setPayloadAllowMusicService:(id)arg1;
- (void)setPayloadAllowRadioService:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMLegacyRestrictionsAppsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowChat;
    NSNumber * _payloadAllowNews;
    NSNumber * _payloadAllowPodcasts;
    NSNumber * _payloadAllowSafari;
    NSNumber * _payloadAllowVideoConferencing;
    NSNumber * _payloadAllowiTunes;
    NSArray * _payloadBlacklistedAppBundleIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowChat;
@property (nonatomic, copy) NSNumber *payloadAllowNews;
@property (nonatomic, copy) NSNumber *payloadAllowPodcasts;
@property (nonatomic, copy) NSNumber *payloadAllowSafari;
@property (nonatomic, copy) NSNumber *payloadAllowVideoConferencing;
@property (nonatomic, copy) NSNumber *payloadAllowiTunes;
@property (nonatomic, copy) NSArray *payloadBlacklistedAppBundleIDs;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withAllowChat:(id)arg2 withAllowiTunes:(id)arg3 withAllowNews:(id)arg4 withAllowPodcasts:(id)arg5 withAllowSafari:(id)arg6 withAllowVideoConferencing:(id)arg7 withBlacklistedAppBundleIDs:(id)arg8;
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
- (id)payloadAllowChat;
- (id)payloadAllowNews;
- (id)payloadAllowPodcasts;
- (id)payloadAllowSafari;
- (id)payloadAllowVideoConferencing;
- (id)payloadAllowiTunes;
- (id)payloadBlacklistedAppBundleIDs;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowChat:(id)arg1;
- (void)setPayloadAllowNews:(id)arg1;
- (void)setPayloadAllowPodcasts:(id)arg1;
- (void)setPayloadAllowSafari:(id)arg1;
- (void)setPayloadAllowVideoConferencing:(id)arg1;
- (void)setPayloadAllowiTunes:(id)arg1;
- (void)setPayloadBlacklistedAppBundleIDs:(id)arg1;

@end

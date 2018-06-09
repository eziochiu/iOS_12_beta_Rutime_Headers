/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMNetworkContentCachingDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowPersonalCaching;
    NSNumber * _payloadAllowSharedCaching;
    NSNumber * _payloadAutoActivation;
    NSNumber * _payloadCacheLimit;
    NSString * _payloadDataPath;
    NSNumber * _payloadDenyActivation;
    NSNumber * _payloadDenyTetheredCaching;
    NSArray * _payloadListenRanges;
    NSNumber * _payloadListenRangesOnly;
    NSNumber * _payloadListenWithPeersAndParents;
    NSNumber * _payloadLocalSubnetsOnly;
    NSNumber * _payloadLogClientIdentity;
    NSString * _payloadParentSelectionPolicy;
    NSArray * _payloadParents;
    NSArray * _payloadPeerFilterRanges;
    NSArray * _payloadPeerListenRanges;
    NSNumber * _payloadPeerLocalSubnetsOnly;
    NSNumber * _payloadPort;
    NSArray * _payloadPublicRanges;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowPersonalCaching;
@property (nonatomic, copy) NSNumber *payloadAllowSharedCaching;
@property (nonatomic, copy) NSNumber *payloadAutoActivation;
@property (nonatomic, copy) NSNumber *payloadCacheLimit;
@property (nonatomic, copy) NSString *payloadDataPath;
@property (nonatomic, copy) NSNumber *payloadDenyActivation;
@property (nonatomic, copy) NSNumber *payloadDenyTetheredCaching;
@property (nonatomic, copy) NSArray *payloadListenRanges;
@property (nonatomic, copy) NSNumber *payloadListenRangesOnly;
@property (nonatomic, copy) NSNumber *payloadListenWithPeersAndParents;
@property (nonatomic, copy) NSNumber *payloadLocalSubnetsOnly;
@property (nonatomic, copy) NSNumber *payloadLogClientIdentity;
@property (nonatomic, copy) NSString *payloadParentSelectionPolicy;
@property (nonatomic, copy) NSArray *payloadParents;
@property (nonatomic, copy) NSArray *payloadPeerFilterRanges;
@property (nonatomic, copy) NSArray *payloadPeerListenRanges;
@property (nonatomic, copy) NSNumber *payloadPeerLocalSubnetsOnly;
@property (nonatomic, copy) NSNumber *payloadPort;
@property (nonatomic, copy) NSArray *payloadPublicRanges;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withAllowPersonalCaching:(id)arg2 withAllowSharedCaching:(id)arg3 withAutoActivation:(id)arg4 withCacheLimit:(id)arg5 withDataPath:(id)arg6 withDenyActivation:(id)arg7 withDenyTetheredCaching:(id)arg8 withListenRanges:(id)arg9 withListenRangesOnly:(id)arg10 withListenWithPeersAndParents:(id)arg11 withLocalSubnetsOnly:(id)arg12 withLogClientIdentity:(id)arg13 withParents:(id)arg14 withParentSelectionPolicy:(id)arg15 withPeerFilterRanges:(id)arg16 withPeerListenRanges:(id)arg17 withPeerLocalSubnetsOnly:(id)arg18 withPort:(id)arg19 withPublicRanges:(id)arg20;
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
- (id)payloadAllowPersonalCaching;
- (id)payloadAllowSharedCaching;
- (id)payloadAutoActivation;
- (id)payloadCacheLimit;
- (id)payloadDataPath;
- (id)payloadDenyActivation;
- (id)payloadDenyTetheredCaching;
- (id)payloadListenRanges;
- (id)payloadListenRangesOnly;
- (id)payloadListenWithPeersAndParents;
- (id)payloadLocalSubnetsOnly;
- (id)payloadLogClientIdentity;
- (id)payloadParentSelectionPolicy;
- (id)payloadParents;
- (id)payloadPeerFilterRanges;
- (id)payloadPeerListenRanges;
- (id)payloadPeerLocalSubnetsOnly;
- (id)payloadPort;
- (id)payloadPublicRanges;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowPersonalCaching:(id)arg1;
- (void)setPayloadAllowSharedCaching:(id)arg1;
- (void)setPayloadAutoActivation:(id)arg1;
- (void)setPayloadCacheLimit:(id)arg1;
- (void)setPayloadDataPath:(id)arg1;
- (void)setPayloadDenyActivation:(id)arg1;
- (void)setPayloadDenyTetheredCaching:(id)arg1;
- (void)setPayloadListenRanges:(id)arg1;
- (void)setPayloadListenRangesOnly:(id)arg1;
- (void)setPayloadListenWithPeersAndParents:(id)arg1;
- (void)setPayloadLocalSubnetsOnly:(id)arg1;
- (void)setPayloadLogClientIdentity:(id)arg1;
- (void)setPayloadParentSelectionPolicy:(id)arg1;
- (void)setPayloadParents:(id)arg1;
- (void)setPayloadPeerFilterRanges:(id)arg1;
- (void)setPayloadPeerListenRanges:(id)arg1;
- (void)setPayloadPeerLocalSubnetsOnly:(id)arg1;
- (void)setPayloadPort:(id)arg1;
- (void)setPayloadPublicRanges:(id)arg1;

@end

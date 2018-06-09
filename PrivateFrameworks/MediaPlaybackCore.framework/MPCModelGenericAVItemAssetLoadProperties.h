/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCModelGenericAVItemAssetLoadProperties : NSObject {
    unsigned long long  _accountID;
    bool  _allowsHLSContent;
    <MPCModelPlaybackAssetCacheProviding> * _assetCacheProvider;
    NSString * _assetSourceStorefrontID;
    unsigned long long  _delegatedAccountID;
    MPModelFileAsset * _fileAsset;
    MPModelGenericObject * _genericObject;
    MPModelHomeSharingAsset * _homeSharingAsset;
    NSString * _householdID;
    MPIdentifierSet * _itemIdentifiers;
    bool  _prefersHighQualityContent;
    bool  _prefersVideoContent;
    bool  _radioPlayback;
    MPModelStoreAsset * _storeAsset;
    NSString * _storefrontID;
}

@property (nonatomic) unsigned long long accountID;
@property (nonatomic) bool allowsHLSContent;
@property (nonatomic, retain) <MPCModelPlaybackAssetCacheProviding> *assetCacheProvider;
@property (nonatomic, copy) NSString *assetSourceStorefrontID;
@property (nonatomic) unsigned long long delegatedAccountID;
@property (nonatomic, retain) MPModelFileAsset *fileAsset;
@property (nonatomic, retain) MPModelGenericObject *genericObject;
@property (nonatomic, retain) MPModelHomeSharingAsset *homeSharingAsset;
@property (nonatomic, copy) NSString *householdID;
@property (nonatomic, retain) MPIdentifierSet *itemIdentifiers;
@property (nonatomic) bool prefersHighQualityContent;
@property (nonatomic) bool prefersVideoContent;
@property (getter=isRadioPlayback, nonatomic) bool radioPlayback;
@property (nonatomic, retain) MPModelStoreAsset *storeAsset;
@property (nonatomic, copy) NSString *storefrontID;

- (void).cxx_destruct;
- (unsigned long long)accountID;
- (bool)allowsHLSContent;
- (id)assetCacheProvider;
- (id)assetSourceStorefrontID;
- (unsigned long long)delegatedAccountID;
- (id)fileAsset;
- (id)genericObject;
- (id)homeSharingAsset;
- (id)householdID;
- (bool)isRadioPlayback;
- (id)itemIdentifiers;
- (bool)prefersHighQualityContent;
- (bool)prefersVideoContent;
- (void)setAccountID:(unsigned long long)arg1;
- (void)setAllowsHLSContent:(bool)arg1;
- (void)setAssetCacheProvider:(id)arg1;
- (void)setAssetSourceStorefrontID:(id)arg1;
- (void)setDelegatedAccountID:(unsigned long long)arg1;
- (void)setFileAsset:(id)arg1;
- (void)setGenericObject:(id)arg1;
- (void)setHomeSharingAsset:(id)arg1;
- (void)setHouseholdID:(id)arg1;
- (void)setItemIdentifiers:(id)arg1;
- (void)setPrefersHighQualityContent:(bool)arg1;
- (void)setPrefersVideoContent:(bool)arg1;
- (void)setRadioPlayback:(bool)arg1;
- (void)setStoreAsset:(id)arg1;
- (void)setStorefrontID:(id)arg1;
- (id)storeAsset;
- (id)storefrontID;

@end

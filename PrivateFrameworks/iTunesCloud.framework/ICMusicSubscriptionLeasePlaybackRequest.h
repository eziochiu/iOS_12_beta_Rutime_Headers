/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMusicSubscriptionLeasePlaybackRequest : NSObject <NSCopying> {
    NSString * _assetSourceStorefrontID;
    NSString * _cloudUniversalLibraryID;
    ICStoreRequestContext * _requestContext;
    bool  _shouldPreventLeaseAcquisition;
    bool  _shouldRequireLeaseAcquisition;
    unsigned long long  _storeCloudID;
    long long  _storePurchasedAdamID;
    long long  _storeSubscriptionAdamID;
}

@property (nonatomic, copy) NSString *assetSourceStorefrontID;
@property (nonatomic, copy) NSString *cloudUniversalLibraryID;
@property (nonatomic, readonly, copy) ICStoreRequestContext *requestContext;
@property (nonatomic) bool shouldPreventLeaseAcquisition;
@property (nonatomic) bool shouldRequireLeaseAcquisition;
@property (nonatomic) unsigned long long storeCloudID;
@property (nonatomic) long long storePurchasedAdamID;
@property (nonatomic) long long storeSubscriptionAdamID;

- (void).cxx_destruct;
- (id)assetSourceStorefrontID;
- (id)cloudUniversalLibraryID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRequestContext:(id)arg1;
- (id)requestContext;
- (void)setAssetSourceStorefrontID:(id)arg1;
- (void)setCloudUniversalLibraryID:(id)arg1;
- (void)setShouldPreventLeaseAcquisition:(bool)arg1;
- (void)setShouldRequireLeaseAcquisition:(bool)arg1;
- (void)setStoreCloudID:(unsigned long long)arg1;
- (void)setStorePurchasedAdamID:(long long)arg1;
- (void)setStoreSubscriptionAdamID:(long long)arg1;
- (bool)shouldPreventLeaseAcquisition;
- (bool)shouldRequireLeaseAcquisition;
- (unsigned long long)storeCloudID;
- (long long)storePurchasedAdamID;
- (long long)storeSubscriptionAdamID;

@end
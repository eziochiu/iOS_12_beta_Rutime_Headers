/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreAssetInfoPlaybackCacheRequest : NSObject <NSCopying> {
    unsigned long long  _accountID;
    NSString * _cloudUniversalLibraryID;
    unsigned long long  _delegatedAccountID;
    NSString * _redownloadParameters;
    long long  _requestType;
    unsigned long long  _storeCloudID;
    long long  _storePurchasedAdamID;
    long long  _storeRadioAdamID;
    long long  _storeSubscriptionAdamID;
}

@property (nonatomic) unsigned long long accountID;
@property (nonatomic, copy) NSString *cloudUniversalLibraryID;
@property (nonatomic) unsigned long long delegatedAccountID;
@property (nonatomic, copy) NSString *redownloadParameters;
@property (nonatomic) long long requestType;
@property (nonatomic) unsigned long long storeCloudID;
@property (nonatomic) long long storePurchasedAdamID;
@property (nonatomic) long long storeRadioAdamID;
@property (nonatomic) long long storeSubscriptionAdamID;

- (void).cxx_destruct;
- (unsigned long long)accountID;
- (id)cloudUniversalLibraryID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)delegatedAccountID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)redownloadParameters;
- (long long)requestType;
- (void)setAccountID:(unsigned long long)arg1;
- (void)setCloudUniversalLibraryID:(id)arg1;
- (void)setDelegatedAccountID:(unsigned long long)arg1;
- (void)setRedownloadParameters:(id)arg1;
- (void)setRequestType:(long long)arg1;
- (void)setStoreCloudID:(unsigned long long)arg1;
- (void)setStorePurchasedAdamID:(long long)arg1;
- (void)setStoreRadioAdamID:(long long)arg1;
- (void)setStoreSubscriptionAdamID:(long long)arg1;
- (unsigned long long)storeCloudID;
- (long long)storePurchasedAdamID;
- (long long)storeRadioAdamID;
- (long long)storeSubscriptionAdamID;

@end

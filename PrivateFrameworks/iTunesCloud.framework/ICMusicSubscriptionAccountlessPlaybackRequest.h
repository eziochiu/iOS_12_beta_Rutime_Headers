/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMusicSubscriptionAccountlessPlaybackRequest : NSObject {
    NSString * _assetSourceStorefrontID;
    long long  _qualityOfService;
    ICStoreRequestContext * _requestContext;
    long long  _storeSubscriptionAdamID;
}

@property (nonatomic, copy) NSString *assetSourceStorefrontID;
@property (nonatomic) long long qualityOfService;
@property (nonatomic, readonly, copy) ICStoreRequestContext *requestContext;
@property (nonatomic, readonly) long long storeSubscriptionAdamID;

- (void).cxx_destruct;
- (id)assetSourceStorefrontID;
- (id)initWithRequestContext:(id)arg1 storeSubscriptionAdamID:(long long)arg2;
- (id)performWithResponseHandler:(id /* block */)arg1;
- (long long)qualityOfService;
- (id)requestContext;
- (void)setAssetSourceStorefrontID:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (long long)storeSubscriptionAdamID;

@end

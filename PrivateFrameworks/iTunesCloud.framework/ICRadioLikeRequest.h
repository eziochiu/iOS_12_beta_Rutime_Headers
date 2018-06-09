/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICRadioLikeRequest : NSObject <NSCopying> {
    long long  _likeState;
    long long  _qualityOfService;
    ICStoreRequestContext * _requestContext;
    NSString * _stationHash;
    long long  _stationID;
    NSString * _stationStringID;
    long long  _storeAdamID;
}

@property (nonatomic) long long likeState;
@property (nonatomic) long long qualityOfService;
@property (nonatomic, copy) ICStoreRequestContext *requestContext;
@property (nonatomic, copy) NSString *stationHash;
@property (nonatomic) long long stationID;
@property (nonatomic, copy) NSString *stationStringID;
@property (nonatomic) long long storeAdamID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRequestContext:(id)arg1;
- (long long)likeState;
- (void)performWithResponseHandler:(id /* block */)arg1;
- (long long)qualityOfService;
- (id)requestContext;
- (void)setLikeState:(long long)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setStationHash:(id)arg1;
- (void)setStationID:(long long)arg1;
- (void)setStationStringID:(id)arg1;
- (void)setStoreAdamID:(long long)arg1;
- (id)stationHash;
- (long long)stationID;
- (id)stationStringID;
- (long long)storeAdamID;

@end

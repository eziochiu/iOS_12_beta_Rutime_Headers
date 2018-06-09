/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICRadioFetchMetadataRequest : NSObject <NSCopying> {
    long long  _qualityOfService;
    NSArray * _storeAdamIDs;
    ICStoreRequestContext * _storeRequestContext;
    NSData * _timedMetadataData;
}

@property (nonatomic) long long qualityOfService;
@property (nonatomic, copy) NSArray *storeAdamIDs;
@property (nonatomic, copy) ICStoreRequestContext *storeRequestContext;
@property (nonatomic, copy) NSData *timedMetadataData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)performWithResponseHandler:(id /* block */)arg1;
- (long long)qualityOfService;
- (void)setQualityOfService:(long long)arg1;
- (void)setStoreAdamIDs:(id)arg1;
- (void)setStoreRequestContext:(id)arg1;
- (void)setTimedMetadataData:(id)arg1;
- (id)storeAdamIDs;
- (id)storeRequestContext;
- (id)timedMetadataData;

@end

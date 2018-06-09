/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICSecureKeyDeliveryRequest : NSObject <NSCopying> {
    bool  _ITunesStoreRequest;
    NSURL * _certificateURL;
    NSString * _contentURI;
    NSURL * _keyServerURL;
    long long  _leaseActionType;
    long long  _qualityOfService;
    long long  _rentalID;
    ICRequestContext * _requestContext;
    id /* block */  _serverPlaybackContextDataCreationHandler;
    bool  _shouldIncludeDeviceGUID;
    bool  _skippedRentalCheckout;
}

@property (getter=isITunesStoreRequest, nonatomic) bool ITunesStoreRequest;
@property (nonatomic, copy) NSURL *certificateURL;
@property (nonatomic, copy) NSString *contentURI;
@property (nonatomic, copy) NSURL *keyServerURL;
@property (nonatomic) long long leaseActionType;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) long long rentalID;
@property (nonatomic, copy) ICRequestContext *requestContext;
@property (nonatomic, copy) id /* block */ serverPlaybackContextDataCreationHandler;
@property (nonatomic) bool shouldIncludeDeviceGUID;
@property (nonatomic) bool skippedRentalCheckout;

- (void).cxx_destruct;
- (id)certificateURL;
- (void)configureUsingAssetResourceLoadingRequest:(id)arg1;
- (id)contentURI;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)isITunesStoreRequest;
- (id)keyServerURL;
- (long long)leaseActionType;
- (void)performWithResponseHandler:(id /* block */)arg1;
- (long long)qualityOfService;
- (long long)rentalID;
- (id)requestContext;
- (id /* block */)serverPlaybackContextDataCreationHandler;
- (void)setCertificateURL:(id)arg1;
- (void)setContentURI:(id)arg1;
- (void)setITunesStoreRequest:(bool)arg1;
- (void)setKeyServerURL:(id)arg1;
- (void)setLeaseActionType:(long long)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setRentalID:(long long)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setServerPlaybackContextDataCreationHandler:(id /* block */)arg1;
- (void)setShouldIncludeDeviceGUID:(bool)arg1;
- (void)setSkippedRentalCheckout:(bool)arg1;
- (bool)shouldIncludeDeviceGUID;
- (bool)skippedRentalCheckout;

@end

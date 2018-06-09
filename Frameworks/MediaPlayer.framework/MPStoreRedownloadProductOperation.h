/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreRedownloadProductOperation : NSOperation {
    SSVLoadURLOperation * _URLOperation;
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSString * _buyParameters;
    unsigned long long  _endpointType;
    MPStoreRedownloadProductResponse * _redownloadProductResponse;
    NSString * _requestingBundleIdentifier;
    NSString * _requestingBundleVersion;
    NSError * _responseError;
    bool  _shouldUseStreamingRedownload;
    bool  _streamingRental;
}

@property (nonatomic, readonly, copy) NSString *buyParameters;
@property (nonatomic, readonly) unsigned long long endpointType;
@property (nonatomic, readonly) MPStoreRedownloadProductResponse *redownloadProductResponse;
@property (nonatomic, copy) NSString *requestingBundleIdentifier;
@property (nonatomic, copy) NSString *requestingBundleVersion;
@property (nonatomic, readonly, copy) NSError *responseError;
@property (getter=isStreamingRental, nonatomic) bool streamingRental;

- (void).cxx_destruct;
- (id)buyParameters;
- (void)cancel;
- (unsigned long long)endpointType;
- (id)init;
- (id)initWithBuyParameters:(id)arg1 endpointType:(unsigned long long)arg2;
- (id)initWithBuyParameters:(id)arg1 endpointType:(unsigned long long)arg2 shouldUseStreamingRedownload:(bool)arg3;
- (bool)isStreamingRental;
- (void)main;
- (id)redownloadProductResponse;
- (id)requestingBundleIdentifier;
- (id)requestingBundleVersion;
- (id)responseError;
- (void)setRequestingBundleIdentifier:(id)arg1;
- (void)setRequestingBundleVersion:(id)arg1;
- (void)setStreamingRental:(bool)arg1;

@end

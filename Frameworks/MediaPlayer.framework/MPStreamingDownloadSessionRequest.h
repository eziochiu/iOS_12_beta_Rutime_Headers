/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStreamingDownloadSessionRequest : NSObject {
    NSString * _assetSourceStoreFrontID;
    NSString * _buyParameters;
    id /* block */  _downloadSessionAlternativeConfigurationOptionsBlock;
    long long  _endpointType;
    long long  _equivalencySourceAdamID;
    MPMediaPlaybackItemMetadata * _playbackItemMetadata;
    unsigned long long  _preferredAssetQuality;
    bool  _prefersHLS;
    NSString * _requestingBundleIdentifier;
    NSString * _requestingBundleVersion;
    bool  _shouldStartLeaseSession;
    bool  _shouldUseAccountLessStreaming;
    bool  _shouldUseStreamingRedownload;
    long long  _storeAdamID;
    bool  _streamingRental;
}

@property (nonatomic, copy) NSString *assetSourceStoreFrontID;
@property (nonatomic, readonly, copy) NSString *buyParameters;
@property (nonatomic, copy) id /* block */ downloadSessionAlternativeConfigurationOptionsBlock;
@property (nonatomic, readonly) long long endpointType;
@property (nonatomic) long long equivalencySourceAdamID;
@property (nonatomic, retain) MPMediaPlaybackItemMetadata *playbackItemMetadata;
@property (nonatomic) unsigned long long preferredAssetQuality;
@property (nonatomic) bool prefersHLS;
@property (nonatomic, copy) NSString *requestingBundleIdentifier;
@property (nonatomic, copy) NSString *requestingBundleVersion;
@property (nonatomic) bool shouldStartLeaseSession;
@property (nonatomic) bool shouldUseAccountLessStreaming;
@property (nonatomic) bool shouldUseStreamingRedownload;
@property (nonatomic, readonly) long long storeAdamID;
@property (getter=isStreamingRental, nonatomic) bool streamingRental;
@property (nonatomic, readonly) bool usesSubscriptionLease;

- (void).cxx_destruct;
- (id)assetSourceStoreFrontID;
- (id)buyParameters;
- (id /* block */)downloadSessionAlternativeConfigurationOptionsBlock;
- (long long)endpointType;
- (long long)equivalencySourceAdamID;
- (bool)isStreamingRental;
- (id)playbackItemMetadata;
- (unsigned long long)preferredAssetQuality;
- (bool)prefersHLS;
- (id)requestingBundleIdentifier;
- (id)requestingBundleVersion;
- (void)setAssetSourceStoreFrontID:(id)arg1;
- (void)setDownloadSessionAlternativeConfigurationOptionsBlock:(id /* block */)arg1;
- (void)setEquivalencySourceAdamID:(long long)arg1;
- (void)setPlaybackItemMetadata:(id)arg1;
- (void)setPreferredAssetQuality:(unsigned long long)arg1;
- (void)setPrefersHLS:(bool)arg1;
- (void)setRequestingBundleIdentifier:(id)arg1;
- (void)setRequestingBundleVersion:(id)arg1;
- (void)setShouldStartLeaseSession:(bool)arg1;
- (void)setShouldUseAccountLessStreaming:(bool)arg1;
- (void)setShouldUseStreamingRedownload:(bool)arg1;
- (void)setStreamingRental:(bool)arg1;
- (bool)shouldStartLeaseSession;
- (bool)shouldUseAccountLessStreaming;
- (bool)shouldUseStreamingRedownload;
- (long long)storeAdamID;
- (bool)usesSubscriptionLease;

@end

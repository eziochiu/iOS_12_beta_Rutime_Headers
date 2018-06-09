/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCModelStorePlaybackItemsRequest : MPModelRequest <MPCModelPlaybackRequestEnvironmentConsuming, MPCModelPlaybackRequesting, MPCModelRequestRTCReporting, MPCModelStorePreviousRequestStoring, MPModelRequestDetailedKeepLocalStatusRequesting> {
    bool  _allowLocalEquivalencies;
    NSString * _clientIdentifier;
    NSArray * _playbackPrioritizedIndexPaths;
    MPCPlaybackRequestEnvironment * _playbackRequestEnvironment;
    MPModelResponse * _previousResponse;
    MPSectionedCollection * _sectionedModelObjects;
    bool  _shouldBatchResultsWithPlaceholderObjects;
    NSArray * _storeIDs;
    bool  _wantsDetailedKeepLocalRequestableResponse;
}

@property (nonatomic) bool allowLocalEquivalencies;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *playbackPrioritizedIndexPaths;
@property (nonatomic, copy) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (nonatomic, readonly) MPSectionedCollection *playbackSourceModelObjects;
@property (nonatomic, retain) MPModelResponse *previousResponse;
@property (nonatomic, readonly, copy) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (nonatomic, copy) MPSectionedCollection *sectionedModelObjects;
@property (nonatomic) bool shouldBatchResultsWithPlaceholderObjects;
@property (nonatomic, copy) NSArray *storeIDs;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsDetailedKeepLocalRequestableResponse;

+ (void)MPC_consumeSiriAssetInfo:(id)arg1 withCompletion:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowLocalEquivalencies;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (id)playbackPrioritizedIndexPaths;
- (id)playbackRequestEnvironment;
- (id)playbackSourceModelObjects;
- (id)previousResponse;
- (id)rtcReportingPlayQueueSourceIdentifier;
- (id)sectionedModelObjects;
- (void)setAllowLocalEquivalencies:(bool)arg1;
- (void)setAllowsPlaybackResponseBatching:(bool)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setPlaybackPrioritizedIndexPaths:(id)arg1;
- (void)setPlaybackRequestEnvironment:(id)arg1;
- (void)setPreviousResponse:(id)arg1;
- (void)setSectionedModelObjects:(id)arg1;
- (void)setShouldBatchResultsWithPlaceholderObjects:(bool)arg1;
- (void)setStoreIDs:(id)arg1;
- (void)setWantsDetailedKeepLocalRequestableResponse:(bool)arg1;
- (bool)shouldBatchResultsWithPlaceholderObjects;
- (id)storeIDs;
- (bool)wantsDetailedKeepLocalRequestableResponse;

@end
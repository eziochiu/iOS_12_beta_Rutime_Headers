/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCModelMediaClipAVItem : MPAVItem <MPRTCReportingItemSessionCreating> {
    MPModelMediaClip * _mediaClip;
    MPModelGenericObject * _modelGenericObject;
    id  _rtcReportingParentHierarchyToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPModelMediaClip *mediaClip;
@property (nonatomic, readonly) long long rtcReportingAssetType;
@property (nonatomic, readonly) id rtcReportingParentHierarchyToken;
@property (nonatomic, readonly, copy) NSString *rtcReportingServiceIdentifier;
@property (readonly) Class superclass;

+ (id)requiredMediaClipProperties;

- (void).cxx_destruct;
- (bool)_allowsCellularPlayback;
- (void)_applyLoudnessInfo;
- (id)_currentPreferredStaticAsset;
- (bool)_isVideoAsset;
- (bool)allowsAirPlayFromCloud;
- (bool)allowsExternalPlayback;
- (id /* block */)artworkCatalogBlock;
- (id)description;
- (double)durationFromExternalMetadata;
- (id)initWithMediaClip:(id)arg1;
- (bool)isAssetURLValid;
- (bool)isCloudItem;
- (bool)isStreamable;
- (bool)isValidPlayerSubstituteForItem:(id)arg1;
- (void)loadAssetAndPlayerItem;
- (id)mainTitle;
- (id)mediaClip;
- (id)modelGenericObject;
- (void)notePlaybackFinishedByHittingEnd;
- (bool)prefersSeekOverSkip;
- (void)reevaluateType;
- (long long)rtcReportingAssetType;
- (id)rtcReportingParentHierarchyToken;
- (id)rtcReportingServiceIdentifier;
- (void)setPlaybackFinishedTime:(double)arg1;

@end

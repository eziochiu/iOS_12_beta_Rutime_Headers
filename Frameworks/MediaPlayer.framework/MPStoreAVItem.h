/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreAVItem : MPAVItem <AVAssetResourceLoaderDelegate, MPRTCReportingItemSessionCreating, SSVSecureKeyDeliveryRequestOperationDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    unsigned long long  _assetQuality;
    NSString * _assetSourceStoreFrontID;
    NSNumber * _bookmarkTime;
    bool  _didDeferLeaseStart;
    long long  _equivalencySourceAdamID;
    bool  _externalDisplay;
    AVAssetResourceLoadingRequest * _externalLoadingRequest;
    NSData * _externalServerPlaybackContextDataForStoppingLease;
    bool  _hasEverPrioritizedPlayerItem;
    bool  _hasPrioritizedPlayWhileDownloadSession;
    bool  _hasPrioritizedStreamingDownloadSession;
    bool  _hasValidAssetQuality;
    bool  _ignoreHLSOfflinePlaybackKeys;
    bool  _isActivePlayerItem;
    NSError * _lastResourceLoadingError;
    AVAssetResourceLoadingRequest * _loadingRequest;
    NSOperationQueue * _operationQueue;
    unsigned long long  _options;
    NSObject<OS_dispatch_queue> * _persistenceQueue;
    MPStorePlayWhileDownloadSession * _playWhileDownloadSession;
    MPMediaPlaybackItemMetadata * _playbackItemMetadata;
    double  _playbackStartTime;
    unsigned long long  _preferredAssetQuality;
    bool  _rentalCheckoutRequired;
    unsigned long long  _rentalID;
    NSString * _requestingBundleIdentifier;
    NSString * _requestingBundleVersion;
    id  _rtcReportingParentHierarchyToken;
    NSString * _rtcReportingServiceIdentifier;
    NSData * _serverPlaybackContextDataForStoppingLease;
    MPStreamingDownloadSession * _streamingDownloadSession;
}

@property (nonatomic, readonly) bool allowsStoreBagStreamingKeyURLsFallback;
@property (nonatomic, copy) NSString *assetSourceStoreFrontID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long equivalencySourceAdamID;
@property (nonatomic, retain) NSData *externalServerPlaybackContextDataForStoppingLease;
@property (readonly) unsigned long long hash;
@property (getter=isiTunesStoreStream, nonatomic, readonly) bool iTunesStoreStream;
@property (getter=isIgnoringHLSOfflinePlaybackKeys, nonatomic) bool ignoreHLSOfflinePlaybackKeys;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) MPMediaPlaybackItemMetadata *playbackItemMetadata;
@property (getter=isRentalCheckoutRequired, nonatomic, readonly) bool rentalCheckoutRequired;
@property (nonatomic, readonly) unsigned long long rentalID;
@property (nonatomic, copy) NSString *requestingBundleIdentifier;
@property (nonatomic, copy) NSString *requestingBundleVersion;
@property (nonatomic, readonly) long long rtcReportingAssetType;
@property (nonatomic, readonly) id rtcReportingParentHierarchyToken;
@property (nonatomic, readonly, copy) NSString *rtcReportingServiceIdentifier;
@property (nonatomic, retain) NSData *serverPlaybackContextDataForStoppingLease;
@property (nonatomic, readonly) unsigned long long streamType;
@property (nonatomic, readonly, copy) NSURL *streamingKeyCertificateURL;
@property (nonatomic, readonly, copy) NSURL *streamingKeyServerURL;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)_assetURLForCachedLocalPlaybackAssetFilePathForPlaybackItemMetadata:(id)arg1 withMinimumAssetQuality:(unsigned long long)arg2 assetOptions:(id)arg3 returningProtectionType:(unsigned long long*)arg4 assetQuality:(unsigned long long*)arg5 usesPurchaseBundle:(bool*)arg6;
+ (unsigned long long)_currentPreferredAssetQualityForPlaybackItemMetadata:(id)arg1;
+ (bool)hasNominalAmountBeenPlayedForElapsedTime:(double)arg1 startTime:(double)arg2 stopTime:(double)arg3;
+ (bool)isPlaybackItemMetadataStreamingForAssetCreation:(id)arg1 returningProtectionType:(unsigned long long*)arg2;
+ (bool)isPlaybackItemMetadataValidForAssetCreation:(id)arg1;
+ (double)nominalHasBeenPlayedThresholdForDuration:(double)arg1;
+ (bool)shouldIncrementPlayCountForElapsedTime:(double)arg1 startTime:(double)arg2 stopTime:(double)arg3;

- (void).cxx_destruct;
- (void)_applyLoudnessInfo;
- (id)_bookmarkTime;
- (id)_chapterTitleForTime:(double)arg1;
- (void)_checkInExternalPlaybackLease;
- (void)_currentPlaybackRateDidChange:(float)arg1;
- (bool)_getAssetURL:(id*)arg1 playWhileDownloadSession:(id*)arg2 assetQuality:(unsigned long long*)arg3 error:(id*)arg4 usingStoreDownload:(id)arg5 assetOptions:(id)arg6 shouldStartDownload:(bool)arg7;
- (void)_handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(bool)arg2;
- (void)_handleUpdatedLikedState:(long long)arg1 completion:(id /* block */)arg2;
- (bool)_handledLoadingRequestWithOfflinePersistantKey:(id)arg1;
- (bool)_isBackgroundPlaybackRestricted;
- (void)_loadMediaItemWithCompletionHandler:(id /* block */)arg1;
- (void)_mediaPlaybackItemMetadataDidChangeNotification:(id)arg1;
- (void)_mediaPlaybackItemMetadataLikedStateDidChangeNotification:(id)arg1;
- (id)_mediaSelectionOptionFromGroup:(id)arg1 withTrackID:(int)arg2;
- (id)_newTimeMarkersForChapterType:(long long)arg1;
- (void)_persistPlaybackStartTime:(double)arg1;
- (void)_persistURI:(id)arg1 persistentContentKey:(id)arg2;
- (long long)_persistedLikedState;
- (void)_prioritizeDownloadSessionsIfNeeded;
- (bool)_shouldRememberBookmarkTime;
- (void)_stopLease:(id)arg1 withContextData:(id)arg2;
- (id)_storeUbiquitousIdentifier;
- (void)_updateBookmarkTimeIfNecessary:(double)arg1 isCheckpoint:(bool)arg2;
- (void)_willBecomeActivePlayerItem;
- (void)_willResignActivePlayerItem;
- (id)album;
- (id)albumArtist;
- (unsigned long long)albumArtistPersistentID;
- (unsigned long long)albumPersistentID;
- (long long)albumStoreID;
- (unsigned long long)albumTrackCount;
- (unsigned long long)albumTrackNumber;
- (bool)allowsAirPlayFromCloud;
- (bool)allowsEQ;
- (bool)allowsExternalPlayback;
- (bool)allowsStoreBagStreamingKeyURLsFallback;
- (void)applyVolumeNormalizationWithSoundCheckEnabled:(bool)arg1;
- (id)artist;
- (unsigned long long)artistPersistentID;
- (long long)artistStoreID;
- (id)artworkCatalogForPlaybackTime:(double)arg1;
- (id)artworkTimeMarkers;
- (id)assetSourceStoreFrontID;
- (bool)canSeedGenius;
- (id)chapterTimeMarkers;
- (id)composer;
- (unsigned long long)composerPersistentID;
- (id)copyrightText;
- (long long)customAVEQPreset;
- (void)dealloc;
- (id)description;
- (bool)didDeferLeaseStart;
- (unsigned long long)discCount;
- (unsigned long long)discNumber;
- (id)displayableText;
- (double)durationFromExternalMetadata;
- (long long)equivalencySourceAdamID;
- (id)externalContentIdentifier;
- (id)externalServerPlaybackContextDataForStoppingLease;
- (id)genre;
- (unsigned long long)genrePersistentID;
- (void)handlePlaybackFinishedTime:(double)arg1 finishedByHittingEnd:(bool)arg2;
- (bool)hasAlternatesForTypes:(unsigned long long)arg1;
- (id)init;
- (id)initWithPlaybackItemMetadata:(id)arg1 options:(unsigned long long)arg2;
- (bool)isAssetURLValid;
- (bool)isCloudItem;
- (bool)isExplicitTrack;
- (bool)isIgnoringHLSOfflinePlaybackKeys;
- (bool)isLikedStateEnabled;
- (bool)isRentalCheckoutRequired;
- (bool)isStreamable;
- (bool)isStreamingLowQualityAsset;
- (bool)isSupportedDefaultPlaybackSpeed:(long long)arg1;
- (bool)isValidPlayerSubstituteForItem:(id)arg1;
- (bool)isiTunesStoreStream;
- (id)lastResourceLoadingError;
- (void)loadAssetAndPlayerItem;
- (id)mainTitle;
- (id)mediaItem;
- (unsigned long long)mediaType;
- (id)modelGenericObject;
- (long long)mpcReporting_equivalencySourceAdamID;
- (id)mpcReporting_requestingBundleIdentifier;
- (id)mpcReporting_requestingBundleVersion;
- (void)notePlaybackFinishedByHittingEnd;
- (unsigned long long)options;
- (unsigned long long)persistentID;
- (id)playbackInfo;
- (id)playbackItemMetadata;
- (bool)prefersSeekOverSkip;
- (void)prepareForRate:(float)arg1 completionHandler:(id /* block */)arg2;
- (void)reevaluateType;
- (unsigned long long)rentalID;
- (id)requestingBundleIdentifier;
- (id)requestingBundleVersion;
- (bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (bool)resourceLoader:(id)arg1 shouldWaitForRenewalOfRequestedResource:(id)arg2;
- (long long)rtcReportingAssetType;
- (id)rtcReportingParentHierarchyToken;
- (id)rtcReportingServiceIdentifier;
- (id)rtcReportingServiceIdentifierWithAssetURL:(id)arg1;
- (void)secureKeyDeliveryRequestOperationDidChangeServerPlaybackContextData:(id)arg1;
- (id)serverPlaybackContextDataForStoppingLease;
- (void)setAlternateAudioTrackID:(int)arg1;
- (void)setAlternateAudioTrackLocale:(id)arg1;
- (void)setAssetSourceStoreFrontID:(id)arg1;
- (void)setEquivalencySourceAdamID:(long long)arg1;
- (void)setExternalDisplay:(bool)arg1;
- (void)setExternalServerPlaybackContextDataForStoppingLease:(id)arg1;
- (void)setIgnoreHLSOfflinePlaybackKeys:(bool)arg1;
- (void)setLoudnessInfoVolumeNormalization:(float)arg1;
- (void)setPlaybackCheckpointCurrentTime:(double)arg1;
- (void)setPlaybackFinishedTime:(double)arg1;
- (void)setPlaybackStoppedTime:(double)arg1;
- (void)setRating:(float)arg1;
- (void)setRequestingBundleIdentifier:(id)arg1;
- (void)setRequestingBundleVersion:(id)arg1;
- (void)setServerPlaybackContextDataForStoppingLease:(id)arg1;
- (void)setupPlaybackInfo;
- (bool)shouldShowComposer;
- (id)storeDownload;
- (long long)storeItemInt64ID;
- (long long)storePlaybackEndpointType;
- (long long)storeSubscriptionAdamID;
- (unsigned long long)streamType;
- (id)streamingKeyCertificateURL;
- (id)streamingKeyServerURL;
- (bool)supportsLikedState;
- (bool)supportsRewindAndFastForward15Seconds;
- (long long)type;
- (id)urlTimeMarkers;
- (bool)useEmbeddedChapterData;
- (float)userRating;
- (bool)usesSubscriptionLease;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

+ (void)_registerCustomEntityValueHandlers;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)MPU_contentItemIdentifierCollection;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (bool)mpcReporting_shouldReportPlayEventsToStore;

@end
/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelSong : MPModelObject

@property (nonatomic, retain) MPModelAlbum *album;
@property (nonatomic, retain) MPModelArtist *artist;
@property (getter=isArtistUploadedContent, nonatomic) bool artistUploadedContent;
@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic) long long beatsPerMinute;
@property (nonatomic, copy) NSString *classicalMovement;
@property (nonatomic) long long classicalMovementCount;
@property (nonatomic) long long classicalMovementNumber;
@property (nonatomic, copy) NSString *classicalWork;
@property (nonatomic, retain) MPModelComposer *composer;
@property (nonatomic, copy) NSString *copyrightText;
@property (nonatomic) long long discNumber;
@property (nonatomic) double duration;
@property (getter=isExplicitSong, nonatomic) bool explicitSong;
@property (nonatomic, retain) MPGaplessInfo *gaplessInfo;
@property (nonatomic, retain) MPModelGenre *genre;
@property (nonatomic, copy) NSString *grouping;
@property (nonatomic) bool hasCloudSyncSource;
@property (nonatomic) bool hasVideo;
@property (nonatomic, retain) MPModelHomeSharingAsset *homeSharingAsset;
@property (nonatomic) long long keepLocalEnableState;
@property (nonatomic) long long keepLocalManagedStatus;
@property (getter=isLibraryAddEligible, nonatomic) bool libraryAddEligible;
@property (getter=isLibraryAdded, nonatomic) bool libraryAdded;
@property (nonatomic, copy) NSDate *libraryAddedDate;
@property (nonatomic, retain) MPModelFileAsset *localFileAsset;
@property (nonatomic, retain) MPModelLyrics *lyrics;
@property (nonatomic, retain) MPModelPlaybackPosition *playbackPosition;
@property (nonatomic) bool shouldExcludeFromShuffle;
@property (nonatomic) bool shouldShowComposer;
@property (nonatomic, retain) MPModelStoreAsset *storeAsset;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long trackCount;
@property (nonatomic) long long trackNumber;
@property (nonatomic) float userRating;
@property (nonatomic) float volumeAdjustment;
@property (nonatomic) float volumeNormalization;
@property (nonatomic) long long year;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)__album_KEY;
+ (id)__artistUploadedContent_KEY;
+ (id)__artist_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__beatsPerMinute_KEY;
+ (id)__classicalMovementCount_KEY;
+ (id)__classicalMovementNumber_KEY;
+ (id)__classicalMovement_KEY;
+ (id)__classicalWork_KEY;
+ (id)__composer_KEY;
+ (id)__copyrightText_KEY;
+ (id)__discNumber_KEY;
+ (id)__duration_KEY;
+ (id)__explicitSong_KEY;
+ (id)__gaplessInfo_KEY;
+ (id)__genre_KEY;
+ (id)__grouping_KEY;
+ (id)__hasCloudSyncSource_KEY;
+ (id)__hasVideo_KEY;
+ (id)__homeSharingAsset_KEY;
+ (id)__keepLocalEnableState_KEY;
+ (id)__keepLocalManagedStatus_KEY;
+ (id)__libraryAddEligible_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__libraryAdded_KEY;
+ (id)__localFileAsset_KEY;
+ (id)__lyrics_KEY;
+ (id)__playbackPosition_KEY;
+ (id)__shouldExcludeFromShuffle_KEY;
+ (id)__shouldShowComposer_KEY;
+ (id)__storeAsset_KEY;
+ (id)__title_KEY;
+ (id)__trackCount_KEY;
+ (id)__trackNumber_KEY;
+ (id)__userRating_KEY;
+ (id)__volumeAdjustment_KEY;
+ (id)__volumeNormalization_KEY;
+ (id)__year_KEY;
+ (id)kindWithVariants:(unsigned long long)arg1;
+ (id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (id)storeItemMetadataRequestItemIdentifierForIdentifiers:(id)arg1;
+ (bool)storeItemMetadataRequestNeedsPersonalizationForIdentifiers:(id)arg1;
+ (bool)supportsKeepLocalStatusObservation;
+ (bool)supportsLibraryAddStatusObservation;
+ (bool)supportsLibraryRemoval;

- (id)artworkCatalog;
- (struct MPLibraryAddStatusObserverConfiguration { bool x1; bool x2; bool x3; bool x4; bool x5; })libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)mediaItemPropertyValues;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mpc_remotePlaybackQueueRequiredProperties;
+ (id)mqf_requiredPlaybackProperties;

- (id)MPC_modelObjectWithStoreFrontLocalEquivalentModelObject:(id)arg1;
- (id)_radioStationMatchMetadata;
- (id)mpc_protoItemRepresentation;
- (id)mpc_radioContentReference;
- (void)mqf_configurePlaybackItemMetadata:(id)arg1;
- (id)mqf_newPlaybackItemMetadata;
- (id)mqf_playbackItemMetadataModelObject;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelTVEpisode : MPModelObject

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic) double duration;
@property (nonatomic) long long episodeNumber;
@property (nonatomic) long long episodeType;
@property (nonatomic, copy) NSString *episodeTypeDisplayName;
@property (nonatomic) long long explicitRating;
@property (nonatomic) bool hasCloudSyncSource;
@property (nonatomic) long long keepLocalEnableState;
@property (nonatomic) long long keepLocalManagedStatus;
@property (getter=isLibraryAddEligible, nonatomic) bool libraryAddEligible;
@property (getter=isLibraryAdded, nonatomic) bool libraryAdded;
@property (nonatomic, copy) NSDate *libraryAddedDate;
@property (nonatomic, retain) MPModelFileAsset *localFileAsset;
@property (getter=isMusicShow, nonatomic) bool musicShow;
@property (nonatomic, retain) MPModelPlaybackPosition *playbackPosition;
@property (nonatomic, copy) NSDate *releaseDate;
@property (nonatomic, retain) MPModelTVSeason *season;
@property (nonatomic, retain) MPModelTVShow *show;
@property (nonatomic, retain) MPModelStoreAsset *storeAsset;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)__artworkCatalogBlock_KEY;
+ (id)__descriptionText_KEY;
+ (id)__duration_KEY;
+ (id)__episodeNumber_KEY;
+ (id)__episodeTypeDisplayName_KEY;
+ (id)__episodeType_KEY;
+ (id)__explicitRating_KEY;
+ (id)__hasCloudSyncSource_KEY;
+ (id)__keepLocalEnableState_KEY;
+ (id)__keepLocalManagedStatus_KEY;
+ (id)__libraryAddEligible_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__libraryAdded_KEY;
+ (id)__localFileAsset_KEY;
+ (id)__musicShow_KEY;
+ (id)__playbackPosition_KEY;
+ (id)__releaseDate_KEY;
+ (id)__season_KEY;
+ (id)__show_KEY;
+ (id)__storeAsset_KEY;
+ (id)__title_KEY;
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

+ (id)mqf_requiredPlaybackProperties;

- (id)MPC_modelObjectWithStoreFrontLocalEquivalentModelObject:(id)arg1;
- (id)mpc_protoItemRepresentation;
- (void)mqf_configurePlaybackItemMetadata:(id)arg1;
- (id)mqf_newPlaybackItemMetadata;
- (id)mqf_playbackItemMetadataModelObject;

@end

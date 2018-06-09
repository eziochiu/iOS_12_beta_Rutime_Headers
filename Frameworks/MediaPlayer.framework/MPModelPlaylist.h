/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelPlaylist : MPModelObject

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) NSString *cloudVersionHash;
@property (nonatomic, copy) MPModelCurator *curator;
@property (getter=isCuratorPlaylist, nonatomic) bool curatorPlaylist;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic, copy) NSString *editorNotes;
@property (nonatomic, copy) id /* block */ editorialArtworkCatalogBlock;
@property (nonatomic) bool hasCleanContent;
@property (nonatomic) bool hasExplicitContent;
@property (nonatomic) long long keepLocalEnableState;
@property (nonatomic) long long keepLocalManagedStatus;
@property (nonatomic, copy) NSDate *lastDevicePlaybackDate;
@property (nonatomic, copy) NSDateComponents *lastModifiedDateComponents;
@property (getter=isLibraryAdded, nonatomic) bool libraryAdded;
@property (nonatomic, copy) NSDate *libraryAddedDate;
@property (nonatomic, copy) NSString *name;
@property (getter=isOwner, nonatomic) bool owner;
@property (getter=isPublicPlaylist, nonatomic) bool publicPlaylist;
@property (nonatomic, copy) NSDateComponents *releaseDateComponents;
@property (nonatomic, copy) NSURL *shareShortURL;
@property (nonatomic, copy) NSURL *shareURL;
@property (nonatomic, copy) NSString *shortEditorNotes;
@property (getter=isSubscribed, nonatomic) bool subscribed;
@property (nonatomic, copy) MPTiledArtworkRequest *tiledArtworkRequest;
@property (nonatomic) unsigned long long trackCount;
@property (nonatomic) long long type;
@property (nonatomic) long long userEditableComponents;
@property (getter=isVisiblePlaylist, nonatomic) bool visiblePlaylist;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)__artworkCatalogBlock_KEY;
+ (id)__cloudVersionHash_KEY;
+ (id)__curatorPlaylist_KEY;
+ (id)__curator_KEY;
+ (id)__descriptionText_KEY;
+ (id)__editorNotes_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__hasCleanContent_KEY;
+ (id)__hasExplicitContent_KEY;
+ (id)__keepLocalEnableState_KEY;
+ (id)__keepLocalManagedStatus_KEY;
+ (id)__lastDevicePlaybackDate_KEY;
+ (id)__lastModifiedDateComponents_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__libraryAdded_KEY;
+ (id)__name_KEY;
+ (id)__owner_KEY;
+ (id)__publicPlaylist_KEY;
+ (id)__releaseDateComponents_KEY;
+ (id)__shareShortURL_KEY;
+ (id)__shareURL_KEY;
+ (id)__shortEditorNotes_KEY;
+ (id)__subscribed_KEY;
+ (id)__tiledArtworkRequest_KEY;
+ (id)__trackCount_KEY;
+ (id)__type_KEY;
+ (id)__userEditableComponents_KEY;
+ (id)__visiblePlaylist_KEY;
+ (id)kindWithPlaylistEntryKind:(id)arg1 options:(unsigned long long)arg2;
+ (id)kindWithVariants:(unsigned long long)arg1 playlistEntryKind:(id)arg2 options:(unsigned long long)arg3;
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
- (id)contentItemCollectionInfo;
- (id)editorialArtworkCatalog;
- (struct MPLibraryAddStatusObserverConfiguration { bool x1; bool x2; bool x3; bool x4; bool x5; })libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)trackArtworkCatalogsWithCount:(long long)arg1;
- (id)tracksTiledArtworkCatalogWithRows:(unsigned long long)arg1 columns:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mpc_remotePlaybackQueueRequiredProperties;

- (id)mpc_protoContainerRepresentation;

@end

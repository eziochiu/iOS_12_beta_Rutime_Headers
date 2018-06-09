/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelForYouRecommendationItem : MPModelObject

@property (nonatomic, retain) MPModelAlbum *album;
@property (getter=isBackedByStoreItemMetadata, nonatomic) bool backedByStoreItemMetadata;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic) MPModelForYouRecommendationGroup *parentGroup;
@property (nonatomic, retain) MPModelPlaylist *playlist;
@property (nonatomic, readonly) MPModelForYouRecommendationGroup *subgroup;
@property (nonatomic) long long subgroupIndex;

+ (id)__album_KEY;
+ (id)__backedByStoreItemMetadata_KEY;
+ (id)__itemType_KEY;
+ (id)__parentGroup_KEY;
+ (id)__playlist_KEY;
+ (id)__subgroupIndex_KEY;
+ (id)requiredStoreLibraryPersonalizationProperties;

- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)subgroup;

@end

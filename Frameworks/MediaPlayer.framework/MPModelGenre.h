/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelGenre : MPModelObject

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) NSDate *libraryAddedDate;
@property (nonatomic, copy) NSString *name;

+ (id)__artworkCatalogBlock_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__name_KEY;
+ (id)kindWithAlbumKind:(id)arg1;

- (id)artworkCatalog;

@end

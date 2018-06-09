/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelTVShow : MPModelObject

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) MPModelTVShowCreator *creator;
@property (nonatomic, copy) NSString *editorNotes;
@property (nonatomic, copy) id /* block */ editorialArtworkCatalogBlock;
@property (nonatomic) long long episodesCount;
@property (nonatomic, copy) NSString *shortEditorNotes;
@property (nonatomic, copy) NSString *shortTitle;
@property (nonatomic, copy) NSString *tagline;
@property (nonatomic, copy) NSString *title;

+ (id)__artworkCatalogBlock_KEY;
+ (id)__creator_KEY;
+ (id)__editorNotes_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__episodesCount_KEY;
+ (id)__shortEditorNotes_KEY;
+ (id)__shortTitle_KEY;
+ (id)__tagline_KEY;
+ (id)__title_KEY;
+ (id)kindWithSeasonKind:(id)arg1;

- (id)artworkCatalog;
- (id)editorialArtworkCatalog;

@end

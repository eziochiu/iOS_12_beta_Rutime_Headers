/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelCurator : MPModelPerson

@property (nonatomic, copy) id /* block */ brandLogoArtworkCatalogBlock;
@property (nonatomic) long long curatorKind;
@property (nonatomic, copy) NSString *editorNotes;
@property (nonatomic, copy) id /* block */ editorialArtworkCatalogBlock;
@property (nonatomic, copy) NSString *handle;
@property (nonatomic, copy) NSString *shortEditorNotes;
@property (nonatomic, copy) NSString *shortName;

+ (id)__brandLogoArtworkCatalogBlock_KEY;
+ (id)__curatorKind_KEY;
+ (id)__editorNotes_KEY;
+ (id)__editorialArtworkCatalogBlock_KEY;
+ (id)__handle_KEY;
+ (id)__shortEditorNotes_KEY;
+ (id)__shortName_KEY;

- (id)brandLogoArtworkCatalog;
- (id)editorialArtworkCatalog;

@end

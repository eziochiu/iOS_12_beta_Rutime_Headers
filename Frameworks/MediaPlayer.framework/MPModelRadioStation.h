/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelRadioStation : MPModelObject

@property (nonatomic) bool allowsItemLiking;
@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (getter=isBeats1, nonatomic) bool beats1;
@property (nonatomic, copy) NSString *editorNotes;
@property (nonatomic) bool hasExplicitContent;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *shortEditorNotes;
@property (nonatomic) long long type;

+ (id)__allowsItemLiking_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__beats1_KEY;
+ (id)__editorNotes_KEY;
+ (id)__hasExplicitContent_KEY;
+ (id)__name_KEY;
+ (id)__shortEditorNotes_KEY;
+ (id)__type_KEY;
+ (id)storeItemMetadataRequestItemIdentifierForIdentifiers:(id)arg1;

- (id)artworkCatalog;
- (id)contentItemCollectionInfo;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRContentItem : _MRContentItemProtobuf

@property (nonatomic, readonly) bool hasAvailableLanguageOptions;
@property (nonatomic, readonly) bool hasCurrentLanguageOptions;
@property (nonatomic, readonly) MRContentItemMetadata *itemMetadata;

+ (void)initialize;

- (id)customDictionaryRepresentation;
- (bool)hasAvailableLanguageOptions;
- (bool)hasCurrentLanguageOptions;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)itemMetadata;
- (void)setArtworkData:(id)arg1;
- (void)setAvailableLanguageOptions:(id)arg1;
- (void)setCurrentLanguageOptions:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setLyrics:(id)arg1;
- (void)setSections:(id)arg1;

@end

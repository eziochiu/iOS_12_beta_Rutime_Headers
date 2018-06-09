/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSuggestionEntryList : PBCodable <NSCopying> {
    NSString * _localizedSectionHeader;
    NSMutableArray * _suggestionEntries;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasLocalizedSectionHeader;
@property (nonatomic, retain) NSString *localizedSectionHeader;
@property (nonatomic, retain) NSMutableArray *suggestionEntries;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)suggestionEntriesType;

- (void).cxx_destruct;
- (void)addSuggestionEntries:(id)arg1;
- (void)clearSuggestionEntries;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocalizedSectionHeader;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localizedSectionHeader;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLocalizedSectionHeader:(id)arg1;
- (void)setSuggestionEntries:(id)arg1;
- (id)suggestionEntries;
- (id)suggestionEntriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionEntriesCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

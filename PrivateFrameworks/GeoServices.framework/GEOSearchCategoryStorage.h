/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchCategoryStorage : PBCodable <NSCopying> {
    GEOPDAutocompleteEntry * _autocompleteEntry;
    GEOPDBrowseCategory * _browseCategory;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDAutocompleteEntry *autocompleteEntry;
@property (nonatomic, retain) GEOPDBrowseCategory *browseCategory;
@property (nonatomic, readonly) bool hasAutocompleteEntry;
@property (nonatomic, readonly) bool hasBrowseCategory;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)autocompleteEntry;
- (id)browseCategory;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAutocompleteEntry;
- (bool)hasBrowseCategory;
- (unsigned long long)hash;
- (id)initWithSearchCategory:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAutocompleteEntry:(id)arg1;
- (void)setBrowseCategory:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAutocompleteParametersAllEntriesWithBrowse : PBCodable <NSCopying> {
    GEOPDAutocompleteEntry * _categorySuggestionEntry;
    NSData * _categorySuggestionEntryMetadata;
    struct { 
        unsigned int maxResults : 1; 
        unsigned int highlightDiff : 1; 
        unsigned int interleaveCategorySuggestions : 1; 
        unsigned int supportDirectionIntentSuggestions : 1; 
        unsigned int supportUnresolvedDirectionIntent : 1; 
    }  _has;
    bool  _highlightDiff;
    bool  _interleaveCategorySuggestions;
    int  _maxResults;
    NSString * _query;
    GEOPDRetainedSearchMetadata * _retainedSearch;
    bool  _supportDirectionIntentSuggestions;
    bool  _supportUnresolvedDirectionIntent;
    PBUnknownFields * _unknownFields;
    GEOPDVenueIdentifier * _venueIdentifier;
    GEOPDViewportInfo * _viewportInfo;
}

@property (nonatomic, retain) GEOPDAutocompleteEntry *categorySuggestionEntry;
@property (nonatomic, retain) NSData *categorySuggestionEntryMetadata;
@property (nonatomic, readonly) bool hasCategorySuggestionEntry;
@property (nonatomic, readonly) bool hasCategorySuggestionEntryMetadata;
@property (nonatomic) bool hasHighlightDiff;
@property (nonatomic) bool hasInterleaveCategorySuggestions;
@property (nonatomic) bool hasMaxResults;
@property (nonatomic, readonly) bool hasQuery;
@property (nonatomic, readonly) bool hasRetainedSearch;
@property (nonatomic) bool hasSupportDirectionIntentSuggestions;
@property (nonatomic) bool hasSupportUnresolvedDirectionIntent;
@property (nonatomic, readonly) bool hasVenueIdentifier;
@property (nonatomic, readonly) bool hasViewportInfo;
@property (nonatomic) bool highlightDiff;
@property (nonatomic) bool interleaveCategorySuggestions;
@property (nonatomic) int maxResults;
@property (nonatomic, retain) NSString *query;
@property (nonatomic, retain) GEOPDRetainedSearchMetadata *retainedSearch;
@property (nonatomic) bool supportDirectionIntentSuggestions;
@property (nonatomic) bool supportUnresolvedDirectionIntent;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDVenueIdentifier *venueIdentifier;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;

- (void).cxx_destruct;
- (id)categorySuggestionEntry;
- (id)categorySuggestionEntryMetadata;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategorySuggestionEntry;
- (bool)hasCategorySuggestionEntryMetadata;
- (bool)hasHighlightDiff;
- (bool)hasInterleaveCategorySuggestions;
- (bool)hasMaxResults;
- (bool)hasQuery;
- (bool)hasRetainedSearch;
- (bool)hasSupportDirectionIntentSuggestions;
- (bool)hasSupportUnresolvedDirectionIntent;
- (bool)hasVenueIdentifier;
- (bool)hasViewportInfo;
- (unsigned long long)hash;
- (bool)highlightDiff;
- (bool)interleaveCategorySuggestions;
- (bool)isEqual:(id)arg1;
- (int)maxResults;
- (void)mergeFrom:(id)arg1;
- (id)query;
- (bool)readFrom:(id)arg1;
- (id)retainedSearch;
- (void)setCategorySuggestionEntry:(id)arg1;
- (void)setCategorySuggestionEntryMetadata:(id)arg1;
- (void)setHasHighlightDiff:(bool)arg1;
- (void)setHasInterleaveCategorySuggestions:(bool)arg1;
- (void)setHasMaxResults:(bool)arg1;
- (void)setHasSupportDirectionIntentSuggestions:(bool)arg1;
- (void)setHasSupportUnresolvedDirectionIntent:(bool)arg1;
- (void)setHighlightDiff:(bool)arg1;
- (void)setInterleaveCategorySuggestions:(bool)arg1;
- (void)setMaxResults:(int)arg1;
- (void)setQuery:(id)arg1;
- (void)setRetainedSearch:(id)arg1;
- (void)setSupportDirectionIntentSuggestions:(bool)arg1;
- (void)setSupportUnresolvedDirectionIntent:(bool)arg1;
- (void)setVenueIdentifier:(id)arg1;
- (void)setViewportInfo:(id)arg1;
- (bool)supportDirectionIntentSuggestions;
- (bool)supportUnresolvedDirectionIntent;
- (id)unknownFields;
- (id)venueIdentifier;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end

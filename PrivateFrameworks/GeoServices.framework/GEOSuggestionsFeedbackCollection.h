/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSuggestionsFeedbackCollection : PBCodable <NSCopying> {
    struct { 
        unsigned int sessionID : 1; 
        unsigned int suggestionEntryIndex : 1; 
        unsigned int suggestionsEntryListIndex : 1; 
    }  _has;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionID;
    GEOPDAutocompleteEntry * _suggestionEntry;
    int  _suggestionEntryIndex;
    NSData * _suggestionEntryMetadata;
    NSData * _suggestionMetadata;
    int  _suggestionsEntryListIndex;
}

@property (nonatomic) bool hasSessionID;
@property (nonatomic, readonly) bool hasSuggestionEntry;
@property (nonatomic) bool hasSuggestionEntryIndex;
@property (nonatomic, readonly) bool hasSuggestionEntryMetadata;
@property (nonatomic, readonly) bool hasSuggestionMetadata;
@property (nonatomic) bool hasSuggestionsEntryListIndex;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionID;
@property (nonatomic, retain) GEOPDAutocompleteEntry *suggestionEntry;
@property (nonatomic) int suggestionEntryIndex;
@property (nonatomic, retain) NSData *suggestionEntryMetadata;
@property (nonatomic, retain) NSData *suggestionMetadata;
@property (nonatomic) int suggestionsEntryListIndex;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSessionID;
- (bool)hasSuggestionEntry;
- (bool)hasSuggestionEntryIndex;
- (bool)hasSuggestionEntryMetadata;
- (bool)hasSuggestionMetadata;
- (bool)hasSuggestionsEntryListIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionID;
- (void)setHasSessionID:(bool)arg1;
- (void)setHasSuggestionEntryIndex:(bool)arg1;
- (void)setHasSuggestionsEntryListIndex:(bool)arg1;
- (void)setSessionID:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSuggestionEntry:(id)arg1;
- (void)setSuggestionEntryIndex:(int)arg1;
- (void)setSuggestionEntryMetadata:(id)arg1;
- (void)setSuggestionMetadata:(id)arg1;
- (void)setSuggestionsEntryListIndex:(int)arg1;
- (id)suggestionEntry;
- (int)suggestionEntryIndex;
- (id)suggestionEntryMetadata;
- (id)suggestionMetadata;
- (int)suggestionsEntryListIndex;
- (void)writeTo:(id)arg1;

@end

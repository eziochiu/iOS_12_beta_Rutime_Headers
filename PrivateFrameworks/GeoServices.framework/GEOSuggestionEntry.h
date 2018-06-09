/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSuggestionEntry : PBCodable <NSCopying> {
    NSString * _calloutTitle;
    NSMutableArray * _displayLines;
    NSString * _iconID;
    GEOLatLng * _latlng;
    NSMutableArray * _namedFeatures;
    NSString * _searchQueryDisplayString;
    NSData * _suggestionEntryMetadata;
    struct GEOHighlight { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } * _textHighlights;
    unsigned long long  _textHighlightsCount;
    unsigned long long  _textHighlightsSpace;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *calloutTitle;
@property (nonatomic, retain) NSMutableArray *displayLines;
@property (nonatomic, readonly) bool hasCalloutTitle;
@property (nonatomic, readonly) bool hasIconID;
@property (nonatomic, readonly) bool hasLatlng;
@property (nonatomic, readonly) bool hasSearchQueryDisplayString;
@property (nonatomic, readonly) bool hasSuggestionEntryMetadata;
@property (nonatomic, retain) NSString *iconID;
@property (nonatomic, retain) GEOLatLng *latlng;
@property (nonatomic, retain) NSMutableArray *namedFeatures;
@property (nonatomic, retain) NSString *searchQueryDisplayString;
@property (nonatomic, retain) NSData *suggestionEntryMetadata;
@property (nonatomic, readonly) struct GEOHighlight { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*textHighlights;
@property (nonatomic, readonly) unsigned long long textHighlightsCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)displayLineType;
+ (Class)namedFeatureType;

- (void).cxx_destruct;
- (void)addDisplayLine:(id)arg1;
- (void)addNamedFeature:(id)arg1;
- (void)addTextHighlights:(struct GEOHighlight { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (id)calloutTitle;
- (void)clearDisplayLines;
- (void)clearNamedFeatures;
- (void)clearTextHighlights;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayLineAtIndex:(unsigned long long)arg1;
- (id)displayLines;
- (unsigned long long)displayLinesCount;
- (bool)hasCalloutTitle;
- (bool)hasIconID;
- (bool)hasLatlng;
- (bool)hasSearchQueryDisplayString;
- (bool)hasSuggestionEntryMetadata;
- (unsigned long long)hash;
- (id)iconID;
- (bool)isEqual:(id)arg1;
- (id)latlng;
- (void)mergeFrom:(id)arg1;
- (id)namedFeatureAtIndex:(unsigned long long)arg1;
- (id)namedFeatures;
- (unsigned long long)namedFeaturesCount;
- (bool)readFrom:(id)arg1;
- (id)searchQueryDisplayString;
- (void)setCalloutTitle:(id)arg1;
- (void)setDisplayLines:(id)arg1;
- (void)setIconID:(id)arg1;
- (void)setLatlng:(id)arg1;
- (void)setNamedFeatures:(id)arg1;
- (void)setSearchQueryDisplayString:(id)arg1;
- (void)setSuggestionEntryMetadata:(id)arg1;
- (void)setTextHighlights:(struct GEOHighlight { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg1 count:(unsigned long long)arg2;
- (id)suggestionEntryMetadata;
- (struct GEOHighlight { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)textHighlights;
- (struct GEOHighlight { unsigned int x1; unsigned int x2; unsigned int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })textHighlightsAtIndex:(unsigned long long)arg1;
- (unsigned long long)textHighlightsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

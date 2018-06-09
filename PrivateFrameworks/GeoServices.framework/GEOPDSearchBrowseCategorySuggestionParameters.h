/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchBrowseCategorySuggestionParameters : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _engineTypes;
    struct { 
        unsigned int requestLocalTimestamp : 1; 
        unsigned int minimumNumberOfCategories : 1; 
        unsigned int suggestionType : 1; 
        unsigned int isCarplayRequest : 1; 
    }  _has;
    bool  _isCarplayRequest;
    int  _minimumNumberOfCategories;
    double  _requestLocalTimestamp;
    int  _suggestionType;
    PBUnknownFields * _unknownFields;
    GEOPDVenueIdentifier * _venueFilter;
    GEOPDViewportInfo * _viewportInfo;
}

@property (nonatomic, readonly) int*engineTypes;
@property (nonatomic, readonly) unsigned long long engineTypesCount;
@property (nonatomic) bool hasIsCarplayRequest;
@property (nonatomic) bool hasMinimumNumberOfCategories;
@property (nonatomic) bool hasRequestLocalTimestamp;
@property (nonatomic) bool hasSuggestionType;
@property (nonatomic, readonly) bool hasVenueFilter;
@property (nonatomic, readonly) bool hasViewportInfo;
@property (nonatomic) bool isCarplayRequest;
@property (nonatomic) int minimumNumberOfCategories;
@property (nonatomic) double requestLocalTimestamp;
@property (nonatomic) int suggestionType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDVenueIdentifier *venueFilter;
@property (nonatomic, retain) GEOPDViewportInfo *viewportInfo;

- (void).cxx_destruct;
- (int)StringAsEngineTypes:(id)arg1;
- (int)StringAsSuggestionType:(id)arg1;
- (void)addEngineType:(int)arg1;
- (void)clearEngineTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)engineTypeAtIndex:(unsigned long long)arg1;
- (int*)engineTypes;
- (id)engineTypesAsString:(int)arg1;
- (unsigned long long)engineTypesCount;
- (bool)hasIsCarplayRequest;
- (bool)hasMinimumNumberOfCategories;
- (bool)hasRequestLocalTimestamp;
- (bool)hasSuggestionType;
- (bool)hasVenueFilter;
- (bool)hasViewportInfo;
- (unsigned long long)hash;
- (bool)isCarplayRequest;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)minimumNumberOfCategories;
- (bool)readFrom:(id)arg1;
- (double)requestLocalTimestamp;
- (void)setEngineTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasIsCarplayRequest:(bool)arg1;
- (void)setHasMinimumNumberOfCategories:(bool)arg1;
- (void)setHasRequestLocalTimestamp:(bool)arg1;
- (void)setHasSuggestionType:(bool)arg1;
- (void)setIsCarplayRequest:(bool)arg1;
- (void)setMinimumNumberOfCategories:(int)arg1;
- (void)setRequestLocalTimestamp:(double)arg1;
- (void)setSuggestionType:(int)arg1;
- (void)setVenueFilter:(id)arg1;
- (void)setViewportInfo:(id)arg1;
- (int)suggestionType;
- (id)suggestionTypeAsString:(int)arg1;
- (id)unknownFields;
- (id)venueFilter;
- (id)viewportInfo;
- (void)writeTo:(id)arg1;

@end

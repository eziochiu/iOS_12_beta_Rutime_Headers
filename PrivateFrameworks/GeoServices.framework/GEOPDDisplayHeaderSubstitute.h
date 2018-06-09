/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDDisplayHeaderSubstitute : PBCodable <NSCopying> {
    struct { 
        unsigned int substituteType : 1; 
    }  _has;
    NSString * _interpretedQuery;
    GEOPDRelatedSearchSuggestion * _relatedSearchSuggestion;
    int  _substituteType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasInterpretedQuery;
@property (nonatomic, readonly) bool hasRelatedSearchSuggestion;
@property (nonatomic) bool hasSubstituteType;
@property (nonatomic, retain) NSString *interpretedQuery;
@property (nonatomic, retain) GEOPDRelatedSearchSuggestion *relatedSearchSuggestion;
@property (nonatomic) int substituteType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsSubstituteType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInterpretedQuery;
- (bool)hasRelatedSearchSuggestion;
- (bool)hasSubstituteType;
- (unsigned long long)hash;
- (id)interpretedQuery;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)relatedSearchSuggestion;
- (void)setHasSubstituteType:(bool)arg1;
- (void)setInterpretedQuery:(id)arg1;
- (void)setRelatedSearchSuggestion:(id)arg1;
- (void)setSubstituteType:(int)arg1;
- (int)substituteType;
- (id)substituteTypeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

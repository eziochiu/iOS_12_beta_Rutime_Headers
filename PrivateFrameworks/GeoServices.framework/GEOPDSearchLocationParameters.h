/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSearchLocationParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int searchLocationParametersType : 1; 
    }  _has;
    int  _searchLocationParametersType;
    GEOPDTransportHint * _searchTransportHint;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasSearchLocationParametersType;
@property (nonatomic, readonly) bool hasSearchTransportHint;
@property (nonatomic) int searchLocationParametersType;
@property (nonatomic, retain) GEOPDTransportHint *searchTransportHint;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsSearchLocationParametersType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSearchLocationParametersType;
- (bool)hasSearchTransportHint;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)searchLocationParametersType;
- (id)searchLocationParametersTypeAsString:(int)arg1;
- (id)searchTransportHint;
- (void)setHasSearchLocationParametersType:(bool)arg1;
- (void)setSearchLocationParametersType:(int)arg1;
- (void)setSearchTransportHint:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

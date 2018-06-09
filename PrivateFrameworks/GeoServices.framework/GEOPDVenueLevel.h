/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDVenueLevel : PBCodable <NSCopying> {
    struct { 
        unsigned int levelId : 1; 
        unsigned int ordinal : 1; 
    }  _has;
    GEOPDVenueLabel * _label;
    unsigned long long  _levelId;
    int  _ordinal;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic) bool hasLevelId;
@property (nonatomic) bool hasOrdinal;
@property (nonatomic, retain) GEOPDVenueLabel *label;
@property (nonatomic) unsigned long long levelId;
@property (nonatomic) int ordinal;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLabel;
- (bool)hasLevelId;
- (bool)hasOrdinal;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)label;
- (unsigned long long)levelId;
- (void)mergeFrom:(id)arg1;
- (int)ordinal;
- (bool)readFrom:(id)arg1;
- (void)setHasLevelId:(bool)arg1;
- (void)setHasOrdinal:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLevelId:(unsigned long long)arg1;
- (void)setOrdinal:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

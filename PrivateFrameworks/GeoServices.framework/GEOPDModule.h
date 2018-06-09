/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDModule : PBCodable <NSCopying> {
    struct { 
        unsigned int type : 1; 
    }  _has;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTimeRange : PBCodable <NSCopying> {
    unsigned int  _from;
    struct { 
        unsigned int from : 1; 
        unsigned int to : 1; 
    }  _has;
    unsigned int  _to;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int from;
@property (nonatomic) bool hasFrom;
@property (nonatomic) bool hasTo;
@property (nonatomic) unsigned int to;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)from;
- (bool)hasFrom;
- (bool)hasTo;
- (unsigned long long)hash;
- (id)initWithPlaceDataTimeRange:(struct GEOPDLocalTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFrom:(unsigned int)arg1;
- (void)setHasFrom:(bool)arg1;
- (void)setHasTo:(bool)arg1;
- (void)setTo:(unsigned int)arg1;
- (unsigned int)to;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

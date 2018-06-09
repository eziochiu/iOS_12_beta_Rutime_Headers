/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAmenities : PBCodable <NSCopying> {
    struct GEOPDAmenityValue { int x1; bool x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } * _amenitys;
    unsigned long long  _amenitysCount;
    unsigned long long  _amenitysSpace;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) struct GEOPDAmenityValue { int x1; bool x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*amenitys;
@property (nonatomic, readonly) unsigned long long amenitysCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)amentiesForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (void)addAmenity:(struct GEOPDAmenityValue { int x1; bool x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (struct GEOPDAmenityValue { int x1; bool x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })amenityAtIndex:(unsigned long long)arg1;
- (struct GEOPDAmenityValue { int x1; bool x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)amenitys;
- (unsigned long long)amenitysCount;
- (void)clearAmenitys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAmenityType:(int)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAmenitys:(struct GEOPDAmenityValue { int x1; bool x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned long long)arg2;
- (id)unknownFields;
- (bool)valueForAmenityType:(int)arg1;
- (void)writeTo:(id)arg1;

@end

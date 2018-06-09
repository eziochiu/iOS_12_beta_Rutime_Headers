/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOActiveResourceFilters : PBCodable <NSCopying> {
    struct GEOActiveResourceFilter { double x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } * _filters;
    unsigned long long  _filtersCount;
    unsigned long long  _filtersSpace;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) struct GEOActiveResourceFilter { double x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*filters;
@property (nonatomic, readonly) unsigned long long filtersCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)addFilter:(struct GEOActiveResourceFilter { double x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (void)clearFilters;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (struct GEOActiveResourceFilter { double x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })filterAtIndex:(unsigned long long)arg1;
- (struct GEOActiveResourceFilter { double x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)filters;
- (unsigned long long)filtersCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFilters:(struct GEOActiveResourceFilter { double x1; int x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg1 count:(unsigned long long)arg2;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSpatialPlaceLookupParameters : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _categoryFilters;
    GEOLatLng * _center;
    int  _count;
    struct { 
        unsigned int count : 1; 
        unsigned int radius : 1; 
    }  _has;
    int  _radius;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) int*categoryFilters;
@property (nonatomic, readonly) unsigned long long categoryFiltersCount;
@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic) int count;
@property (nonatomic, readonly) bool hasCenter;
@property (nonatomic) bool hasCount;
@property (nonatomic) bool hasRadius;
@property (nonatomic) int radius;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsCategoryFilters:(id)arg1;
- (void)addCategoryFilter:(int)arg1;
- (int)categoryFilterAtIndex:(unsigned long long)arg1;
- (int*)categoryFilters;
- (id)categoryFiltersAsString:(int)arg1;
- (unsigned long long)categoryFiltersCount;
- (id)center;
- (void)clearCategoryFilters;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)count;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCenter;
- (bool)hasCount;
- (bool)hasRadius;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)radius;
- (bool)readFrom:(id)arg1;
- (void)setCategoryFilters:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCenter:(id)arg1;
- (void)setCount:(int)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setHasRadius:(bool)arg1;
- (void)setRadius:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

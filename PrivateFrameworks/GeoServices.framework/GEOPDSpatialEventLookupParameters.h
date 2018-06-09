/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSpatialEventLookupParameters : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _categoryFilters;
    GEOLatLng * _center;
    int  _count;
    struct { 
        unsigned int timeRange : 1; 
        unsigned int count : 1; 
        unsigned int radius : 1; 
    }  _has;
    int  _radius;
    struct GEOPDTimeRange { 
        unsigned int _duration; 
        unsigned int _startTime; 
        struct { 
            unsigned int duration : 1; 
            unsigned int startTime : 1; 
        } _has; 
    }  _timeRange;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) int*categoryFilters;
@property (nonatomic, readonly) unsigned long long categoryFiltersCount;
@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic) int count;
@property (nonatomic, readonly) bool hasCenter;
@property (nonatomic) bool hasCount;
@property (nonatomic) bool hasRadius;
@property (nonatomic) bool hasTimeRange;
@property (nonatomic) int radius;
@property (nonatomic) struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } timeRange;
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
- (bool)hasTimeRange;
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
- (void)setHasTimeRange:(bool)arg1;
- (void)setRadius:(int)arg1;
- (void)setTimeRange:(struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })timeRange;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
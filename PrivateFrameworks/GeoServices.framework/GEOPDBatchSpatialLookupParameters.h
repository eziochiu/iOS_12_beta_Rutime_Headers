/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDBatchSpatialLookupParameters : PBCodable <NSCopying> {
    NSMutableArray * _spatialEventLookups;
    NSMutableArray * _spatialPlaceLookups;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *spatialEventLookups;
@property (nonatomic, retain) NSMutableArray *spatialPlaceLookups;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)spatialEventLookupType;
+ (Class)spatialPlaceLookupType;

- (void).cxx_destruct;
- (void)addSpatialEventLookup:(id)arg1;
- (void)addSpatialPlaceLookup:(id)arg1;
- (void)clearSpatialEventLookups;
- (void)clearSpatialPlaceLookups;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSpatialEventLookups:(id)arg1;
- (void)setSpatialPlaceLookups:(id)arg1;
- (id)spatialEventLookupAtIndex:(unsigned long long)arg1;
- (id)spatialEventLookups;
- (unsigned long long)spatialEventLookupsCount;
- (id)spatialPlaceLookupAtIndex:(unsigned long long)arg1;
- (id)spatialPlaceLookups;
- (unsigned long long)spatialPlaceLookupsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

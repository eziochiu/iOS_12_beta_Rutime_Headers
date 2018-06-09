/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDBatchSpatialLookupResult : PBCodable <NSCopying> {
    struct { 
        unsigned int statusCode : 1; 
    }  _has;
    NSMutableArray * _spatialEventLookupResults;
    NSMutableArray * _spatialPlaceLookupResults;
    int  _statusCode;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasStatusCode;
@property (nonatomic, retain) NSMutableArray *spatialEventLookupResults;
@property (nonatomic, retain) NSMutableArray *spatialPlaceLookupResults;
@property (nonatomic) int statusCode;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)spatialEventLookupResultType;
+ (Class)spatialPlaceLookupResultType;

- (void).cxx_destruct;
- (int)StringAsStatusCode:(id)arg1;
- (void)addSpatialEventLookupResult:(id)arg1;
- (void)addSpatialPlaceLookupResult:(id)arg1;
- (void)clearSpatialEventLookupResults;
- (void)clearSpatialPlaceLookupResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStatusCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setSpatialEventLookupResults:(id)arg1;
- (void)setSpatialPlaceLookupResults:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (id)spatialEventLookupResultAtIndex:(unsigned long long)arg1;
- (id)spatialEventLookupResults;
- (unsigned long long)spatialEventLookupResultsCount;
- (id)spatialPlaceLookupResultAtIndex:(unsigned long long)arg1;
- (id)spatialPlaceLookupResults;
- (unsigned long long)spatialPlaceLookupResultsCount;
- (int)statusCode;
- (id)statusCodeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteHypothesisResponse : PBCodable <NSCopying> {
    GEODirectionsResponse * _directionsResponse;
    GEOETAResponse * _etaResponse;
    struct { 
        unsigned int updatedTimeStamp : 1; 
    }  _has;
    double  _updatedTimeStamp;
}

@property (nonatomic, retain) GEODirectionsResponse *directionsResponse;
@property (nonatomic, retain) GEOETAResponse *etaResponse;
@property (nonatomic, readonly) bool hasDirectionsResponse;
@property (nonatomic, readonly) bool hasEtaResponse;
@property (nonatomic) bool hasUpdatedTimeStamp;
@property (nonatomic) double updatedTimeStamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsResponse;
- (id)etaResponse;
- (bool)hasDirectionsResponse;
- (bool)hasEtaResponse;
- (bool)hasUpdatedTimeStamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDirectionsResponse:(id)arg1;
- (void)setEtaResponse:(id)arg1;
- (void)setHasUpdatedTimeStamp:(bool)arg1;
- (void)setUpdatedTimeStamp:(double)arg1;
- (double)updatedTimeStamp;
- (void)writeTo:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOURLRouteHandle : PBCodable <NSCopying> {
    NSData * _directionsResponseID;
    NSData * _routeID;
    NSData * _transitData;
    NSData * _zilchPoints;
}

@property (nonatomic, retain) NSData *directionsResponseID;
@property (nonatomic, readonly) bool hasDirectionsResponseID;
@property (nonatomic, readonly) bool hasRouteID;
@property (nonatomic, readonly) bool hasTransitData;
@property (nonatomic, readonly) bool hasZilchPoints;
@property (nonatomic, retain) NSData *routeID;
@property (nonatomic, retain) NSData *transitData;
@property (nonatomic, retain) NSData *zilchPoints;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsResponseID;
- (bool)hasDirectionsResponseID;
- (bool)hasRouteID;
- (bool)hasTransitData;
- (bool)hasZilchPoints;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeID;
- (void)setDirectionsResponseID:(id)arg1;
- (void)setRouteID:(id)arg1;
- (void)setTransitData:(id)arg1;
- (void)setZilchPoints:(id)arg1;
- (id)transitData;
- (void)writeTo:(id)arg1;
- (id)zilchPoints;

@end
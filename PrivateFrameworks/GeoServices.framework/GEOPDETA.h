/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDETA : PBCodable <NSCopying> {
    unsigned int  _distance;
    struct { 
        unsigned int distance : 1; 
        unsigned int historicTravelTime : 1; 
        unsigned int time : 1; 
        unsigned int transportType : 1; 
    }  _has;
    unsigned int  _historicTravelTime;
    GEORouteTrafficDetail * _routeTrafficDetail;
    unsigned int  _time;
    int  _transportType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int distance;
@property (nonatomic) bool hasDistance;
@property (nonatomic) bool hasHistoricTravelTime;
@property (nonatomic, readonly) bool hasRouteTrafficDetail;
@property (nonatomic) bool hasTime;
@property (nonatomic) bool hasTransportType;
@property (nonatomic) unsigned int historicTravelTime;
@property (nonatomic, retain) GEORouteTrafficDetail *routeTrafficDetail;
@property (nonatomic) unsigned int time;
@property (nonatomic) int transportType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsTransportType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)distance;
- (bool)hasDistance;
- (bool)hasHistoricTravelTime;
- (bool)hasRouteTrafficDetail;
- (bool)hasTime;
- (bool)hasTransportType;
- (unsigned long long)hash;
- (unsigned int)historicTravelTime;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeTrafficDetail;
- (void)setDistance:(unsigned int)arg1;
- (void)setHasDistance:(bool)arg1;
- (void)setHasHistoricTravelTime:(bool)arg1;
- (void)setHasTime:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setHistoricTravelTime:(unsigned int)arg1;
- (void)setRouteTrafficDetail:(id)arg1;
- (void)setTime:(unsigned int)arg1;
- (void)setTransportType:(int)arg1;
- (unsigned int)time;
- (int)transportType;
- (id)transportTypeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOStorageRouteRequestStorage : PBCodable <MSPRouteInformationSource, NSCopying> {
    struct { 
        unsigned int transportType : 1; 
    }  _has;
    GEOURLRouteHandle * _routeHandle;
    int  _transportType;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _waypoints;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasRouteHandle;
@property (nonatomic) bool hasTransportType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOURLRouteHandle *routeHandle;
@property (readonly) Class superclass;
@property (nonatomic) int transportType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSMutableArray *waypoints;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (Class)waypointsType;

- (void).cxx_destruct;
- (int)StringAsTransportType:(id)arg1;
- (void)addWaypoints:(id)arg1;
- (void)clearWaypoints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRouteHandle;
- (bool)hasTransportType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeHandle;
- (void)setHasTransportType:(bool)arg1;
- (void)setRouteHandle:(id)arg1;
- (void)setTransportType:(int)arg1;
- (void)setWaypoints:(id)arg1;
- (int)transportType;
- (id)transportTypeAsString:(int)arg1;
- (id)unknownFields;
- (id)waypoints;
- (id)waypointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)waypointsCount;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport

- (id)ifGEOStorageRouteRequestStorage;
- (id)ifRidesharingInformationSource;

@end

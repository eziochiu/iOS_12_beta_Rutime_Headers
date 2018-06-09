/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTrafficIncidentAlertDetails : PBCodable <NSCopying> {
    NSData * _alertID;
    double  _alertTimestamp;
    unsigned int  _alertType;
    GEORoute * _alternateRoute;
    double  _distanceToIncident;
    MNRouteCoordinate * _endValidCoordinateRange;
    NSData * _etaResponseID;
    GEOETARoute * _etaRoute;
    double  _etaTimestamp;
    struct { 
        unsigned int alertTimestamp : 1; 
        unsigned int distanceToIncident : 1; 
        unsigned int etaTimestamp : 1; 
        unsigned int alertType : 1; 
        unsigned int isAutomaticReroute : 1; 
    }  _has;
    MNRouteCoordinate * _incidentCoordinate;
    bool  _isAutomaticReroute;
    GEORoute * _originalRoute;
    NSMutableArray * _originalRouteIncidentsDatas;
    MNRouteCoordinate * _startValidCoordinateRange;
}

@property (nonatomic, retain) NSData *alertID;
@property (nonatomic) double alertTimestamp;
@property (nonatomic) unsigned int alertType;
@property (nonatomic, retain) GEORoute *alternateRoute;
@property (nonatomic) double distanceToIncident;
@property (nonatomic, retain) MNRouteCoordinate *endValidCoordinateRange;
@property (nonatomic, retain) NSData *etaResponseID;
@property (nonatomic, retain) GEOETARoute *etaRoute;
@property (nonatomic) double etaTimestamp;
@property (nonatomic, readonly) bool hasAlertID;
@property (nonatomic) bool hasAlertTimestamp;
@property (nonatomic) bool hasAlertType;
@property (nonatomic, readonly) bool hasAlternateRoute;
@property (nonatomic) bool hasDistanceToIncident;
@property (nonatomic, readonly) bool hasEndValidCoordinateRange;
@property (nonatomic, readonly) bool hasEtaResponseID;
@property (nonatomic, readonly) bool hasEtaRoute;
@property (nonatomic) bool hasEtaTimestamp;
@property (nonatomic, readonly) bool hasIncidentCoordinate;
@property (nonatomic) bool hasIsAutomaticReroute;
@property (nonatomic, readonly) bool hasOriginalRoute;
@property (nonatomic, readonly) bool hasStartValidCoordinateRange;
@property (nonatomic, retain) MNRouteCoordinate *incidentCoordinate;
@property (nonatomic) bool isAutomaticReroute;
@property (nonatomic, retain) GEORoute *originalRoute;
@property (nonatomic, retain) NSMutableArray *originalRouteIncidentsDatas;
@property (nonatomic, retain) MNRouteCoordinate *startValidCoordinateRange;

+ (id)detailsForTrafficIncidentAlert:(id)arg1;
+ (Class)originalRouteIncidentsDataType;

- (void).cxx_destruct;
- (void)addOriginalRouteIncidentsData:(id)arg1;
- (id)alertID;
- (double)alertTimestamp;
- (unsigned int)alertType;
- (id)alternateRoute;
- (void)clearOriginalRouteIncidentsDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)distanceToIncident;
- (id)endValidCoordinateRange;
- (id)etaResponseID;
- (id)etaRoute;
- (double)etaTimestamp;
- (bool)hasAlertID;
- (bool)hasAlertTimestamp;
- (bool)hasAlertType;
- (bool)hasAlternateRoute;
- (bool)hasDistanceToIncident;
- (bool)hasEndValidCoordinateRange;
- (bool)hasEtaResponseID;
- (bool)hasEtaRoute;
- (bool)hasEtaTimestamp;
- (bool)hasIncidentCoordinate;
- (bool)hasIsAutomaticReroute;
- (bool)hasOriginalRoute;
- (bool)hasStartValidCoordinateRange;
- (unsigned long long)hash;
- (id)incidentCoordinate;
- (bool)isAutomaticReroute;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)originalRoute;
- (id)originalRouteIncidentsDataAtIndex:(unsigned long long)arg1;
- (id)originalRouteIncidentsDatas;
- (unsigned long long)originalRouteIncidentsDatasCount;
- (bool)readFrom:(id)arg1;
- (void)setAlertID:(id)arg1;
- (void)setAlertTimestamp:(double)arg1;
- (void)setAlertType:(unsigned int)arg1;
- (void)setAlternateRoute:(id)arg1;
- (void)setDistanceToIncident:(double)arg1;
- (void)setEndValidCoordinateRange:(id)arg1;
- (void)setEtaResponseID:(id)arg1;
- (void)setEtaRoute:(id)arg1;
- (void)setEtaTimestamp:(double)arg1;
- (void)setHasAlertTimestamp:(bool)arg1;
- (void)setHasAlertType:(bool)arg1;
- (void)setHasDistanceToIncident:(bool)arg1;
- (void)setHasEtaTimestamp:(bool)arg1;
- (void)setHasIsAutomaticReroute:(bool)arg1;
- (void)setIncidentCoordinate:(id)arg1;
- (void)setIsAutomaticReroute:(bool)arg1;
- (void)setOriginalRoute:(id)arg1;
- (void)setOriginalRouteIncidentsDatas:(id)arg1;
- (void)setStartValidCoordinateRange:(id)arg1;
- (id)startValidCoordinateRange;
- (void)writeTo:(id)arg1;

@end

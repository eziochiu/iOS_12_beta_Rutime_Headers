/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOGuidanceEventFeedback : PBCodable <NSCopying> {
    float  _distanceToManeuver;
    float  _duration;
    unsigned int  _enrouteNoticeIndex;
    unsigned int  _eventIndex;
    struct { 
        unsigned int distanceToManeuver : 1; 
        unsigned int duration : 1; 
        unsigned int enrouteNoticeIndex : 1; 
        unsigned int eventIndex : 1; 
        unsigned int stepID : 1; 
        unsigned int timeToManeuver : 1; 
        unsigned int trafficSpeed : 1; 
        unsigned int vehicleSpeed : 1; 
    }  _has;
    NSData * _routeID;
    GEOSignGuidanceFeedback * _signGuidanceFeedback;
    GEOSpokenGuidanceFeedback * _spokenGuidanceFeedback;
    unsigned int  _stepID;
    float  _timeToManeuver;
    int  _trafficSpeed;
    float  _vehicleSpeed;
}

@property (nonatomic) float distanceToManeuver;
@property (nonatomic) float duration;
@property (nonatomic) unsigned int enrouteNoticeIndex;
@property (nonatomic) unsigned int eventIndex;
@property (nonatomic) bool hasDistanceToManeuver;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasEnrouteNoticeIndex;
@property (nonatomic) bool hasEventIndex;
@property (nonatomic, readonly) bool hasRouteID;
@property (nonatomic, readonly) bool hasSignGuidanceFeedback;
@property (nonatomic, readonly) bool hasSpokenGuidanceFeedback;
@property (nonatomic) bool hasStepID;
@property (nonatomic) bool hasTimeToManeuver;
@property (nonatomic) bool hasTrafficSpeed;
@property (nonatomic) bool hasVehicleSpeed;
@property (nonatomic, retain) NSData *routeID;
@property (nonatomic, retain) GEOSignGuidanceFeedback *signGuidanceFeedback;
@property (nonatomic, retain) GEOSpokenGuidanceFeedback *spokenGuidanceFeedback;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) float timeToManeuver;
@property (nonatomic) int trafficSpeed;
@property (nonatomic) float vehicleSpeed;

- (void).cxx_destruct;
- (int)StringAsTrafficSpeed:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (float)distanceToManeuver;
- (float)duration;
- (unsigned int)enrouteNoticeIndex;
- (unsigned int)eventIndex;
- (bool)hasDistanceToManeuver;
- (bool)hasDuration;
- (bool)hasEnrouteNoticeIndex;
- (bool)hasEventIndex;
- (bool)hasRouteID;
- (bool)hasSignGuidanceFeedback;
- (bool)hasSpokenGuidanceFeedback;
- (bool)hasStepID;
- (bool)hasTimeToManeuver;
- (bool)hasTrafficSpeed;
- (bool)hasVehicleSpeed;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeID;
- (void)setDistanceToManeuver:(float)arg1;
- (void)setDuration:(float)arg1;
- (void)setEnrouteNoticeIndex:(unsigned int)arg1;
- (void)setEventIndex:(unsigned int)arg1;
- (void)setHasDistanceToManeuver:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasEnrouteNoticeIndex:(bool)arg1;
- (void)setHasEventIndex:(bool)arg1;
- (void)setHasStepID:(bool)arg1;
- (void)setHasTimeToManeuver:(bool)arg1;
- (void)setHasTrafficSpeed:(bool)arg1;
- (void)setHasVehicleSpeed:(bool)arg1;
- (void)setRouteID:(id)arg1;
- (void)setSignGuidanceFeedback:(id)arg1;
- (void)setSpokenGuidanceFeedback:(id)arg1;
- (void)setStepID:(unsigned int)arg1;
- (void)setTimeToManeuver:(float)arg1;
- (void)setTrafficSpeed:(int)arg1;
- (void)setVehicleSpeed:(float)arg1;
- (id)signGuidanceFeedback;
- (id)spokenGuidanceFeedback;
- (unsigned int)stepID;
- (float)timeToManeuver;
- (int)trafficSpeed;
- (id)trafficSpeedAsString:(int)arg1;
- (float)vehicleSpeed;
- (void)writeTo:(id)arg1;

@end

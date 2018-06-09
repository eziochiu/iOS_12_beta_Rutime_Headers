/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETARoute : PBCodable <NSCopying> {
    NSMutableArray * _enrouteNotices;
    struct { 
        unsigned int historicTravelTime : 1; 
        unsigned int staticTravelTime : 1; 
        unsigned int travelTimeAggressiveEstimate : 1; 
        unsigned int travelTimeBestEstimate : 1; 
        unsigned int travelTimeConservativeEstimate : 1; 
        unsigned int isOfflineResponse : 1; 
        unsigned int routeNoLongerValid : 1; 
    }  _has;
    unsigned int  _historicTravelTime;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _incidentEndOffsetsInETARoutes;
    NSMutableArray * _incidentsOffReRoutes;
    NSMutableArray * _incidentsOnETARoutes;
    NSMutableArray * _incidentsOnReRoutes;
    NSMutableArray * _invalidSectionZilchPoints;
    bool  _isOfflineResponse;
    NSMutableArray * _reroutedRoutes;
    NSData * _routeID;
    bool  _routeNoLongerValid;
    unsigned int  _staticTravelTime;
    NSMutableArray * _steps;
    GEOTrafficBannerText * _trafficBannerText;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _trafficColorOffsets;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _trafficColors;
    unsigned int  _travelTimeAggressiveEstimate;
    unsigned int  _travelTimeBestEstimate;
    unsigned int  _travelTimeConservativeEstimate;
    NSData * _zilchPoints;
}

@property (nonatomic, retain) NSMutableArray *enrouteNotices;
@property (nonatomic, readonly) double expectedTime;
@property (nonatomic) bool hasHistoricTravelTime;
@property (nonatomic) bool hasIsOfflineResponse;
@property (nonatomic, readonly) bool hasRouteID;
@property (nonatomic) bool hasRouteNoLongerValid;
@property (nonatomic) bool hasStaticTravelTime;
@property (nonatomic, readonly) bool hasTrafficBannerText;
@property (nonatomic, readonly) bool hasTrafficIncidentAlert;
@property (nonatomic) bool hasTravelTimeAggressiveEstimate;
@property (nonatomic) bool hasTravelTimeBestEstimate;
@property (nonatomic) bool hasTravelTimeConservativeEstimate;
@property (nonatomic, readonly) bool hasValidTrafficIncidentAlertText;
@property (nonatomic, readonly) bool hasZilchPoints;
@property (nonatomic) unsigned int historicTravelTime;
@property (nonatomic, readonly) unsigned int*incidentEndOffsetsInETARoutes;
@property (nonatomic, readonly) unsigned long long incidentEndOffsetsInETARoutesCount;
@property (nonatomic, retain) NSMutableArray *incidentsOffReRoutes;
@property (nonatomic, retain) NSMutableArray *incidentsOnETARoutes;
@property (nonatomic, retain) NSMutableArray *incidentsOnReRoutes;
@property (nonatomic, retain) NSMutableArray *invalidSectionZilchPoints;
@property (nonatomic) bool isOfflineResponse;
@property (nonatomic, retain) NSMutableArray *reroutedRoutes;
@property (nonatomic, retain) NSData *routeID;
@property (nonatomic) bool routeNoLongerValid;
@property (nonatomic) unsigned int staticTravelTime;
@property (nonatomic, retain) NSMutableArray *steps;
@property (nonatomic, retain) GEOTrafficBannerText *trafficBannerText;
@property (nonatomic, readonly) unsigned int*trafficColorOffsets;
@property (nonatomic, readonly) unsigned long long trafficColorOffsetsCount;
@property (nonatomic, readonly) unsigned int*trafficColors;
@property (nonatomic, readonly) unsigned long long trafficColorsCount;
@property (nonatomic) unsigned int travelTimeAggressiveEstimate;
@property (nonatomic) unsigned int travelTimeBestEstimate;
@property (nonatomic) unsigned int travelTimeConservativeEstimate;
@property (nonatomic, retain) NSData *zilchPoints;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (Class)enrouteNoticeType;
+ (Class)incidentsOffReRoutesType;
+ (Class)incidentsOnETARouteType;
+ (Class)incidentsOnReRoutesType;
+ (Class)invalidSectionZilchPointsType;
+ (Class)reroutedRouteType;
+ (Class)stepType;

- (void).cxx_destruct;
- (void)_addDebugArguments:(id)arg1;
- (void)addEnrouteNotice:(id)arg1;
- (void)addIncidentEndOffsetsInETARoute:(unsigned int)arg1;
- (void)addIncidentsOffReRoutes:(id)arg1;
- (void)addIncidentsOnETARoute:(id)arg1;
- (void)addIncidentsOnReRoutes:(id)arg1;
- (void)addInvalidSectionZilchPoints:(id)arg1;
- (void)addReroutedRoute:(id)arg1;
- (void)addStep:(id)arg1;
- (void)addTrafficColor:(unsigned int)arg1;
- (void)addTrafficColorOffset:(unsigned int)arg1;
- (id)bannerDescription;
- (id)bannerSpoken;
- (id)bannerTitle;
- (void)clearEnrouteNotices;
- (void)clearIncidentEndOffsetsInETARoutes;
- (void)clearIncidentsOffReRoutes;
- (void)clearIncidentsOnETARoutes;
- (void)clearIncidentsOnReRoutes;
- (void)clearInvalidSectionZilchPoints;
- (void)clearReroutedRoutes;
- (void)clearSteps;
- (void)clearTrafficColorOffsets;
- (void)clearTrafficColors;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)enrouteNoticeAtIndex:(unsigned long long)arg1;
- (id)enrouteNotices;
- (unsigned long long)enrouteNoticesCount;
- (double)expectedTime;
- (bool)hasHistoricTravelTime;
- (bool)hasIsOfflineResponse;
- (bool)hasRouteID;
- (bool)hasRouteNoLongerValid;
- (bool)hasStaticTravelTime;
- (bool)hasTrafficBannerText;
- (bool)hasTravelTimeAggressiveEstimate;
- (bool)hasTravelTimeBestEstimate;
- (bool)hasTravelTimeConservativeEstimate;
- (bool)hasZilchPoints;
- (unsigned long long)hash;
- (unsigned int)historicTravelTime;
- (unsigned int)incidentEndOffsetsInETARouteAtIndex:(unsigned long long)arg1;
- (unsigned int*)incidentEndOffsetsInETARoutes;
- (unsigned long long)incidentEndOffsetsInETARoutesCount;
- (id)incidentsOffReRoutes;
- (id)incidentsOffReRoutesAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsOffReRoutesCount;
- (id)incidentsOnETARouteAtIndex:(unsigned long long)arg1;
- (id)incidentsOnETARoutes;
- (unsigned long long)incidentsOnETARoutesCount;
- (id)incidentsOnReRoutes;
- (id)incidentsOnReRoutesAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsOnReRoutesCount;
- (id)invalidSectionZilchPoints;
- (id)invalidSectionZilchPointsAtIndex:(unsigned long long)arg1;
- (unsigned long long)invalidSectionZilchPointsCount;
- (bool)isEqual:(id)arg1;
- (bool)isOfflineResponse;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)remainingTimeAlongRoute:(unsigned int)arg1 currentStepRemainingDistance:(double)arg2;
- (id)reroutedRouteAtIndex:(unsigned long long)arg1;
- (id)reroutedRoutes;
- (unsigned long long)reroutedRoutesCount;
- (id)routeID;
- (bool)routeNoLongerValid;
- (void)setDebugBannerTitle:(id)arg1 bannerDescription:(id)arg2 bannerSpoken:(id)arg3;
- (void)setEnrouteNotices:(id)arg1;
- (void)setHasHistoricTravelTime:(bool)arg1;
- (void)setHasIsOfflineResponse:(bool)arg1;
- (void)setHasRouteNoLongerValid:(bool)arg1;
- (void)setHasStaticTravelTime:(bool)arg1;
- (void)setHasTravelTimeAggressiveEstimate:(bool)arg1;
- (void)setHasTravelTimeBestEstimate:(bool)arg1;
- (void)setHasTravelTimeConservativeEstimate:(bool)arg1;
- (void)setHistoricTravelTime:(unsigned int)arg1;
- (void)setIncidentEndOffsetsInETARoutes:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setIncidentsOffReRoutes:(id)arg1;
- (void)setIncidentsOnETARoutes:(id)arg1;
- (void)setIncidentsOnReRoutes:(id)arg1;
- (void)setInvalidSectionZilchPoints:(id)arg1;
- (void)setIsOfflineResponse:(bool)arg1;
- (void)setReroutedRoutes:(id)arg1;
- (void)setRouteID:(id)arg1;
- (void)setRouteNoLongerValid:(bool)arg1;
- (void)setStaticTravelTime:(unsigned int)arg1;
- (void)setSteps:(id)arg1;
- (void)setTrafficBannerText:(id)arg1;
- (void)setTrafficColorOffsets:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTrafficColors:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setTravelTimeAggressiveEstimate:(unsigned int)arg1;
- (void)setTravelTimeBestEstimate:(unsigned int)arg1;
- (void)setTravelTimeConservativeEstimate:(unsigned int)arg1;
- (void)setZilchPoints:(id)arg1;
- (unsigned int)staticTravelTime;
- (id)stepAtIndex:(unsigned long long)arg1;
- (unsigned long long)stepIndexOfStepWithID:(unsigned int)arg1;
- (id)steps;
- (unsigned long long)stepsCount;
- (id)trafficBannerText;
- (unsigned int)trafficColorAtIndex:(unsigned long long)arg1;
- (unsigned int)trafficColorOffsetAtIndex:(unsigned long long)arg1;
- (unsigned int*)trafficColorOffsets;
- (unsigned long long)trafficColorOffsetsCount;
- (unsigned int*)trafficColors;
- (unsigned long long)trafficColorsCount;
- (unsigned int)travelTimeAggressiveEstimate;
- (unsigned int)travelTimeBestEstimate;
- (unsigned int)travelTimeConservativeEstimate;
- (void)writeTo:(id)arg1;
- (id)zilchPoints;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (bool)hasTrafficIncidentAlert;
- (bool)hasValidTrafficIncidentAlertText;
- (id)initForRoute:(id)arg1 usingETAsFromOtherRoute:(id)arg2;

@end

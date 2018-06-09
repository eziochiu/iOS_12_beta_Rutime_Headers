/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETAResultByType : PBCodable <NSCopying> {
    unsigned int  _distance;
    double  _expectedTimeOfDeparture;
    struct { 
        unsigned int expectedTimeOfDeparture : 1; 
        unsigned int distance : 1; 
        unsigned int historicTravelTime : 1; 
        unsigned int staticTravelTime : 1; 
        unsigned int status : 1; 
        unsigned int transportType : 1; 
        unsigned int travelTimeAggressiveEstimate : 1; 
        unsigned int travelTimeBestEstimate : 1; 
        unsigned int travelTimeConservativeEstimate : 1; 
    }  _has;
    unsigned int  _historicTravelTime;
    GEORouteTrafficDetail * _routeTrafficDetail;
    GEOShortTrafficSummary * _shortTrafficSummary;
    unsigned int  _staticTravelTime;
    int  _status;
    NSMutableArray * _summaryForPredictedDestinations;
    int  _transportType;
    unsigned int  _travelTimeAggressiveEstimate;
    unsigned int  _travelTimeBestEstimate;
    unsigned int  _travelTimeConservativeEstimate;
}

@property (nonatomic) unsigned int distance;
@property (nonatomic) double expectedTimeOfDeparture;
@property (nonatomic) bool hasDistance;
@property (nonatomic) bool hasExpectedTimeOfDeparture;
@property (nonatomic) bool hasHistoricTravelTime;
@property (nonatomic, readonly) bool hasRouteTrafficDetail;
@property (nonatomic, readonly) bool hasShortTrafficSummary;
@property (nonatomic) bool hasStaticTravelTime;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasTransportType;
@property (nonatomic) bool hasTravelTimeAggressiveEstimate;
@property (nonatomic) bool hasTravelTimeBestEstimate;
@property (nonatomic) bool hasTravelTimeConservativeEstimate;
@property (nonatomic) unsigned int historicTravelTime;
@property (nonatomic, retain) GEORouteTrafficDetail *routeTrafficDetail;
@property (nonatomic, retain) GEOShortTrafficSummary *shortTrafficSummary;
@property (nonatomic) unsigned int staticTravelTime;
@property (nonatomic) int status;
@property (nonatomic, retain) NSMutableArray *summaryForPredictedDestinations;
@property (nonatomic) int transportType;
@property (nonatomic) unsigned int travelTimeAggressiveEstimate;
@property (nonatomic) unsigned int travelTimeBestEstimate;
@property (nonatomic) unsigned int travelTimeConservativeEstimate;

+ (Class)summaryForPredictedDestinationType;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (int)StringAsTransportType:(id)arg1;
- (void)addSummaryForPredictedDestination:(id)arg1;
- (void)clearSummaryForPredictedDestinations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)distance;
- (double)expectedTimeOfDeparture;
- (bool)hasDistance;
- (bool)hasExpectedTimeOfDeparture;
- (bool)hasHistoricTravelTime;
- (bool)hasRouteTrafficDetail;
- (bool)hasShortTrafficSummary;
- (bool)hasStaticTravelTime;
- (bool)hasStatus;
- (bool)hasTransportType;
- (bool)hasTravelTimeAggressiveEstimate;
- (bool)hasTravelTimeBestEstimate;
- (bool)hasTravelTimeConservativeEstimate;
- (unsigned long long)hash;
- (unsigned int)historicTravelTime;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeTrafficDetail;
- (void)setDistance:(unsigned int)arg1;
- (void)setExpectedTimeOfDeparture:(double)arg1;
- (void)setHasDistance:(bool)arg1;
- (void)setHasExpectedTimeOfDeparture:(bool)arg1;
- (void)setHasHistoricTravelTime:(bool)arg1;
- (void)setHasStaticTravelTime:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setHasTravelTimeAggressiveEstimate:(bool)arg1;
- (void)setHasTravelTimeBestEstimate:(bool)arg1;
- (void)setHasTravelTimeConservativeEstimate:(bool)arg1;
- (void)setHistoricTravelTime:(unsigned int)arg1;
- (void)setRouteTrafficDetail:(id)arg1;
- (void)setShortTrafficSummary:(id)arg1;
- (void)setStaticTravelTime:(unsigned int)arg1;
- (void)setStatus:(int)arg1;
- (void)setSummaryForPredictedDestinations:(id)arg1;
- (void)setTransportType:(int)arg1;
- (void)setTravelTimeAggressiveEstimate:(unsigned int)arg1;
- (void)setTravelTimeBestEstimate:(unsigned int)arg1;
- (void)setTravelTimeConservativeEstimate:(unsigned int)arg1;
- (id)shortTrafficSummary;
- (unsigned int)staticTravelTime;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)summaryForPredictedDestinationAtIndex:(unsigned long long)arg1;
- (id)summaryForPredictedDestinations;
- (unsigned long long)summaryForPredictedDestinationsCount;
- (int)transportType;
- (id)transportTypeAsString:(int)arg1;
- (unsigned int)travelTimeAggressiveEstimate;
- (unsigned int)travelTimeBestEstimate;
- (unsigned int)travelTimeConservativeEstimate;
- (void)writeTo:(id)arg1;

@end

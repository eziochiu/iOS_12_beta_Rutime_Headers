/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTimeToLeaveHypothesisFeedbackCollection : PBCodable <NSCopying> {
    int  _arrival;
    int  _departure;
    double  _earliestArrivalOffset;
    double  _earliestDepartureOffset;
    struct { 
        unsigned int earliestArrivalOffset : 1; 
        unsigned int earliestDepartureOffset : 1; 
        unsigned int latestArrivalOffset : 1; 
        unsigned int latestDepartureOffset : 1; 
        unsigned int arrival : 1; 
        unsigned int departure : 1; 
        unsigned int numberOfReroutes : 1; 
        unsigned int uiNotification : 1; 
    }  _has;
    double  _latestArrivalOffset;
    double  _latestDepartureOffset;
    unsigned int  _numberOfReroutes;
    int  _uiNotification;
}

@property (nonatomic) int arrival;
@property (nonatomic) int departure;
@property (nonatomic) double earliestArrivalOffset;
@property (nonatomic) double earliestDepartureOffset;
@property (nonatomic) bool hasArrival;
@property (nonatomic) bool hasDeparture;
@property (nonatomic) bool hasEarliestArrivalOffset;
@property (nonatomic) bool hasEarliestDepartureOffset;
@property (nonatomic) bool hasLatestArrivalOffset;
@property (nonatomic) bool hasLatestDepartureOffset;
@property (nonatomic) bool hasNumberOfReroutes;
@property (nonatomic) bool hasUiNotification;
@property (nonatomic) double latestArrivalOffset;
@property (nonatomic) double latestDepartureOffset;
@property (nonatomic) unsigned int numberOfReroutes;
@property (nonatomic) int uiNotification;

- (int)StringAsArrival:(id)arg1;
- (int)StringAsDeparture:(id)arg1;
- (int)StringAsUiNotification:(id)arg1;
- (int)arrival;
- (id)arrivalAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)departure;
- (id)departureAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)earliestArrivalOffset;
- (double)earliestDepartureOffset;
- (bool)hasArrival;
- (bool)hasDeparture;
- (bool)hasEarliestArrivalOffset;
- (bool)hasEarliestDepartureOffset;
- (bool)hasLatestArrivalOffset;
- (bool)hasLatestDepartureOffset;
- (bool)hasNumberOfReroutes;
- (bool)hasUiNotification;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)latestArrivalOffset;
- (double)latestDepartureOffset;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfReroutes;
- (bool)readFrom:(id)arg1;
- (void)setArrival:(int)arg1;
- (void)setDeparture:(int)arg1;
- (void)setEarliestArrivalOffset:(double)arg1;
- (void)setEarliestDepartureOffset:(double)arg1;
- (void)setHasArrival:(bool)arg1;
- (void)setHasDeparture:(bool)arg1;
- (void)setHasEarliestArrivalOffset:(bool)arg1;
- (void)setHasEarliestDepartureOffset:(bool)arg1;
- (void)setHasLatestArrivalOffset:(bool)arg1;
- (void)setHasLatestDepartureOffset:(bool)arg1;
- (void)setHasNumberOfReroutes:(bool)arg1;
- (void)setHasUiNotification:(bool)arg1;
- (void)setLatestArrivalOffset:(double)arg1;
- (void)setLatestDepartureOffset:(double)arg1;
- (void)setNumberOfReroutes:(unsigned int)arg1;
- (void)setUiNotification:(int)arg1;
- (int)uiNotification;
- (id)uiNotificationAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOGuidanceEvent : PBCodable <NSCopying> {
    int  _distanceZilchIndex;
    int  _endValidDistance;
    int  _eventType;
    struct { 
        unsigned int maxSpeed : 1; 
        unsigned int minSpeed : 1; 
        unsigned int distanceZilchIndex : 1; 
        unsigned int endValidDistance : 1; 
        unsigned int eventType : 1; 
        unsigned int identifier : 1; 
        unsigned int offsetForDistanceString : 1; 
        unsigned int startValidDistance : 1; 
        unsigned int sticky : 1; 
    }  _has;
    unsigned int  _identifier;
    GEOVisualLaneGuidance * _laneGuidance;
    double  _maxSpeed;
    double  _minSpeed;
    int  _offsetForDistanceString;
    GEOSignGuidance * _signGuidance;
    GEOSpokenGuidance * _spokenGuidance;
    int  _startValidDistance;
    bool  _sticky;
}

@property (nonatomic) int distanceZilchIndex;
@property (nonatomic) int endValidDistance;
@property (nonatomic) int eventType;
@property (nonatomic) bool hasDistanceZilchIndex;
@property (nonatomic) bool hasEndValidDistance;
@property (nonatomic) bool hasEventType;
@property (nonatomic) bool hasIdentifier;
@property (nonatomic, readonly) bool hasLaneGuidance;
@property (nonatomic) bool hasMaxSpeed;
@property (nonatomic) bool hasMinSpeed;
@property (nonatomic) bool hasOffsetForDistanceString;
@property (nonatomic, readonly) bool hasSignGuidance;
@property (nonatomic, readonly) bool hasSpokenGuidance;
@property (nonatomic) bool hasStartValidDistance;
@property (nonatomic) bool hasSticky;
@property (nonatomic) unsigned int identifier;
@property (nonatomic, retain) GEOVisualLaneGuidance *laneGuidance;
@property (nonatomic) double maxSpeed;
@property (nonatomic) double minSpeed;
@property (nonatomic) int offsetForDistanceString;
@property (nonatomic, retain) GEOSignGuidance *signGuidance;
@property (nonatomic, retain) GEOSpokenGuidance *spokenGuidance;
@property (nonatomic) int startValidDistance;
@property (nonatomic) bool sticky;

- (void).cxx_destruct;
- (int)StringAsEventType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)distanceZilchIndex;
- (int)endValidDistance;
- (int)eventType;
- (id)eventTypeAsString:(int)arg1;
- (bool)hasDistanceZilchIndex;
- (bool)hasEndValidDistance;
- (bool)hasEventType;
- (bool)hasIdentifier;
- (bool)hasLaneGuidance;
- (bool)hasMaxSpeed;
- (bool)hasMinSpeed;
- (bool)hasOffsetForDistanceString;
- (bool)hasSignGuidance;
- (bool)hasSpokenGuidance;
- (bool)hasStartValidDistance;
- (bool)hasSticky;
- (unsigned long long)hash;
- (unsigned int)identifier;
- (bool)isEqual:(id)arg1;
- (id)laneGuidance;
- (double)maxSpeed;
- (void)mergeFrom:(id)arg1;
- (double)minSpeed;
- (int)offsetForDistanceString;
- (bool)readFrom:(id)arg1;
- (void)setDistanceZilchIndex:(int)arg1;
- (void)setEndValidDistance:(int)arg1;
- (void)setEventType:(int)arg1;
- (void)setHasDistanceZilchIndex:(bool)arg1;
- (void)setHasEndValidDistance:(bool)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasIdentifier:(bool)arg1;
- (void)setHasMaxSpeed:(bool)arg1;
- (void)setHasMinSpeed:(bool)arg1;
- (void)setHasOffsetForDistanceString:(bool)arg1;
- (void)setHasStartValidDistance:(bool)arg1;
- (void)setHasSticky:(bool)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setLaneGuidance:(id)arg1;
- (void)setMaxSpeed:(double)arg1;
- (void)setMinSpeed:(double)arg1;
- (void)setOffsetForDistanceString:(int)arg1;
- (void)setSignGuidance:(id)arg1;
- (void)setSpokenGuidance:(id)arg1;
- (void)setStartValidDistance:(int)arg1;
- (void)setSticky:(bool)arg1;
- (id)signGuidance;
- (id)spokenGuidance;
- (int)startValidDistance;
- (bool)sticky;
- (void)writeTo:(id)arg1;

@end

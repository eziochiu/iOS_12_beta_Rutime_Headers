/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCompanionStep : PBCodable <NSCopying> {
    unsigned int  _distance;
    GEOCompanionDriveStep * _driveStep;
    unsigned int  _endCoordinateIndex;
    GEOCompanionFerryStep * _ferryStep;
    struct { 
        unsigned int distance : 1; 
        unsigned int endCoordinateIndex : 1; 
        unsigned int maneuverStartCoordinateIndex : 1; 
        unsigned int startCoordinateIndex : 1; 
        unsigned int stepID : 1; 
        unsigned int time : 1; 
    }  _has;
    NSMutableArray * _instructionWithAlternatives;
    NSString * _listInstruction;
    unsigned int  _maneuverStartCoordinateIndex;
    NSString * _roadName;
    unsigned int  _startCoordinateIndex;
    unsigned int  _stepID;
    unsigned int  _time;
    GEOCompanionWalkStep * _walkStep;
}

@property (nonatomic) unsigned int distance;
@property (nonatomic, retain) GEOCompanionDriveStep *driveStep;
@property (nonatomic) unsigned int endCoordinateIndex;
@property (nonatomic, retain) GEOCompanionFerryStep *ferryStep;
@property (nonatomic) bool hasDistance;
@property (nonatomic, readonly) bool hasDriveStep;
@property (nonatomic) bool hasEndCoordinateIndex;
@property (nonatomic, readonly) bool hasFerryStep;
@property (nonatomic, readonly) bool hasListInstruction;
@property (nonatomic) bool hasManeuverStartCoordinateIndex;
@property (nonatomic, readonly) bool hasRoadName;
@property (nonatomic) bool hasStartCoordinateIndex;
@property (nonatomic) bool hasStepID;
@property (nonatomic) bool hasTime;
@property (nonatomic, readonly) bool hasWalkStep;
@property (nonatomic, retain) NSMutableArray *instructionWithAlternatives;
@property (nonatomic, retain) NSString *listInstruction;
@property (nonatomic) unsigned int maneuverStartCoordinateIndex;
@property (nonatomic, retain) NSString *roadName;
@property (nonatomic) unsigned int startCoordinateIndex;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) unsigned int time;
@property (nonatomic, retain) GEOCompanionWalkStep *walkStep;

+ (Class)instructionWithAlternativesType;

- (void).cxx_destruct;
- (void)addInstructionWithAlternatives:(id)arg1;
- (void)clearInstructionWithAlternatives;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)distance;
- (id)driveStep;
- (unsigned int)endCoordinateIndex;
- (id)ferryStep;
- (id)geoStep;
- (bool)hasDistance;
- (bool)hasDriveStep;
- (bool)hasEndCoordinateIndex;
- (bool)hasFerryStep;
- (bool)hasListInstruction;
- (bool)hasManeuverStartCoordinateIndex;
- (bool)hasRoadName;
- (bool)hasStartCoordinateIndex;
- (bool)hasStepID;
- (bool)hasTime;
- (bool)hasWalkStep;
- (unsigned long long)hash;
- (id)initWithStep:(id)arg1 route:(id)arg2 stringFormatter:(id)arg3;
- (id)instructionWithAlternatives;
- (id)instructionWithAlternativesAtIndex:(unsigned long long)arg1;
- (unsigned long long)instructionWithAlternativesCount;
- (bool)isEqual:(id)arg1;
- (id)listInstruction;
- (unsigned int)maneuverStartCoordinateIndex;
- (id)maneuverStep;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)roadName;
- (void)setDistance:(unsigned int)arg1;
- (void)setDriveStep:(id)arg1;
- (void)setEndCoordinateIndex:(unsigned int)arg1;
- (void)setFerryStep:(id)arg1;
- (void)setHasDistance:(bool)arg1;
- (void)setHasEndCoordinateIndex:(bool)arg1;
- (void)setHasManeuverStartCoordinateIndex:(bool)arg1;
- (void)setHasStartCoordinateIndex:(bool)arg1;
- (void)setHasStepID:(bool)arg1;
- (void)setHasTime:(bool)arg1;
- (void)setInstructionWithAlternatives:(id)arg1;
- (void)setListInstruction:(id)arg1;
- (void)setManeuverStartCoordinateIndex:(unsigned int)arg1;
- (void)setRoadName:(id)arg1;
- (void)setStartCoordinateIndex:(unsigned int)arg1;
- (void)setStepID:(unsigned int)arg1;
- (void)setTime:(unsigned int)arg1;
- (void)setWalkStep:(id)arg1;
- (unsigned int)startCoordinateIndex;
- (unsigned int)stepID;
- (unsigned int)time;
- (id)walkStep;
- (void)writeTo:(id)arg1;

@end

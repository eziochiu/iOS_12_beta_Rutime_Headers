/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPIndoorCMPedometer : PBCodable <NSCopying> {
    float  _activeTime;
    float  _distance;
    double  _firstStepTime;
    int  _floorsAscended;
    int  _floorsDescended;
    struct { 
        unsigned int firstStepTime : 1; 
        unsigned int timestamp : 1; 
        unsigned int activeTime : 1; 
        unsigned int distance : 1; 
        unsigned int floorsAscended : 1; 
        unsigned int floorsDescended : 1; 
        unsigned int numberOfSteps : 1; 
    }  _has;
    int  _numberOfSteps;
    double  _timestamp;
}

@property (nonatomic) float activeTime;
@property (nonatomic) float distance;
@property (nonatomic) double firstStepTime;
@property (nonatomic) int floorsAscended;
@property (nonatomic) int floorsDescended;
@property (nonatomic) bool hasActiveTime;
@property (nonatomic) bool hasDistance;
@property (nonatomic) bool hasFirstStepTime;
@property (nonatomic) bool hasFloorsAscended;
@property (nonatomic) bool hasFloorsDescended;
@property (nonatomic) bool hasNumberOfSteps;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int numberOfSteps;
@property (nonatomic) double timestamp;

- (float)activeTime;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (float)distance;
- (double)firstStepTime;
- (int)floorsAscended;
- (int)floorsDescended;
- (bool)hasActiveTime;
- (bool)hasDistance;
- (bool)hasFirstStepTime;
- (bool)hasFloorsAscended;
- (bool)hasFloorsDescended;
- (bool)hasNumberOfSteps;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)numberOfSteps;
- (bool)readFrom:(id)arg1;
- (void)setActiveTime:(float)arg1;
- (void)setDistance:(float)arg1;
- (void)setFirstStepTime:(double)arg1;
- (void)setFloorsAscended:(int)arg1;
- (void)setFloorsDescended:(int)arg1;
- (void)setHasActiveTime:(bool)arg1;
- (void)setHasDistance:(bool)arg1;
- (void)setHasFirstStepTime:(bool)arg1;
- (void)setHasFloorsAscended:(bool)arg1;
- (void)setHasFloorsDescended:(bool)arg1;
- (void)setHasNumberOfSteps:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setNumberOfSteps:(int)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end

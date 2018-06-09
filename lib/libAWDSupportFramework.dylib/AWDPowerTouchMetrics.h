/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerTouchMetrics : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int tocuhTotalUserInteractionDuration : 1; 
        unsigned int touchStateActiveDuration : 1; 
        unsigned int touchStateAnticipateDuration : 1; 
        unsigned int touchStateOffDuration : 1; 
        unsigned int touchStateOnDuration : 1; 
        unsigned int touchStateOthersDuration : 1; 
        unsigned int touchStateReadyDuration : 1; 
        unsigned int touchTotalPowerMicroWatt : 1; 
        unsigned int touchTotalUserTouchCount : 1; 
    }  _has;
    unsigned long long  _timestamp;
    unsigned int  _tocuhTotalUserInteractionDuration;
    unsigned int  _touchStateActiveDuration;
    unsigned int  _touchStateAnticipateDuration;
    unsigned int  _touchStateOffDuration;
    unsigned int  _touchStateOnDuration;
    unsigned int  _touchStateOthersDuration;
    unsigned int  _touchStateReadyDuration;
    unsigned int  _touchTotalPowerMicroWatt;
    unsigned int  _touchTotalUserTouchCount;
}

@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTocuhTotalUserInteractionDuration;
@property (nonatomic) bool hasTouchStateActiveDuration;
@property (nonatomic) bool hasTouchStateAnticipateDuration;
@property (nonatomic) bool hasTouchStateOffDuration;
@property (nonatomic) bool hasTouchStateOnDuration;
@property (nonatomic) bool hasTouchStateOthersDuration;
@property (nonatomic) bool hasTouchStateReadyDuration;
@property (nonatomic) bool hasTouchTotalPowerMicroWatt;
@property (nonatomic) bool hasTouchTotalUserTouchCount;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int tocuhTotalUserInteractionDuration;
@property (nonatomic) unsigned int touchStateActiveDuration;
@property (nonatomic) unsigned int touchStateAnticipateDuration;
@property (nonatomic) unsigned int touchStateOffDuration;
@property (nonatomic) unsigned int touchStateOnDuration;
@property (nonatomic) unsigned int touchStateOthersDuration;
@property (nonatomic) unsigned int touchStateReadyDuration;
@property (nonatomic) unsigned int touchTotalPowerMicroWatt;
@property (nonatomic) unsigned int touchTotalUserTouchCount;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (bool)hasTocuhTotalUserInteractionDuration;
- (bool)hasTouchStateActiveDuration;
- (bool)hasTouchStateAnticipateDuration;
- (bool)hasTouchStateOffDuration;
- (bool)hasTouchStateOnDuration;
- (bool)hasTouchStateOthersDuration;
- (bool)hasTouchStateReadyDuration;
- (bool)hasTouchTotalPowerMicroWatt;
- (bool)hasTouchTotalUserTouchCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTocuhTotalUserInteractionDuration:(bool)arg1;
- (void)setHasTouchStateActiveDuration:(bool)arg1;
- (void)setHasTouchStateAnticipateDuration:(bool)arg1;
- (void)setHasTouchStateOffDuration:(bool)arg1;
- (void)setHasTouchStateOnDuration:(bool)arg1;
- (void)setHasTouchStateOthersDuration:(bool)arg1;
- (void)setHasTouchStateReadyDuration:(bool)arg1;
- (void)setHasTouchTotalPowerMicroWatt:(bool)arg1;
- (void)setHasTouchTotalUserTouchCount:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTocuhTotalUserInteractionDuration:(unsigned int)arg1;
- (void)setTouchStateActiveDuration:(unsigned int)arg1;
- (void)setTouchStateAnticipateDuration:(unsigned int)arg1;
- (void)setTouchStateOffDuration:(unsigned int)arg1;
- (void)setTouchStateOnDuration:(unsigned int)arg1;
- (void)setTouchStateOthersDuration:(unsigned int)arg1;
- (void)setTouchStateReadyDuration:(unsigned int)arg1;
- (void)setTouchTotalPowerMicroWatt:(unsigned int)arg1;
- (void)setTouchTotalUserTouchCount:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)tocuhTotalUserInteractionDuration;
- (unsigned int)touchStateActiveDuration;
- (unsigned int)touchStateAnticipateDuration;
- (unsigned int)touchStateOffDuration;
- (unsigned int)touchStateOnDuration;
- (unsigned int)touchStateOthersDuration;
- (unsigned int)touchStateReadyDuration;
- (unsigned int)touchTotalPowerMicroWatt;
- (unsigned int)touchTotalUserTouchCount;
- (void)writeTo:(id)arg1;

@end

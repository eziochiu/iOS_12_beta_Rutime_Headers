/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDEventKitSyncIsNotifiableEvent : PBCodable <NSCopying> {
    unsigned long long  _deltaProcessingTime;
    unsigned long long  _deltaTransitTime;
    struct { 
        unsigned int deltaProcessingTime : 1; 
        unsigned int deltaTransitTime : 1; 
        unsigned int timestamp : 1; 
        unsigned int willTriggerNotification : 1; 
    }  _has;
    NSString * _reason;
    unsigned long long  _timestamp;
    bool  _willTriggerNotification;
}

@property (nonatomic) unsigned long long deltaProcessingTime;
@property (nonatomic) unsigned long long deltaTransitTime;
@property (nonatomic) bool hasDeltaProcessingTime;
@property (nonatomic) bool hasDeltaTransitTime;
@property (nonatomic, readonly) bool hasReason;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasWillTriggerNotification;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) bool willTriggerNotification;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)deltaProcessingTime;
- (unsigned long long)deltaTransitTime;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDeltaProcessingTime;
- (bool)hasDeltaTransitTime;
- (bool)hasReason;
- (bool)hasTimestamp;
- (bool)hasWillTriggerNotification;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)reason;
- (void)setDeltaProcessingTime:(unsigned long long)arg1;
- (void)setDeltaTransitTime:(unsigned long long)arg1;
- (void)setHasDeltaProcessingTime:(bool)arg1;
- (void)setHasDeltaTransitTime:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWillTriggerNotification:(bool)arg1;
- (void)setReason:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWillTriggerNotification:(bool)arg1;
- (unsigned long long)timestamp;
- (bool)willTriggerNotification;
- (void)writeTo:(id)arg1;

@end

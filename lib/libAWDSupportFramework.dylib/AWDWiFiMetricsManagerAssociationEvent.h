/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerAssociationEvent : PBCodable <NSCopying> {
    AWDWiFiMetricsManagerEvent * _eventInfo;
    int  _eventType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int eventType : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) AWDWiFiMetricsManagerEvent *eventInfo;
@property (nonatomic) int eventType;
@property (nonatomic, readonly) bool hasEventInfo;
@property (nonatomic) bool hasEventType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsEventType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventInfo;
- (int)eventType;
- (id)eventTypeAsString:(int)arg1;
- (bool)hasEventInfo;
- (bool)hasEventType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEventInfo:(id)arg1;
- (void)setEventType:(int)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitAddEventTrigger : PBCodable <NSCopying> {
    AWDHomeKitEventTrigger * _eventTrigger;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int requestOrigin : 1; 
        unsigned int resultErrorCode : 1; 
    }  _has;
    int  _requestOrigin;
    unsigned int  _resultErrorCode;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) AWDHomeKitEventTrigger *eventTrigger;
@property (nonatomic, readonly) bool hasEventTrigger;
@property (nonatomic) bool hasRequestOrigin;
@property (nonatomic) bool hasResultErrorCode;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int requestOrigin;
@property (nonatomic) unsigned int resultErrorCode;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (int)StringAsRequestOrigin:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventTrigger;
- (bool)hasEventTrigger;
- (bool)hasRequestOrigin;
- (bool)hasResultErrorCode;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)requestOrigin;
- (id)requestOriginAsString:(int)arg1;
- (unsigned int)resultErrorCode;
- (void)setEventTrigger:(id)arg1;
- (void)setHasRequestOrigin:(bool)arg1;
- (void)setHasResultErrorCode:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setRequestOrigin:(int)arg1;
- (void)setResultErrorCode:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

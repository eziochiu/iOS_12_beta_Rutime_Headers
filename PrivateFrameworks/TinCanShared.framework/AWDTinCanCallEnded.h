/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
 */

@interface AWDTinCanCallEnded : PBCodable <NSCopying> {
    unsigned long long  _contactHash;
    NSString * _csdCallUUID;
    unsigned int  _disconnectedReason;
    NSMutableArray * _events;
    struct { 
        unsigned int contactHash : 1; 
        unsigned int timestamp : 1; 
        unsigned int disconnectedReason : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long contactHash;
@property (nonatomic, retain) NSString *csdCallUUID;
@property (nonatomic) unsigned int disconnectedReason;
@property (nonatomic, retain) NSMutableArray *events;
@property (nonatomic) bool hasContactHash;
@property (nonatomic, readonly) bool hasCsdCallUUID;
@property (nonatomic) bool hasDisconnectedReason;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

+ (Class)eventsType;

- (void).cxx_destruct;
- (void)addEvents:(id)arg1;
- (void)clearEvents;
- (unsigned long long)contactHash;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)csdCallUUID;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)disconnectedReason;
- (id)events;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (bool)hasContactHash;
- (bool)hasCsdCallUUID;
- (bool)hasDisconnectedReason;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContactHash:(unsigned long long)arg1;
- (void)setCsdCallUUID:(id)arg1;
- (void)setDisconnectedReason:(unsigned int)arg1;
- (void)setEvents:(id)arg1;
- (void)setHasContactHash:(bool)arg1;
- (void)setHasDisconnectedReason:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

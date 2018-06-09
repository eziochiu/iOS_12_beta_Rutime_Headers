/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDBltDelayAckFromSecondaryDevice : PBCodable <NSCopying> {
    unsigned int  _connectionType;
    unsigned int  _delayMs;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int delayMs : 1; 
        unsigned int origSendConnectionType : 1; 
        unsigned int timedout : 1; 
    }  _has;
    unsigned int  _origSendConnectionType;
    bool  _timedout;
    unsigned long long  _timestamp;
    NSString * _uniqueid;
}

@property (nonatomic) unsigned int connectionType;
@property (nonatomic) unsigned int delayMs;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic) bool hasDelayMs;
@property (nonatomic) bool hasOrigSendConnectionType;
@property (nonatomic) bool hasTimedout;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasUniqueid;
@property (nonatomic) unsigned int origSendConnectionType;
@property (nonatomic) bool timedout;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *uniqueid;

- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)delayMs;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConnectionType;
- (bool)hasDelayMs;
- (bool)hasOrigSendConnectionType;
- (bool)hasTimedout;
- (bool)hasTimestamp;
- (bool)hasUniqueid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)origSendConnectionType;
- (bool)readFrom:(id)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setDelayMs:(unsigned int)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasDelayMs:(bool)arg1;
- (void)setHasOrigSendConnectionType:(bool)arg1;
- (void)setHasTimedout:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setOrigSendConnectionType:(unsigned int)arg1;
- (void)setTimedout:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUniqueid:(id)arg1;
- (bool)timedout;
- (unsigned long long)timestamp;
- (id)uniqueid;
- (void)writeTo:(id)arg1;

@end

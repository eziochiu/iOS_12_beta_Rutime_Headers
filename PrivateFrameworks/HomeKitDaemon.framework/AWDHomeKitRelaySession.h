/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitRelaySession : PBCodable <NSCopying> {
    int  _actionType;
    unsigned int  _duration;
    int  _errorCode;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int actionType : 1; 
        unsigned int duration : 1; 
        unsigned int errorCode : 1; 
        unsigned int statusCode : 1; 
    }  _has;
    int  _statusCode;
    unsigned long long  _timestamp;
}

@property (nonatomic) int actionType;
@property (nonatomic) unsigned int duration;
@property (nonatomic) int errorCode;
@property (nonatomic) bool hasActionType;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasStatusCode;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int statusCode;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsActionType:(id)arg1;
- (int)actionType;
- (id)actionTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (int)errorCode;
- (bool)hasActionType;
- (bool)hasDuration;
- (bool)hasErrorCode;
- (bool)hasStatusCode;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActionType:(int)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setHasActionType:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setStatusCode:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (int)statusCode;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

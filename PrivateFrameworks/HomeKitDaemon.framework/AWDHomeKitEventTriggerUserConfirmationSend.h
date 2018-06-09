/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitEventTriggerUserConfirmationSend : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int resultErrorCode : 1; 
    }  _has;
    int  _resultErrorCode;
    NSString * _sessionID;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasResultErrorCode;
@property (nonatomic, readonly) bool hasSessionID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int resultErrorCode;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasResultErrorCode;
- (bool)hasSessionID;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)resultErrorCode;
- (id)sessionID;
- (void)setHasResultErrorCode:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setResultErrorCode:(int)arg1;
- (void)setSessionID:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

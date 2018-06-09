/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitRemoteLogin : PBCodable <NSCopying> {
    unsigned long long  _delay;
    struct { 
        unsigned int delay : 1; 
        unsigned int timestamp : 1; 
        unsigned int loginType : 1; 
        unsigned int requester : 1; 
        unsigned int resultErrorCode : 1; 
    }  _has;
    int  _loginType;
    int  _requester;
    int  _resultErrorCode;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long delay;
@property (nonatomic) bool hasDelay;
@property (nonatomic) bool hasLoginType;
@property (nonatomic) bool hasRequester;
@property (nonatomic) bool hasResultErrorCode;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int loginType;
@property (nonatomic) int requester;
@property (nonatomic) int resultErrorCode;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsLoginType:(id)arg1;
- (int)StringAsRequester:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)delay;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDelay;
- (bool)hasLoginType;
- (bool)hasRequester;
- (bool)hasResultErrorCode;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)loginType;
- (id)loginTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)requester;
- (id)requesterAsString:(int)arg1;
- (int)resultErrorCode;
- (void)setDelay:(unsigned long long)arg1;
- (void)setHasDelay:(bool)arg1;
- (void)setHasLoginType:(bool)arg1;
- (void)setHasRequester:(bool)arg1;
- (void)setHasResultErrorCode:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLoginType:(int)arg1;
- (void)setRequester:(int)arg1;
- (void)setResultErrorCode:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

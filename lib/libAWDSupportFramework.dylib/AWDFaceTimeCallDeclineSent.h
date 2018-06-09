/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDFaceTimeCallDeclineSent : PBCodable <NSCopying> {
    unsigned int  _declineCode;
    int  _errorCode;
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int declineCode : 1; 
        unsigned int errorCode : 1; 
        unsigned int isVideo : 1; 
        unsigned int onLockScreen : 1; 
        unsigned int sendDuration : 1; 
    }  _has;
    unsigned int  _isVideo;
    unsigned int  _onLockScreen;
    unsigned int  _sendDuration;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int declineCode;
@property (nonatomic) int errorCode;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) bool hasDeclineCode;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasIsVideo;
@property (nonatomic) bool hasOnLockScreen;
@property (nonatomic) bool hasSendDuration;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int isVideo;
@property (nonatomic) unsigned int onLockScreen;
@property (nonatomic) unsigned int sendDuration;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)declineCode;
- (id)description;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (id)guid;
- (bool)hasDeclineCode;
- (bool)hasErrorCode;
- (bool)hasGuid;
- (bool)hasIsVideo;
- (bool)hasOnLockScreen;
- (bool)hasSendDuration;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)isVideo;
- (void)mergeFrom:(id)arg1;
- (unsigned int)onLockScreen;
- (bool)readFrom:(id)arg1;
- (unsigned int)sendDuration;
- (void)setDeclineCode:(unsigned int)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasDeclineCode:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasIsVideo:(bool)arg1;
- (void)setHasOnLockScreen:(bool)arg1;
- (void)setHasSendDuration:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsVideo:(unsigned int)arg1;
- (void)setOnLockScreen:(unsigned int)arg1;
- (void)setSendDuration:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

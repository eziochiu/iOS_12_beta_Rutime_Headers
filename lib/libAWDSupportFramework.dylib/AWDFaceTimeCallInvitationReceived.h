/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDFaceTimeCallInvitationReceived : PBCodable <NSCopying> {
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int isVideo : 1; 
        unsigned int onLockScreen : 1; 
    }  _has;
    unsigned int  _isVideo;
    unsigned int  _onLockScreen;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *guid;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasIsVideo;
@property (nonatomic) bool hasOnLockScreen;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int isVideo;
@property (nonatomic) unsigned int onLockScreen;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (bool)hasGuid;
- (bool)hasIsVideo;
- (bool)hasOnLockScreen;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)isVideo;
- (void)mergeFrom:(id)arg1;
- (unsigned int)onLockScreen;
- (bool)readFrom:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasIsVideo:(bool)arg1;
- (void)setHasOnLockScreen:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsVideo:(unsigned int)arg1;
- (void)setOnLockScreen:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

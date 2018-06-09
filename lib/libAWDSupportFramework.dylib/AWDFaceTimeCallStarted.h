/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDFaceTimeCallStarted : PBCodable <NSCopying> {
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int isCallUpgrade : 1; 
        unsigned int isToEmail : 1; 
        unsigned int isToPhoneNumber : 1; 
        unsigned int isVideo : 1; 
        unsigned int onLockScreen : 1; 
    }  _has;
    unsigned int  _isCallUpgrade;
    unsigned int  _isToEmail;
    unsigned int  _isToPhoneNumber;
    unsigned int  _isVideo;
    unsigned int  _onLockScreen;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *guid;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasIsCallUpgrade;
@property (nonatomic) bool hasIsToEmail;
@property (nonatomic) bool hasIsToPhoneNumber;
@property (nonatomic) bool hasIsVideo;
@property (nonatomic) bool hasOnLockScreen;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int isCallUpgrade;
@property (nonatomic) unsigned int isToEmail;
@property (nonatomic) unsigned int isToPhoneNumber;
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
- (bool)hasIsCallUpgrade;
- (bool)hasIsToEmail;
- (bool)hasIsToPhoneNumber;
- (bool)hasIsVideo;
- (bool)hasOnLockScreen;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (unsigned int)isCallUpgrade;
- (bool)isEqual:(id)arg1;
- (unsigned int)isToEmail;
- (unsigned int)isToPhoneNumber;
- (unsigned int)isVideo;
- (void)mergeFrom:(id)arg1;
- (unsigned int)onLockScreen;
- (bool)readFrom:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasIsCallUpgrade:(bool)arg1;
- (void)setHasIsToEmail:(bool)arg1;
- (void)setHasIsToPhoneNumber:(bool)arg1;
- (void)setHasIsVideo:(bool)arg1;
- (void)setHasOnLockScreen:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsCallUpgrade:(unsigned int)arg1;
- (void)setIsToEmail:(unsigned int)arg1;
- (void)setIsToPhoneNumber:(unsigned int)arg1;
- (void)setIsVideo:(unsigned int)arg1;
- (void)setOnLockScreen:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
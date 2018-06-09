/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCSERestrictedModeEnteredEvent : PBCodable <NSCopying> {
    NSData * _attackLog;
    bool  _contactless;
    unsigned int  _hardwareType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int hardwareType : 1; 
        unsigned int contactless : 1; 
    }  _has;
    NSString * _platformIdentifier;
    NSData * _restrictedModeUUID;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSData *attackLog;
@property (nonatomic) bool contactless;
@property (nonatomic) unsigned int hardwareType;
@property (nonatomic, readonly) bool hasAttackLog;
@property (nonatomic) bool hasContactless;
@property (nonatomic) bool hasHardwareType;
@property (nonatomic, readonly) bool hasPlatformIdentifier;
@property (nonatomic, readonly) bool hasRestrictedModeUUID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *platformIdentifier;
@property (nonatomic, retain) NSData *restrictedModeUUID;
@property (nonatomic) unsigned long long timestamp;

- (id)attackLog;
- (bool)contactless;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hardwareType;
- (bool)hasAttackLog;
- (bool)hasContactless;
- (bool)hasHardwareType;
- (bool)hasPlatformIdentifier;
- (bool)hasRestrictedModeUUID;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)platformIdentifier;
- (bool)readFrom:(id)arg1;
- (id)restrictedModeUUID;
- (void)setAttackLog:(id)arg1;
- (void)setContactless:(bool)arg1;
- (void)setHardwareType:(unsigned int)arg1;
- (void)setHasContactless:(bool)arg1;
- (void)setHasHardwareType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setPlatformIdentifier:(id)arg1;
- (void)setRestrictedModeUUID:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

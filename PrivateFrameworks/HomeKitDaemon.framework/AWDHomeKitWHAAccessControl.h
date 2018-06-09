/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitWHAAccessControl : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int privilegeLevel : 1; 
        unsigned int isP2PEnabled : 1; 
        unsigned int isPasswordSet : 1; 
    }  _has;
    bool  _isP2PEnabled;
    bool  _isPasswordSet;
    int  _privilegeLevel;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasIsP2PEnabled;
@property (nonatomic) bool hasIsPasswordSet;
@property (nonatomic) bool hasPrivilegeLevel;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool isP2PEnabled;
@property (nonatomic) bool isPasswordSet;
@property (nonatomic) int privilegeLevel;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsPrivilegeLevel:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsP2PEnabled;
- (bool)hasIsPasswordSet;
- (bool)hasPrivilegeLevel;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isP2PEnabled;
- (bool)isPasswordSet;
- (void)mergeFrom:(id)arg1;
- (int)privilegeLevel;
- (id)privilegeLevelAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsP2PEnabled:(bool)arg1;
- (void)setHasIsPasswordSet:(bool)arg1;
- (void)setHasPrivilegeLevel:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsP2PEnabled:(bool)arg1;
- (void)setIsPasswordSet:(bool)arg1;
- (void)setPrivilegeLevel:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitUserPresenceAuthorization : PBCodable <NSCopying> {
    int  _auth;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int auth : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) int auth;
@property (nonatomic) bool hasAuth;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsAuth:(id)arg1;
- (int)auth;
- (id)authAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAuth;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAuth:(int)arg1;
- (void)setHasAuth:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

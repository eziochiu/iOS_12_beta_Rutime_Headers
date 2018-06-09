/* made by EzioChiu
   Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface AWDMultipeerSessionMaxPeersInfo : PBCodable <NSCopying> {
    NSString * _bundleID;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int maxPeersCount : 1; 
    }  _has;
    unsigned int  _maxPeersCount;
    NSString * _sessionID;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, readonly) bool hasBundleID;
@property (nonatomic) bool hasMaxPeersCount;
@property (nonatomic, readonly) bool hasSessionID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int maxPeersCount;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic) unsigned long long timestamp;

- (id)bundleID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleID;
- (bool)hasMaxPeersCount;
- (bool)hasSessionID;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxPeersCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionID;
- (void)setBundleID:(id)arg1;
- (void)setHasMaxPeersCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMaxPeersCount:(unsigned int)arg1;
- (void)setSessionID:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

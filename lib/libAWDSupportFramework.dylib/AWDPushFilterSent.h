/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPushFilterSent : PBCodable <NSCopying> {
    unsigned int  _connectionType;
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int linkQuality : 1; 
        unsigned int sentReason : 1; 
    }  _has;
    int  _linkQuality;
    unsigned int  _sentReason;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int connectionType;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasLinkQuality;
@property (nonatomic) bool hasSentReason;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int linkQuality;
@property (nonatomic) unsigned int sentReason;
@property (nonatomic) unsigned long long timestamp;

- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (bool)hasConnectionType;
- (bool)hasGuid;
- (bool)hasLinkQuality;
- (bool)hasSentReason;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)linkQuality;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)sentReason;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasLinkQuality:(bool)arg1;
- (void)setHasSentReason:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLinkQuality:(int)arg1;
- (void)setSentReason:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

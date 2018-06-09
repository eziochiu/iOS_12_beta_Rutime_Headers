/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPushTopicPolicyChange : PBCodable <NSCopying> {
    unsigned int  _change;
    unsigned int  _didCauseFilterChange;
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int change : 1; 
        unsigned int didCauseFilterChange : 1; 
    }  _has;
    unsigned long long  _timestamp;
    NSString * _topic;
}

@property (nonatomic) unsigned int change;
@property (nonatomic) unsigned int didCauseFilterChange;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) bool hasChange;
@property (nonatomic) bool hasDidCauseFilterChange;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTopic;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *topic;

- (unsigned int)change;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)didCauseFilterChange;
- (id)guid;
- (bool)hasChange;
- (bool)hasDidCauseFilterChange;
- (bool)hasGuid;
- (bool)hasTimestamp;
- (bool)hasTopic;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChange:(unsigned int)arg1;
- (void)setDidCauseFilterChange:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasChange:(bool)arg1;
- (void)setHasDidCauseFilterChange:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTopic:(id)arg1;
- (unsigned long long)timestamp;
- (id)topic;
- (void)writeTo:(id)arg1;

@end

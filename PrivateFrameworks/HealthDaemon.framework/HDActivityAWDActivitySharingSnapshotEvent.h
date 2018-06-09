/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActivityAWDActivitySharingSnapshotEvent : PBCodable <NSCopying> {
    long long  _count;
    struct { 
        unsigned int count : 1; 
        unsigned int timestamp : 1; 
        unsigned int kind : 1; 
        unsigned int success : 1; 
    }  _has;
    int  _kind;
    bool  _success;
    unsigned long long  _timestamp;
}

@property (nonatomic) long long count;
@property (nonatomic) bool hasCount;
@property (nonatomic) bool hasKind;
@property (nonatomic) bool hasSuccess;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int kind;
@property (nonatomic) bool success;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsKind:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCount;
- (bool)hasKind;
- (bool)hasSuccess;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)kind;
- (id)kindAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCount:(long long)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setHasKind:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setKind:(int)arg1;
- (void)setSuccess:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)success;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

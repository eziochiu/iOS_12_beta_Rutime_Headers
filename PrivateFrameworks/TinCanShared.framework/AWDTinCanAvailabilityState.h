/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
 */

@interface AWDTinCanAvailabilityState : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int tinCanAvailabilityState : 1; 
    }  _has;
    unsigned long long  _timestamp;
    bool  _tinCanAvailabilityState;
}

@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTinCanAvailabilityState;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) bool tinCanAvailabilityState;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (bool)hasTinCanAvailabilityState;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTinCanAvailabilityState:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTinCanAvailabilityState:(bool)arg1;
- (unsigned long long)timestamp;
- (bool)tinCanAvailabilityState;
- (void)writeTo:(id)arg1;

@end

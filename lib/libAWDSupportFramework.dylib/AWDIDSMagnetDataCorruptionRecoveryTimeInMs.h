/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSMagnetDataCorruptionRecoveryTimeInMs : PBCodable <NSCopying> {
    struct { 
        unsigned int recoveryTimeInMs : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    long long  _recoveryTimeInMs;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasRecoveryTimeInMs;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) long long recoveryTimeInMs;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRecoveryTimeInMs;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (long long)recoveryTimeInMs;
- (void)setHasRecoveryTimeInMs:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setRecoveryTimeInMs:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

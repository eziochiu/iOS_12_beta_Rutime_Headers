/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWifiPowerState : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int powerState : 1; 
    }  _has;
    bool  _powerState;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasPowerState;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool powerState;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPowerState;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)powerState;
- (bool)readFrom:(id)arg1;
- (void)setHasPowerState:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setPowerState:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

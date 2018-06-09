/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSWiProxConnectionSuccess : PBCodable <NSCopying> {
    struct { 
        unsigned int timeToSucceed : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    long long  _timeToSucceed;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasTimeToSucceed;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) long long timeToSucceed;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimeToSucceed;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimeToSucceed:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimeToSucceed:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (long long)timeToSucceed;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

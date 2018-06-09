/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSWiProxConnectionFailed : PBCodable <NSCopying> {
    struct { 
        unsigned int timeToFail : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    long long  _timeToFail;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasTimeToFail;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) long long timeToFail;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimeToFail;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimeToFail:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimeToFail:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (long long)timeToFail;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

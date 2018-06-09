/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSLocalMessageRTT : PBCodable <NSCopying> {
    struct { 
        unsigned int rtt : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    long long  _rtt;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasRtt;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) long long rtt;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRtt;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (long long)rtt;
- (void)setHasRtt:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setRtt:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

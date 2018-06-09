/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiTxInhibitEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int version : 1; 
        unsigned int state : 1; 
    }  _has;
    bool  _state;
    unsigned long long  _timestamp;
    unsigned long long  _version;
}

@property (nonatomic) bool hasState;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasVersion;
@property (nonatomic) bool state;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long version;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasState;
- (bool)hasTimestamp;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasState:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setState:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (bool)state;
- (unsigned long long)timestamp;
- (unsigned long long)version;
- (void)writeTo:(id)arg1;

@end

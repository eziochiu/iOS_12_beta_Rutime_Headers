/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCReaderModeExceptionEvent : PBCodable <NSCopying> {
    unsigned int  _errorCode;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int errorCode : 1; 
        unsigned int type : 1; 
    }  _has;
    unsigned long long  _timestamp;
    unsigned int  _type;
}

@property (nonatomic) unsigned int errorCode;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasType;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int type;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)errorCode;
- (bool)hasErrorCode;
- (bool)hasTimestamp;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)type;
- (void)writeTo:(id)arg1;

@end

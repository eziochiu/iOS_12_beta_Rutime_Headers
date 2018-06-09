/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCHCEStartEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int messageSize : 1; 
        unsigned int messageType : 1; 
        unsigned int type : 1; 
    }  _has;
    unsigned int  _messageSize;
    unsigned int  _messageType;
    unsigned long long  _timestamp;
    unsigned int  _type;
    NSData * _uuidReference;
}

@property (nonatomic) bool hasMessageSize;
@property (nonatomic) bool hasMessageType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasUuidReference;
@property (nonatomic) unsigned int messageSize;
@property (nonatomic) unsigned int messageType;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int type;
@property (nonatomic, retain) NSData *uuidReference;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMessageSize;
- (bool)hasMessageType;
- (bool)hasTimestamp;
- (bool)hasType;
- (bool)hasUuidReference;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)messageSize;
- (unsigned int)messageType;
- (bool)readFrom:(id)arg1;
- (void)setHasMessageSize:(bool)arg1;
- (void)setHasMessageType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setMessageSize:(unsigned int)arg1;
- (void)setMessageType:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setUuidReference:(id)arg1;
- (unsigned long long)timestamp;
- (unsigned int)type;
- (id)uuidReference;
- (void)writeTo:(id)arg1;

@end

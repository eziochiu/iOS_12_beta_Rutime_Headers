/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCReaderSessionTagFound : PBCodable <NSCopying> {
    struct { 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int tagType : 1; 
        unsigned int type : 1; 
    }  _has;
    unsigned int  _tagType;
    unsigned long long  _timeDeltaFromReference;
    unsigned long long  _timestamp;
    unsigned int  _type;
    NSData * _uuidReference;
}

@property (nonatomic) bool hasTagType;
@property (nonatomic) bool hasTimeDeltaFromReference;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasUuidReference;
@property (nonatomic) unsigned int tagType;
@property (nonatomic) unsigned long long timeDeltaFromReference;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int type;
@property (nonatomic, retain) NSData *uuidReference;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTagType;
- (bool)hasTimeDeltaFromReference;
- (bool)hasTimestamp;
- (bool)hasType;
- (bool)hasUuidReference;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTagType:(bool)arg1;
- (void)setHasTimeDeltaFromReference:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setTagType:(unsigned int)arg1;
- (void)setTimeDeltaFromReference:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setUuidReference:(id)arg1;
- (unsigned int)tagType;
- (unsigned long long)timeDeltaFromReference;
- (unsigned long long)timestamp;
- (unsigned int)type;
- (id)uuidReference;
- (void)writeTo:(id)arg1;

@end

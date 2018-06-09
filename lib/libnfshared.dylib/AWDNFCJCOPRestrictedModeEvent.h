/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCJCOPRestrictedModeEvent : PBCodable <NSCopying> {
    bool  _contactless;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int contactless : 1; 
    }  _has;
    NSData * _log;
    unsigned long long  _timestamp;
    NSData * _uuidReference;
}

@property (nonatomic) bool contactless;
@property (nonatomic) bool hasContactless;
@property (nonatomic, readonly) bool hasLog;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasUuidReference;
@property (nonatomic, retain) NSData *log;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSData *uuidReference;

- (bool)contactless;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContactless;
- (bool)hasLog;
- (bool)hasTimestamp;
- (bool)hasUuidReference;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)log;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContactless:(bool)arg1;
- (void)setHasContactless:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLog:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuidReference:(id)arg1;
- (unsigned long long)timestamp;
- (id)uuidReference;
- (void)writeTo:(id)arg1;

@end

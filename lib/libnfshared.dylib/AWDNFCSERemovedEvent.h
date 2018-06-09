/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCSERemovedEvent : PBCodable <NSCopying> {
    unsigned int  _hardwareType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int hardwareType : 1; 
        unsigned int reason : 1; 
        unsigned int hasCardEmulationStarted : 1; 
        unsigned int hasExpressTransactionStarted : 1; 
    }  _has;
    bool  _hasCardEmulationStarted;
    bool  _hasExpressTransactionStarted;
    unsigned int  _reason;
    unsigned long long  _timestamp;
    NSData * _uuidReference;
}

@property (nonatomic) unsigned int hardwareType;
@property (nonatomic) bool hasCardEmulationStarted;
@property (nonatomic) bool hasExpressTransactionStarted;
@property (nonatomic) bool hasHardwareType;
@property (nonatomic) bool hasHasCardEmulationStarted;
@property (nonatomic) bool hasHasExpressTransactionStarted;
@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasUuidReference;
@property (nonatomic) unsigned int reason;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSData *uuidReference;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hardwareType;
- (bool)hasCardEmulationStarted;
- (bool)hasExpressTransactionStarted;
- (bool)hasHardwareType;
- (bool)hasHasCardEmulationStarted;
- (bool)hasHasExpressTransactionStarted;
- (bool)hasReason;
- (bool)hasTimestamp;
- (bool)hasUuidReference;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)reason;
- (void)setHardwareType:(unsigned int)arg1;
- (void)setHasCardEmulationStarted:(bool)arg1;
- (void)setHasExpressTransactionStarted:(bool)arg1;
- (void)setHasHardwareType:(bool)arg1;
- (void)setHasHasCardEmulationStarted:(bool)arg1;
- (void)setHasHasExpressTransactionStarted:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setReason:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuidReference:(id)arg1;
- (unsigned long long)timestamp;
- (id)uuidReference;
- (void)writeTo:(id)arg1;

@end
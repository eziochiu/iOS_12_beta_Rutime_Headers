/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCCardIngestionSessionStateChangeEvent : PBCodable <NSCopying> {
    unsigned int  _cardValidationStatus;
    struct { 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int cardValidationStatus : 1; 
        unsigned int sessionStatus : 1; 
        unsigned int spStatusCode : 1; 
        unsigned int state : 1; 
        unsigned int technology : 1; 
    }  _has;
    unsigned int  _sessionStatus;
    unsigned int  _spStatusCode;
    unsigned int  _state;
    unsigned int  _technology;
    unsigned long long  _timeDeltaFromReference;
    unsigned long long  _timestamp;
    NSData * _uuidReference;
}

@property (nonatomic) unsigned int cardValidationStatus;
@property (nonatomic) bool hasCardValidationStatus;
@property (nonatomic) bool hasSessionStatus;
@property (nonatomic) bool hasSpStatusCode;
@property (nonatomic) bool hasState;
@property (nonatomic) bool hasTechnology;
@property (nonatomic) bool hasTimeDeltaFromReference;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasUuidReference;
@property (nonatomic) unsigned int sessionStatus;
@property (nonatomic) unsigned int spStatusCode;
@property (nonatomic) unsigned int state;
@property (nonatomic) unsigned int technology;
@property (nonatomic) unsigned long long timeDeltaFromReference;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSData *uuidReference;

- (unsigned int)cardValidationStatus;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCardValidationStatus;
- (bool)hasSessionStatus;
- (bool)hasSpStatusCode;
- (bool)hasState;
- (bool)hasTechnology;
- (bool)hasTimeDeltaFromReference;
- (bool)hasTimestamp;
- (bool)hasUuidReference;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)sessionStatus;
- (void)setCardValidationStatus:(unsigned int)arg1;
- (void)setHasCardValidationStatus:(bool)arg1;
- (void)setHasSessionStatus:(bool)arg1;
- (void)setHasSpStatusCode:(bool)arg1;
- (void)setHasState:(bool)arg1;
- (void)setHasTechnology:(bool)arg1;
- (void)setHasTimeDeltaFromReference:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSessionStatus:(unsigned int)arg1;
- (void)setSpStatusCode:(unsigned int)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setTechnology:(unsigned int)arg1;
- (void)setTimeDeltaFromReference:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuidReference:(id)arg1;
- (unsigned int)spStatusCode;
- (unsigned int)state;
- (unsigned int)technology;
- (unsigned long long)timeDeltaFromReference;
- (unsigned long long)timestamp;
- (id)uuidReference;
- (void)writeTo:(id)arg1;

@end

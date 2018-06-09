/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface AWDNFCHCIActivityTimeout : PBCodable <NSCopying> {
    unsigned int  _command;
    unsigned int  _commandParam1;
    unsigned int  _commandResult;
    unsigned int  _expressType;
    struct { 
        unsigned int timeDeltaFromReference : 1; 
        unsigned int timestamp : 1; 
        unsigned int command : 1; 
        unsigned int commandParam1 : 1; 
        unsigned int commandResult : 1; 
        unsigned int expressType : 1; 
        unsigned int spid : 1; 
        unsigned int timeoutValue : 1; 
        unsigned int version : 1; 
    }  _has;
    unsigned int  _spid;
    unsigned long long  _timeDeltaFromReference;
    unsigned int  _timeoutValue;
    unsigned long long  _timestamp;
    NSData * _uuidReference;
    unsigned int  _version;
}

@property (nonatomic) unsigned int command;
@property (nonatomic) unsigned int commandParam1;
@property (nonatomic) unsigned int commandResult;
@property (nonatomic) unsigned int expressType;
@property (nonatomic) bool hasCommand;
@property (nonatomic) bool hasCommandParam1;
@property (nonatomic) bool hasCommandResult;
@property (nonatomic) bool hasExpressType;
@property (nonatomic) bool hasSpid;
@property (nonatomic) bool hasTimeDeltaFromReference;
@property (nonatomic) bool hasTimeoutValue;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasUuidReference;
@property (nonatomic) bool hasVersion;
@property (nonatomic) unsigned int spid;
@property (nonatomic) unsigned long long timeDeltaFromReference;
@property (nonatomic) unsigned int timeoutValue;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSData *uuidReference;
@property (nonatomic) unsigned int version;

- (unsigned int)command;
- (unsigned int)commandParam1;
- (unsigned int)commandResult;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)expressType;
- (bool)hasCommand;
- (bool)hasCommandParam1;
- (bool)hasCommandResult;
- (bool)hasExpressType;
- (bool)hasSpid;
- (bool)hasTimeDeltaFromReference;
- (bool)hasTimeoutValue;
- (bool)hasTimestamp;
- (bool)hasUuidReference;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCommand:(unsigned int)arg1;
- (void)setCommandParam1:(unsigned int)arg1;
- (void)setCommandResult:(unsigned int)arg1;
- (void)setExpressType:(unsigned int)arg1;
- (void)setHasCommand:(bool)arg1;
- (void)setHasCommandParam1:(bool)arg1;
- (void)setHasCommandResult:(bool)arg1;
- (void)setHasExpressType:(bool)arg1;
- (void)setHasSpid:(bool)arg1;
- (void)setHasTimeDeltaFromReference:(bool)arg1;
- (void)setHasTimeoutValue:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setSpid:(unsigned int)arg1;
- (void)setTimeDeltaFromReference:(unsigned long long)arg1;
- (void)setTimeoutValue:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUuidReference:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)spid;
- (unsigned long long)timeDeltaFromReference;
- (unsigned int)timeoutValue;
- (unsigned long long)timestamp;
- (id)uuidReference;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end

/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiUIJoinEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int securityType : 1; 
    }  _has;
    NSString * _process;
    unsigned int  _securityType;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly) bool hasProcess;
@property (nonatomic) bool hasSecurityType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *process;
@property (nonatomic) unsigned int securityType;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasProcess;
- (bool)hasSecurityType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)process;
- (bool)readFrom:(id)arg1;
- (unsigned int)securityType;
- (void)setHasSecurityType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setProcess:(id)arg1;
- (void)setSecurityType:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNetworkServiceProxyProbeStatistics : PBCodable <NSCopying> {
    unsigned long long  _alternateProbeTimeMsecs;
    unsigned long long  _genericDNSProbeTimeMsecs;
    unsigned long long  _genericProbeTimeMsecs;
    struct { 
        unsigned int alternateProbeTimeMsecs : 1; 
        unsigned int genericDNSProbeTimeMsecs : 1; 
        unsigned int genericProbeTimeMsecs : 1; 
        unsigned int timestamp : 1; 
        unsigned int interfaceType : 1; 
        unsigned int protocolType : 1; 
    }  _has;
    int  _interfaceType;
    NSString * _label;
    int  _protocolType;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long alternateProbeTimeMsecs;
@property (nonatomic) unsigned long long genericDNSProbeTimeMsecs;
@property (nonatomic) unsigned long long genericProbeTimeMsecs;
@property (nonatomic) bool hasAlternateProbeTimeMsecs;
@property (nonatomic) bool hasGenericDNSProbeTimeMsecs;
@property (nonatomic) bool hasGenericProbeTimeMsecs;
@property (nonatomic) bool hasInterfaceType;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic) bool hasProtocolType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int interfaceType;
@property (nonatomic, retain) NSString *label;
@property (nonatomic) int protocolType;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsInterfaceType:(id)arg1;
- (int)StringAsProtocolType:(id)arg1;
- (unsigned long long)alternateProbeTimeMsecs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)genericDNSProbeTimeMsecs;
- (unsigned long long)genericProbeTimeMsecs;
- (bool)hasAlternateProbeTimeMsecs;
- (bool)hasGenericDNSProbeTimeMsecs;
- (bool)hasGenericProbeTimeMsecs;
- (bool)hasInterfaceType;
- (bool)hasLabel;
- (bool)hasProtocolType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (int)interfaceType;
- (id)interfaceTypeAsString:(int)arg1;
- (bool)isEqual:(id)arg1;
- (id)label;
- (void)mergeFrom:(id)arg1;
- (int)protocolType;
- (id)protocolTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlternateProbeTimeMsecs:(unsigned long long)arg1;
- (void)setGenericDNSProbeTimeMsecs:(unsigned long long)arg1;
- (void)setGenericProbeTimeMsecs:(unsigned long long)arg1;
- (void)setHasAlternateProbeTimeMsecs:(bool)arg1;
- (void)setHasGenericDNSProbeTimeMsecs:(bool)arg1;
- (void)setHasGenericProbeTimeMsecs:(bool)arg1;
- (void)setHasInterfaceType:(bool)arg1;
- (void)setHasProtocolType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInterfaceType:(int)arg1;
- (void)setLabel:(id)arg1;
- (void)setProtocolType:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

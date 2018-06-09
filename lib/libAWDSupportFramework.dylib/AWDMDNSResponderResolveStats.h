/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDMDNSResponderResolveStats : PBCodable <NSCopying> {
    NSMutableArray * _domains;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSMutableArray * _servers;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSMutableArray *domains;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSMutableArray *servers;
@property (nonatomic) unsigned long long timestamp;

+ (Class)domainType;
+ (Class)serverType;

- (void)addDomain:(id)arg1;
- (void)addServer:(id)arg1;
- (void)clearDomains;
- (void)clearServers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domainAtIndex:(unsigned long long)arg1;
- (id)domains;
- (unsigned long long)domainsCount;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serverAtIndex:(unsigned long long)arg1;
- (id)servers;
- (unsigned long long)serversCount;
- (void)setDomains:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setServers:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

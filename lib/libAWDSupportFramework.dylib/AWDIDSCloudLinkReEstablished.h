/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSCloudLinkReEstablished : PBCodable <NSCopying> {
    struct { 
        unsigned int linkTimeDelta : 1; 
        unsigned int timestamp : 1; 
        unsigned int linkType : 1; 
        unsigned int priorLinkType : 1; 
    }  _has;
    unsigned long long  _linkTimeDelta;
    unsigned int  _linkType;
    unsigned int  _priorLinkType;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasLinkTimeDelta;
@property (nonatomic) bool hasLinkType;
@property (nonatomic) bool hasPriorLinkType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long linkTimeDelta;
@property (nonatomic) unsigned int linkType;
@property (nonatomic) unsigned int priorLinkType;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLinkTimeDelta;
- (bool)hasLinkType;
- (bool)hasPriorLinkType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)linkTimeDelta;
- (unsigned int)linkType;
- (void)mergeFrom:(id)arg1;
- (unsigned int)priorLinkType;
- (bool)readFrom:(id)arg1;
- (void)setHasLinkTimeDelta:(bool)arg1;
- (void)setHasLinkType:(bool)arg1;
- (void)setHasPriorLinkType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLinkTimeDelta:(unsigned long long)arg1;
- (void)setLinkType:(unsigned int)arg1;
- (void)setPriorLinkType:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

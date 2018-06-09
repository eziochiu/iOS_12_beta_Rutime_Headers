/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDMacCountersRxErrors : PBCodable <NSCopying> {
    struct { 
        unsigned int rxbadfcs : 1; 
        unsigned int rxbadplcp : 1; 
        unsigned int rxcrsglitch : 1; 
        unsigned int rxfrmtoolong : 1; 
        unsigned int rxfrmtooshrt : 1; 
        unsigned int rxinvmachdr : 1; 
        unsigned int rxstrt : 1; 
    }  _has;
    unsigned long long  _rxbadfcs;
    unsigned long long  _rxbadplcp;
    unsigned long long  _rxcrsglitch;
    unsigned long long  _rxfrmtoolong;
    unsigned long long  _rxfrmtooshrt;
    unsigned long long  _rxinvmachdr;
    unsigned long long  _rxstrt;
}

@property (nonatomic) bool hasRxbadfcs;
@property (nonatomic) bool hasRxbadplcp;
@property (nonatomic) bool hasRxcrsglitch;
@property (nonatomic) bool hasRxfrmtoolong;
@property (nonatomic) bool hasRxfrmtooshrt;
@property (nonatomic) bool hasRxinvmachdr;
@property (nonatomic) bool hasRxstrt;
@property (nonatomic) unsigned long long rxbadfcs;
@property (nonatomic) unsigned long long rxbadplcp;
@property (nonatomic) unsigned long long rxcrsglitch;
@property (nonatomic) unsigned long long rxfrmtoolong;
@property (nonatomic) unsigned long long rxfrmtooshrt;
@property (nonatomic) unsigned long long rxinvmachdr;
@property (nonatomic) unsigned long long rxstrt;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRxbadfcs;
- (bool)hasRxbadplcp;
- (bool)hasRxcrsglitch;
- (bool)hasRxfrmtoolong;
- (bool)hasRxfrmtooshrt;
- (bool)hasRxinvmachdr;
- (bool)hasRxstrt;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)rxbadfcs;
- (unsigned long long)rxbadplcp;
- (unsigned long long)rxcrsglitch;
- (unsigned long long)rxfrmtoolong;
- (unsigned long long)rxfrmtooshrt;
- (unsigned long long)rxinvmachdr;
- (unsigned long long)rxstrt;
- (void)setHasRxbadfcs:(bool)arg1;
- (void)setHasRxbadplcp:(bool)arg1;
- (void)setHasRxcrsglitch:(bool)arg1;
- (void)setHasRxfrmtoolong:(bool)arg1;
- (void)setHasRxfrmtooshrt:(bool)arg1;
- (void)setHasRxinvmachdr:(bool)arg1;
- (void)setHasRxstrt:(bool)arg1;
- (void)setRxbadfcs:(unsigned long long)arg1;
- (void)setRxbadplcp:(unsigned long long)arg1;
- (void)setRxcrsglitch:(unsigned long long)arg1;
- (void)setRxfrmtoolong:(unsigned long long)arg1;
- (void)setRxfrmtooshrt:(unsigned long long)arg1;
- (void)setRxinvmachdr:(unsigned long long)arg1;
- (void)setRxstrt:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end

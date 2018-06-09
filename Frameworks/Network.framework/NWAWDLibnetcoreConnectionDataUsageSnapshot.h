/* made by EzioChiu
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWAWDLibnetcoreConnectionDataUsageSnapshot : PBCodable <NSCopying> {
    unsigned long long  _bytesIn;
    unsigned long long  _bytesOut;
    struct { 
        unsigned int bytesIn : 1; 
        unsigned int bytesOut : 1; 
        unsigned int multipathBytesInCell : 1; 
        unsigned int multipathBytesInInitial : 1; 
        unsigned int multipathBytesInWiFi : 1; 
        unsigned int multipathBytesOutCell : 1; 
        unsigned int multipathBytesOutInitial : 1; 
        unsigned int multipathBytesOutWiFi : 1; 
    }  _has;
    unsigned long long  _multipathBytesInCell;
    unsigned long long  _multipathBytesInInitial;
    unsigned long long  _multipathBytesInWiFi;
    unsigned long long  _multipathBytesOutCell;
    unsigned long long  _multipathBytesOutInitial;
    unsigned long long  _multipathBytesOutWiFi;
}

@property (nonatomic) unsigned long long bytesIn;
@property (nonatomic) unsigned long long bytesOut;
@property (nonatomic) bool hasBytesIn;
@property (nonatomic) bool hasBytesOut;
@property (nonatomic) bool hasMultipathBytesInCell;
@property (nonatomic) bool hasMultipathBytesInInitial;
@property (nonatomic) bool hasMultipathBytesInWiFi;
@property (nonatomic) bool hasMultipathBytesOutCell;
@property (nonatomic) bool hasMultipathBytesOutInitial;
@property (nonatomic) bool hasMultipathBytesOutWiFi;
@property (nonatomic) unsigned long long multipathBytesInCell;
@property (nonatomic) unsigned long long multipathBytesInInitial;
@property (nonatomic) unsigned long long multipathBytesInWiFi;
@property (nonatomic) unsigned long long multipathBytesOutCell;
@property (nonatomic) unsigned long long multipathBytesOutInitial;
@property (nonatomic) unsigned long long multipathBytesOutWiFi;

- (unsigned long long)bytesIn;
- (unsigned long long)bytesOut;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBytesIn;
- (bool)hasBytesOut;
- (bool)hasMultipathBytesInCell;
- (bool)hasMultipathBytesInInitial;
- (bool)hasMultipathBytesInWiFi;
- (bool)hasMultipathBytesOutCell;
- (bool)hasMultipathBytesOutInitial;
- (bool)hasMultipathBytesOutWiFi;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)multipathBytesInCell;
- (unsigned long long)multipathBytesInInitial;
- (unsigned long long)multipathBytesInWiFi;
- (unsigned long long)multipathBytesOutCell;
- (unsigned long long)multipathBytesOutInitial;
- (unsigned long long)multipathBytesOutWiFi;
- (bool)readFrom:(id)arg1;
- (void)setBytesIn:(unsigned long long)arg1;
- (void)setBytesOut:(unsigned long long)arg1;
- (void)setHasBytesIn:(bool)arg1;
- (void)setHasBytesOut:(bool)arg1;
- (void)setHasMultipathBytesInCell:(bool)arg1;
- (void)setHasMultipathBytesInInitial:(bool)arg1;
- (void)setHasMultipathBytesInWiFi:(bool)arg1;
- (void)setHasMultipathBytesOutCell:(bool)arg1;
- (void)setHasMultipathBytesOutInitial:(bool)arg1;
- (void)setHasMultipathBytesOutWiFi:(bool)arg1;
- (void)setMultipathBytesInCell:(unsigned long long)arg1;
- (void)setMultipathBytesInInitial:(unsigned long long)arg1;
- (void)setMultipathBytesInWiFi:(unsigned long long)arg1;
- (void)setMultipathBytesOutCell:(unsigned long long)arg1;
- (void)setMultipathBytesOutInitial:(unsigned long long)arg1;
- (void)setMultipathBytesOutWiFi:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end

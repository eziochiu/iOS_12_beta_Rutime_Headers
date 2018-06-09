/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNetworkUsage : PBCodable <NSCopying> {
    NSString * _bundleName;
    unsigned long long  _cellIn;
    unsigned long long  _cellOut;
    struct { 
        unsigned int cellIn : 1; 
        unsigned int cellOut : 1; 
        unsigned int wifiIn : 1; 
        unsigned int wifiOut : 1; 
        unsigned int numConnections : 1; 
    }  _has;
    unsigned int  _numConnections;
    unsigned long long  _wifiIn;
    unsigned long long  _wifiOut;
}

@property (nonatomic, retain) NSString *bundleName;
@property (nonatomic) unsigned long long cellIn;
@property (nonatomic) unsigned long long cellOut;
@property (nonatomic, readonly) bool hasBundleName;
@property (nonatomic) bool hasCellIn;
@property (nonatomic) bool hasCellOut;
@property (nonatomic) bool hasNumConnections;
@property (nonatomic) bool hasWifiIn;
@property (nonatomic) bool hasWifiOut;
@property (nonatomic) unsigned int numConnections;
@property (nonatomic) unsigned long long wifiIn;
@property (nonatomic) unsigned long long wifiOut;

- (id)bundleName;
- (unsigned long long)cellIn;
- (unsigned long long)cellOut;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleName;
- (bool)hasCellIn;
- (bool)hasCellOut;
- (bool)hasNumConnections;
- (bool)hasWifiIn;
- (bool)hasWifiOut;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numConnections;
- (bool)readFrom:(id)arg1;
- (void)setBundleName:(id)arg1;
- (void)setCellIn:(unsigned long long)arg1;
- (void)setCellOut:(unsigned long long)arg1;
- (void)setHasCellIn:(bool)arg1;
- (void)setHasCellOut:(bool)arg1;
- (void)setHasNumConnections:(bool)arg1;
- (void)setHasWifiIn:(bool)arg1;
- (void)setHasWifiOut:(bool)arg1;
- (void)setNumConnections:(unsigned int)arg1;
- (void)setWifiIn:(unsigned long long)arg1;
- (void)setWifiOut:(unsigned long long)arg1;
- (unsigned long long)wifiIn;
- (unsigned long long)wifiOut;
- (void)writeTo:(id)arg1;

@end

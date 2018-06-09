/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWRMLinkPrefInit : PBCodable <NSCopying> {
    unsigned int  _countCellular;
    unsigned int  _countWifi;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int countCellular : 1; 
        unsigned int countWifi : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int countCellular;
@property (nonatomic) unsigned int countWifi;
@property (nonatomic) bool hasCountCellular;
@property (nonatomic) bool hasCountWifi;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)countCellular;
- (unsigned int)countWifi;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCountCellular;
- (bool)hasCountWifi;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCountCellular:(unsigned int)arg1;
- (void)setCountWifi:(unsigned int)arg1;
- (void)setHasCountCellular:(bool)arg1;
- (void)setHasCountWifi:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end

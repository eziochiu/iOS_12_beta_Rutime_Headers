/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVCharacteristics : PBCodable <NSCopying> {
    NSMutableArray * _pointCharacteristics;
}

@property (nonatomic, retain) NSMutableArray *pointCharacteristics;

- (void).cxx_destruct;
- (void)addPointCharacteristic:(id)arg1;
- (void)clearPointCharacteristics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)pointCharacteristicAtIndex:(unsigned long long)arg1;
- (id)pointCharacteristics;
- (unsigned long long)pointCharacteristicsCount;
- (bool)readFrom:(id)arg1;
- (void)setPointCharacteristics:(id)arg1;
- (void)writeTo:(id)arg1;

@end

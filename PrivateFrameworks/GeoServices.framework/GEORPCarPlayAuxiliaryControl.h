/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPCarPlayAuxiliaryControl : PBCodable <NSCopying> {
    GEOCarInfo * _carInfo;
}

@property (nonatomic, retain) GEOCarInfo *carInfo;
@property (nonatomic, readonly) bool hasCarInfo;

- (void).cxx_destruct;
- (id)carInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCarInfo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCarInfo:(id)arg1;
- (void)writeTo:(id)arg1;

@end

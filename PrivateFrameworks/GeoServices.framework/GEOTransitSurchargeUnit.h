/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitSurchargeUnit : PBCodable <NSCopying> {
    GEOTransitPrice * _price;
}

@property (nonatomic, readonly) bool hasPrice;
@property (nonatomic, retain) GEOTransitPrice *price;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPrice;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)price;
- (bool)readFrom:(id)arg1;
- (void)setPrice:(id)arg1;
- (void)writeTo:(id)arg1;

@end

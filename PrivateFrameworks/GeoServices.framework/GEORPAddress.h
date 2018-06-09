/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPAddress : PBCodable <NSCopying> {
    GEOPDAddressObject * _addressObject;
    NSString * _addressString;
    GEOAddress * _geoAddress;
}

@property (nonatomic, retain) GEOPDAddressObject *addressObject;
@property (nonatomic, retain) NSString *addressString;
@property (nonatomic, retain) GEOAddress *geoAddress;
@property (nonatomic, readonly) bool hasAddressObject;
@property (nonatomic, readonly) bool hasAddressString;
@property (nonatomic, readonly) bool hasGeoAddress;

- (void).cxx_destruct;
- (id)addressObject;
- (id)addressString;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)geoAddress;
- (bool)hasAddressObject;
- (bool)hasAddressString;
- (bool)hasGeoAddress;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddressObject:(id)arg1;
- (void)setAddressString:(id)arg1;
- (void)setGeoAddress:(id)arg1;
- (void)writeTo:(id)arg1;

@end

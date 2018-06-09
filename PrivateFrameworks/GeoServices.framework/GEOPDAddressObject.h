/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAddressObject : PBCodable <NSCopying> {
    NSData * _addressObject;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSData *addressObject;
@property (nonatomic, readonly) bool hasAddressObject;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)addressObject;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAddressObject;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAddressObject:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end

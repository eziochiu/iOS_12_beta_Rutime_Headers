/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDVendorIDLink : PBCodable <NSCopying> {
    NSString * _externalItemId;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _reservationTypes;
    PBUnknownFields * _unknownFields;
    NSString * _vendorId;
}

@property (nonatomic, retain) NSString *externalItemId;
@property (nonatomic, readonly) bool hasExternalItemId;
@property (nonatomic, readonly) bool hasVendorId;
@property (nonatomic, readonly) int*reservationTypes;
@property (nonatomic, readonly) unsigned long long reservationTypesCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *vendorId;

- (void).cxx_destruct;
- (int)StringAsReservationTypes:(id)arg1;
- (void)addReservationType:(int)arg1;
- (void)clearReservationTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalItemId;
- (bool)hasExternalItemId;
- (bool)hasVendorId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reservationTypeAtIndex:(unsigned long long)arg1;
- (int*)reservationTypes;
- (id)reservationTypesAsString:(int)arg1;
- (unsigned long long)reservationTypesCount;
- (void)setExternalItemId:(id)arg1;
- (void)setReservationTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setVendorId:(id)arg1;
- (id)unknownFields;
- (id)vendorId;
- (void)writeTo:(id)arg1;

@end

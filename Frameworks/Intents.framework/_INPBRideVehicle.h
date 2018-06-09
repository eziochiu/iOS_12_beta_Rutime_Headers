/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRideVehicle : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBRideVehicle> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    GEOLocation * _location;
    NSString * _manufacturer;
    _INPBImageValue * _mapAnnotationImage;
    NSString * _model;
    NSString * _registrationPlate;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic, readonly) bool hasManufacturer;
@property (nonatomic, readonly) bool hasMapAnnotationImage;
@property (nonatomic, readonly) bool hasModel;
@property (nonatomic, readonly) bool hasRegistrationPlate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOLocation *location;
@property (nonatomic, copy) NSString *manufacturer;
@property (nonatomic, retain) _INPBImageValue *mapAnnotationImage;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *registrationPlate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasLocation;
- (bool)hasManufacturer;
- (bool)hasMapAnnotationImage;
- (bool)hasModel;
- (bool)hasRegistrationPlate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)location;
- (id)manufacturer;
- (id)mapAnnotationImage;
- (id)model;
- (bool)readFrom:(id)arg1;
- (id)registrationPlate;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setMapAnnotationImage:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setRegistrationPlate:(id)arg1;
- (void)writeTo:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBGetCarPowerLevelStatusIntentResponse : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBGetCarPowerLevelStatusIntentResponse> {
    INCodableAttribute * _associatedCodableAttribute;
    _INPBDouble * _chargePercentRemaining;
    _INPBDistance * _distanceRemaining;
    _INPBDouble * _fuelPercentRemaining;
    struct { }  _has;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, retain) _INPBDouble *chargePercentRemaining;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBDistance *distanceRemaining;
@property (nonatomic, retain) _INPBDouble *fuelPercentRemaining;
@property (nonatomic, readonly) bool hasChargePercentRemaining;
@property (nonatomic, readonly) bool hasDistanceRemaining;
@property (nonatomic, readonly) bool hasFuelPercentRemaining;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)chargePercentRemaining;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)distanceRemaining;
- (id)fuelPercentRemaining;
- (bool)hasChargePercentRemaining;
- (bool)hasDistanceRemaining;
- (bool)hasFuelPercentRemaining;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setChargePercentRemaining:(id)arg1;
- (void)setDistanceRemaining:(id)arg1;
- (void)setFuelPercentRemaining:(id)arg1;
- (void)writeTo:(id)arg1;

@end

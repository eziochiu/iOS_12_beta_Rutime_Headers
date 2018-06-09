/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBGetRideStatusIntentResponse : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBGetRideStatusIntentResponse> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    _INPBRideStatus * _rideStatus;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasRideStatus;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBRideStatus *rideStatus;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasRideStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)rideStatus;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setRideStatus:(id)arg1;
- (void)writeTo:(id)arg1;

@end

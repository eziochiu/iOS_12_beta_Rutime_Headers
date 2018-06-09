/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBShareDestination : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBShareDestination> {
    INCodableAttribute * _associatedCodableAttribute;
    _INPBContact * _contact;
    int  _deviceType;
    struct { 
        unsigned int deviceType : 1; 
    }  _has;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, retain) _INPBContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceType;
@property (nonatomic, readonly) bool hasContact;
@property (nonatomic) bool hasDeviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)StringAsDeviceType:(id)arg1;
- (id)associatedCodableAttribute;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deviceType;
- (id)deviceTypeAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (bool)hasContact;
- (bool)hasDeviceType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setDeviceType:(int)arg1;
- (void)setHasDeviceType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

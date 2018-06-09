/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBHomeEntity : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBHomeEntity> {
    INCodableAttribute * _associatedCodableAttribute;
    int  _deviceType;
    int  _entityType;
    struct { 
        unsigned int deviceType : 1; 
        unsigned int entityType : 1; 
    }  _has;
    _INPBString * _name;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int deviceType;
@property (nonatomic) int entityType;
@property (nonatomic) bool hasDeviceType;
@property (nonatomic) bool hasEntityType;
@property (nonatomic, readonly) bool hasName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)StringAsDeviceType:(id)arg1;
- (int)StringAsEntityType:(id)arg1;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deviceType;
- (id)deviceTypeAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (int)entityType;
- (id)entityTypeAsString:(int)arg1;
- (bool)hasDeviceType;
- (bool)hasEntityType;
- (bool)hasName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setDeviceType:(int)arg1;
- (void)setEntityType:(int)arg1;
- (void)setHasDeviceType:(bool)arg1;
- (void)setHasEntityType:(bool)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBHomeFilter : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBHomeFilter> {
    _INPBDataString * _accessory;
    INCodableAttribute * _associatedCodableAttribute;
    NSArray * _entityIdentifiers;
    int  _entityType;
    _INPBDataString * _group;
    struct { 
        unsigned int entityType : 1; 
        unsigned int serviceType : 1; 
        unsigned int subServiceType : 1; 
    }  _has;
    _INPBDataString * _home;
    _INPBDataString * _homeZone;
    _INPBDataString * _room;
    _INPBDataString * _scene;
    _INPBDataString * _service;
    int  _serviceType;
    int  _subServiceType;
}

@property (nonatomic, retain) _INPBDataString *accessory;
@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *entityIdentifiers;
@property (nonatomic, readonly) unsigned long long entityIdentifiersCount;
@property (nonatomic) int entityType;
@property (nonatomic, retain) _INPBDataString *group;
@property (nonatomic, readonly) bool hasAccessory;
@property (nonatomic) bool hasEntityType;
@property (nonatomic, readonly) bool hasGroup;
@property (nonatomic, readonly) bool hasHome;
@property (nonatomic, readonly) bool hasHomeZone;
@property (nonatomic, readonly) bool hasRoom;
@property (nonatomic, readonly) bool hasScene;
@property (nonatomic, readonly) bool hasService;
@property (nonatomic) bool hasServiceType;
@property (nonatomic) bool hasSubServiceType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBDataString *home;
@property (nonatomic, retain) _INPBDataString *homeZone;
@property (nonatomic, retain) _INPBDataString *room;
@property (nonatomic, retain) _INPBDataString *scene;
@property (nonatomic, retain) _INPBDataString *service;
@property (nonatomic) int serviceType;
@property (nonatomic) int subServiceType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)StringAsEntityType:(id)arg1;
- (int)StringAsServiceType:(id)arg1;
- (int)StringAsSubServiceType:(id)arg1;
- (id)accessory;
- (void)addEntityIdentifiers:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearEntityIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)entityIdentifiers;
- (id)entityIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)entityIdentifiersCount;
- (int)entityType;
- (id)entityTypeAsString:(int)arg1;
- (id)group;
- (bool)hasAccessory;
- (bool)hasEntityType;
- (bool)hasGroup;
- (bool)hasHome;
- (bool)hasHomeZone;
- (bool)hasRoom;
- (bool)hasScene;
- (bool)hasService;
- (bool)hasServiceType;
- (bool)hasSubServiceType;
- (unsigned long long)hash;
- (id)home;
- (id)homeZone;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)room;
- (id)scene;
- (id)service;
- (int)serviceType;
- (id)serviceTypeAsString:(int)arg1;
- (void)setAccessory:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setEntityIdentifiers:(id)arg1;
- (void)setEntityType:(int)arg1;
- (void)setGroup:(id)arg1;
- (void)setHasEntityType:(bool)arg1;
- (void)setHasServiceType:(bool)arg1;
- (void)setHasSubServiceType:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setHomeZone:(id)arg1;
- (void)setRoom:(id)arg1;
- (void)setScene:(id)arg1;
- (void)setService:(id)arg1;
- (void)setServiceType:(int)arg1;
- (void)setSubServiceType:(int)arg1;
- (int)subServiceType;
- (id)subServiceTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

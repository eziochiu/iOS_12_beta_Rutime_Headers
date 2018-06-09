/* made by EzioChiu.
 */

@protocol _INPBHomeFilter <NSObject>

@required

- (int)StringAsEntityType:(NSString *)arg1;
- (int)StringAsServiceType:(NSString *)arg1;
- (int)StringAsSubServiceType:(NSString *)arg1;
- (_INPBDataString *)accessory;
- (void)addEntityIdentifiers:(NSString *)arg1;
- (void)clearEntityIdentifiers;
- (NSArray *)entityIdentifiers;
- (NSString *)entityIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)entityIdentifiersCount;
- (int)entityType;
- (NSString *)entityTypeAsString:(int)arg1;
- (_INPBDataString *)group;
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
- (_INPBDataString *)home;
- (_INPBDataString *)homeZone;
- (_INPBDataString *)room;
- (_INPBDataString *)scene;
- (_INPBDataString *)service;
- (int)serviceType;
- (NSString *)serviceTypeAsString:(int)arg1;
- (void)setAccessory:(_INPBDataString *)arg1;
- (void)setEntityIdentifiers:(NSArray *)arg1;
- (void)setEntityType:(int)arg1;
- (void)setGroup:(_INPBDataString *)arg1;
- (void)setHasEntityType:(bool)arg1;
- (void)setHasServiceType:(bool)arg1;
- (void)setHasSubServiceType:(bool)arg1;
- (void)setHome:(_INPBDataString *)arg1;
- (void)setHomeZone:(_INPBDataString *)arg1;
- (void)setRoom:(_INPBDataString *)arg1;
- (void)setScene:(_INPBDataString *)arg1;
- (void)setService:(_INPBDataString *)arg1;
- (void)setServiceType:(int)arg1;
- (void)setSubServiceType:(int)arg1;
- (int)subServiceType;
- (NSString *)subServiceTypeAsString:(int)arg1;

@end

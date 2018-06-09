/* made by EzioChiu.
 */

@protocol _INPBHomeEntity <NSObject>

@required

- (int)StringAsDeviceType:(NSString *)arg1;
- (int)StringAsEntityType:(NSString *)arg1;
- (int)deviceType;
- (NSString *)deviceTypeAsString:(int)arg1;
- (int)entityType;
- (NSString *)entityTypeAsString:(int)arg1;
- (bool)hasDeviceType;
- (bool)hasEntityType;
- (bool)hasName;
- (_INPBString *)name;
- (void)setDeviceType:(int)arg1;
- (void)setEntityType:(int)arg1;
- (void)setHasDeviceType:(bool)arg1;
- (void)setHasEntityType:(bool)arg1;
- (void)setName:(_INPBString *)arg1;

@end

/* made by EzioChiu.
 */

@protocol _INPBSpatialEventTrigger <NSObject>

@required

- (int)StringAsEvent:(NSString *)arg1;
- (int)event;
- (NSString *)eventAsString:(int)arg1;
- (bool)hasEvent;
- (bool)hasLocation;
- (_INPBLocationValue *)location;
- (void)setEvent:(int)arg1;
- (void)setHasEvent:(bool)arg1;
- (void)setLocation:(_INPBLocationValue *)arg1;

@end

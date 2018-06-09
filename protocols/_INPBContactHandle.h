/* made by EzioChiu.
 */

@protocol _INPBContactHandle <NSObject>

@required

- (int)StringAsType:(NSString *)arg1;
- (bool)hasLabel;
- (bool)hasType;
- (bool)hasValue;
- (NSString *)label;
- (void)setHasType:(bool)arg1;
- (void)setLabel:(NSString *)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(NSString *)arg1;
- (int)type;
- (NSString *)typeAsString:(int)arg1;
- (NSString *)value;

@end

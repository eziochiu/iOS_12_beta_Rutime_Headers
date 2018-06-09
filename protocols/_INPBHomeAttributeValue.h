/* made by EzioChiu.
 */

@protocol _INPBHomeAttributeValue <NSObject>

@required

- (int)StringAsValueType:(NSString *)arg1;
- (bool)booleanValue;
- (double)doubleValue;
- (bool)hasBooleanValue;
- (bool)hasDoubleValue;
- (bool)hasIntegerValue;
- (bool)hasStringValue;
- (bool)hasValueType;
- (long long)integerValue;
- (void)setBooleanValue:(bool)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setHasBooleanValue:(bool)arg1;
- (void)setHasDoubleValue:(bool)arg1;
- (void)setHasIntegerValue:(bool)arg1;
- (void)setHasValueType:(bool)arg1;
- (void)setIntegerValue:(long long)arg1;
- (void)setStringValue:(NSString *)arg1;
- (void)setValueType:(int)arg1;
- (NSString *)stringValue;
- (int)valueType;
- (NSString *)valueTypeAsString:(int)arg1;

@end

/* made by EzioChiu.
 */

@protocol TSSPropertyValueValidator

@required

+ (TSSPropertySet *)propertiesAllowingNSNull;
+ (bool)validateDoubleValue:(double*)arg1 forProperty:(int)arg2;
+ (bool)validateFloatValue:(float*)arg1 forProperty:(int)arg2;
+ (bool)validateIntValue:(int*)arg1 forProperty:(int)arg2;
+ (bool)validateIntValue:(int*)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
+ (bool)validateIntValueAsBool:(int*)arg1 forProperty:(int)arg2;
+ (bool)validateObjectValue:(id*)arg1 withClass:(Class)arg2 forProperty:(int)arg3;

- (bool)validateDoubleValue:(double*)arg1 forProperty:(int)arg2;
- (bool)validateFloatValue:(float*)arg1 forProperty:(int)arg2;
- (bool)validateIntValue:(int*)arg1 forProperty:(int)arg2;
- (bool)validateIntValue:(int*)arg1 forProperty:(int)arg2 min:(int)arg3 max:(int)arg4;
- (bool)validateIntValueAsBool:(int*)arg1 forProperty:(int)arg2;
- (bool)validateObjectValue:(id*)arg1 withClass:(Class)arg2 forProperty:(int)arg3;

@end

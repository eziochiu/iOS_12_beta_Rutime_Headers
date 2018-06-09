/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSSPropertyMap : NSObject <NSCopying, TSSPropertySource> {
    struct TSSPropertyStore { } * mStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)propertyMap;
+ (id)propertyMapWithPropertiesAndValues:(int)arg1;
+ (id)propertyMapWithPropertyMap:(id)arg1;

- (double)CGFloatValueForProperty:(int)arg1;
- (void)addValuesFromPropertyMap:(id)arg1;
- (id)allKeys;
- (id)allProperties;
- (id)boxedObjectForProperty:(int)arg1;
- (bool)containsAnyPropertyInProperties:(id)arg1;
- (bool)containsProperty:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (bool)definesProperty:(int)arg1;
- (id)description;
- (id)diff:(id)arg1;
- (id)diffOnlyDifferences:(id)arg1;
- (id)diffPropertyNames:(id)arg1;
- (double)doubleValueForProperty:(int)arg1;
- (void)enumeratePropertiesAndObjectsUsingBlock:(id /* block */)arg1;
- (void)filterWithProperties:(id)arg1;
- (float)floatValueForProperty:(int)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithFirstKey:(int)arg1 andArgumentList:(char *)arg2;
- (id)initWithPropertiesAndValues:(int)arg1;
- (id)initWithPropertyMap:(id)arg1;
- (int)intValueForProperty:(int)arg1;
- (bool)isEqual:(id)arg1;
- (void)minusPropertyMap:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForProperty:(int)arg1;
- (id)old_description;
- (void)pSetArrayOfFloats:(double)arg1 forProperty:(int)arg2;
- (void)pSetArrayOfObjects:(/* Warning: unhandled array encoding: '[9@]' */ id)arg1 forProperty:(int)arg2;
- (void)p_getAllKeys:(int*)arg1;
- (id)propertyMapByAddingValuesFromPropertyMap:(id)arg1;
- (id)propertyMapByRemovingValuesForProperties:(id)arg1;
- (id)propertyMapByRemovingValuesFromPropertyMap:(id)arg1;
- (id)propertyMapWithProperties:(id)arg1;
- (void)removeAllPropertyValues;
- (void)removeValueForProperty:(int)arg1;
- (void)removeValuesForProperties:(id)arg1;
- (void)removeValuesFromPropertyMap:(id)arg1;
- (void)setBoolValue:(bool)arg1 forProperty:(int)arg2;
- (void)setBoxedObject:(id)arg1 forProperty:(int)arg2;
- (void)setCGFloatValue:(double)arg1 forProperty:(int)arg2;
- (void)setDoubleValue:(double)arg1 forProperty:(int)arg2;
- (void)setFloatValue:(float)arg1 forProperty:(int)arg2;
- (void)setIntValue:(int)arg1 forProperty:(int)arg2;
- (void)setObject:(id)arg1 forProperty:(int)arg2;

@end

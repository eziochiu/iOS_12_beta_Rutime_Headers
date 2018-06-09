/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSSPropertySet : NSObject <NSCopying, NSMutableCopying> {
    id  mIndexSet;
}

+ (id)p_mutableIndexSetWithFirstProperty:(int)arg1 argumentList:(char *)arg2;
+ (id)propertySet;
+ (id)propertySetWithProperties:(int)arg1;
+ (id)propertySetWithProperty:(int)arg1;

- (bool)containsProperties:(id)arg1;
- (bool)containsProperty:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (void)enumeratePropertiesUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFirstProperty:(int)arg1 argumentList:(char *)arg2;
- (id)initWithIndexSet:(id)arg1;
- (id)initWithProperties:(int)arg1;
- (id)initWithPropertySet:(id)arg1;
- (bool)intersectsProperties:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)propertySetByAddingProperties:(int)arg1;
- (id)propertySetByAddingPropertiesFromSet:(id)arg1;
- (id)propertySetByAddingProperty:(int)arg1;
- (id)propertySetByIntersectingWithPropertySet:(id)arg1;
- (id)propertySetByRemovingProperties:(int)arg1;
- (id)propertySetByRemovingPropertiesFromSet:(id)arg1;
- (id)propertySetByRemovingProperty:(int)arg1;
- (id)propertyStrings;

@end

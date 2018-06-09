/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSLazyPropertyList : NSObject <NSCopying, NSSecureCoding>

@property (readonly) NSDictionary *propertyList;

+ (id)lazyPropertyListWithContext:(struct LSContext { struct LSDatabase {} *x1; }*)arg1 unit:(unsigned int)arg2;
+ (id)lazyPropertyListWithLazyPropertyLists:(id)arg1;
+ (id)lazyPropertyListWithPropertyList:(id)arg1;
+ (id)lazyPropertyListWithPropertyListData:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)_filterValueFromPropertyList:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3;
- (bool)_getPropertyList:(id*)arg1;
- (bool)_getValue:(id*)arg1 forPropertyListKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)objectForPropertyListKey:(id)arg1 ofClass:(Class)arg2;
- (id)objectForPropertyListKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3;
- (id)objectsForPropertyListKeys:(id)arg1;
- (id)propertyList;

@end

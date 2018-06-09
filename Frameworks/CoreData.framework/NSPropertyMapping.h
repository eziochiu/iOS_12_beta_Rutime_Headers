/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPropertyMapping : NSObject <NSSecureCoding> {
    NSString * _name;
    struct __propertyMappingFlags { 
        unsigned int _isInUse : 1; 
        unsigned int _reservedPropertyMapping : 31; 
    }  _propertyMappingFlags;
    NSArray * _propertyTransforms;
    void * _reserved;
    NSArray * _transformValidations;
    NSDictionary * _userInfo;
    NSExpression * _valueExpression;
}

@property (copy) NSString *name;
@property (retain) NSDictionary *userInfo;
@property (retain) NSExpression *valueExpression;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void)_createCachesAndOptimizeState;
- (id)_initWithDestinationName:(id)arg1 valueExpression:(id)arg2;
- (id)_propertyTransforms;
- (void)_setIsEditable:(bool)arg1;
- (void)_setPropertyTransforms:(id)arg1;
- (void)_setTransformValidations:(id)arg1;
- (void)_throwIfNotEditable;
- (id)_transformValidations;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 valueExpression:(id)arg2;
- (bool)isEditable;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setValueExpression:(id)arg1;
- (id)userInfo;
- (id)valueExpression;

@end

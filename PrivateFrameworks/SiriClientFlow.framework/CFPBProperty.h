/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFPBProperty : NSObject {
    NSInvocation * _convertFromString;
    NSInvocation * _convertToString;
    NSInvocation * _count;
    int (* _fromDictionaryReprFn;
    NSInvocation * _getter;
    NSInvocation * _has;
    NSString * _name;
    Class  _objectType;
    NSInvocation * _setter;
    NSArray * _structFields;
    NSString * _structName;
    unsigned long long  _structSize;
    Class  _subObjectType;
    BOOL  _subType;
    int (* _toDictionaryReprFn;
    BOOL  _type;
}

@property (nonatomic, readonly) bool canConvertFromString;
@property (nonatomic, readonly) bool isObject;
@property (nonatomic, readonly) bool isStruct;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) Class objectType;
@property (nonatomic, retain) Class subObjectType;
@property (nonatomic) BOOL subType;
@property (nonatomic) BOOL type;

+ (id)getValidPropertiesForType:(Class)arg1 withCache:(id)arg2;
+ (id)pbPropertyFor:(struct objc_property { }*)arg1 type:(Class)arg2;

- (void).cxx_destruct;
- (id)_parseStructDefinition:(id)arg1;
- (bool)canConvertFromString;
- (id)description;
- (unsigned long long)getCountOfRepeatedValuesFromInstance:(id)arg1;
- (id)getNumberValueFromInstance:(id)arg1;
- (id)getObjValueFromInstance:(id)arg1;
- (id)getPtrArrayValueFromInstance:(id)arg1;
- (id)getStructValueFromInstance:(id)arg1;
- (id)initWith:(struct objc_property { }*)arg1 type:(Class)arg2;
- (bool)instanceHasValue:(id)arg1;
- (bool)isObject;
- (bool)isStruct;
- (id)name;
- (Class)objectType;
- (void)setName:(id)arg1;
- (void)setNumberValue:(id)arg1 onInstance:(id)arg2;
- (void)setObjValue:(id)arg1 onInstance:(id)arg2;
- (void)setObjectType:(Class)arg1;
- (bool)setStructValue:(id)arg1 onInstance:(id)arg2;
- (void)setSubObjectType:(Class)arg1;
- (void)setSubType:(BOOL)arg1;
- (void)setType:(BOOL)arg1;
- (Class)subObjectType;
- (BOOL)subType;
- (BOOL)type;

@end

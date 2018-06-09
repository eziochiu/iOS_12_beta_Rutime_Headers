/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLFeatureDescription : NSObject <NSCopying> {
    NSString * _name;
    bool  _optional;
    long long  _type;
    NSDictionary * _valueContraints;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (getter=isOptional, nonatomic, readonly) bool optional;
@property (nonatomic, readonly) long long type;
@property (retain) NSDictionary *valueContraints;

+ (id)featureDescriptionWithName:(id)arg1 type:(long long)arg2 optional:(bool)arg3 constraints:(id)arg4;

- (void).cxx_destruct;
- (bool)allowsValuesWithDescription:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugQuickLookObject;
- (id)description;
- (id)dictionaryConstraint;
- (id)imageConstraint;
- (id)initWithName:(id)arg1 type:(long long)arg2 optional:(bool)arg3 contraints:(id)arg4;
- (bool)isAllowedValue:(id)arg1;
- (bool)isAllowedValue:(id)arg1 error:(id*)arg2;
- (bool)isOptional;
- (id)multiArrayConstraint;
- (id)name;
- (id)sequenceConstraint;
- (void)setValueContraints:(id)arg1;
- (long long)type;
- (id)valueContraints;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSRWIDependencyDomainProperty : NSObject {
    IKJSRWIDependencyDomainType * _domainType;
    NSString * _name;
    NSString * _propertyType;
    NSString * _purpose;
    NSString * _reference;
    bool  _required;
}

@property (nonatomic, readonly) IKJSRWIDependencyDomainType *domainType;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *propertyType;
@property (nonatomic, readonly) NSString *purpose;
@property (getter=isRequired, nonatomic, readonly) bool required;

+ (id)propertyNameMapping;
+ (id)typeMapping;

- (void).cxx_destruct;
- (id)domainType;
- (id)initWithPropertyDictionary:(id)arg1 forType:(id)arg2;
- (bool)isRequired;
- (id)methodParameterString;
- (id)name;
- (id)propertyDefinitionString;
- (id)propertyType;
- (id)purpose;

@end

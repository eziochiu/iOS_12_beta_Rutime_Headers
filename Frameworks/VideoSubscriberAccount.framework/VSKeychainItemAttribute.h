/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSKeychainItemAttribute : NSObject <NSCopying> {
    unsigned long long  _attributeType;
    NSString * _attributeValueClassName;
    id  _defaultValue;
    NSString * _name;
    const struct __CFString { } * _secItemAttributeKey;
}

@property (nonatomic) unsigned long long attributeType;
@property (nonatomic, copy) NSString *attributeValueClassName;
@property (nonatomic, retain) id defaultValue;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) const struct __CFString { }*secItemAttributeKey;

- (void).cxx_destruct;
- (unsigned long long)attributeType;
- (id)attributeValueClassName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultValue;
- (id)name;
- (const struct __CFString { }*)secItemAttributeKey;
- (void)setAttributeType:(unsigned long long)arg1;
- (void)setAttributeValueClassName:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSecItemAttributeKey:(struct __CFString { }*)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNAggregateKeyDescriptor : NSObject <CNKeyDescriptor_Private> {
    NSArray * _keyDescriptors;
    NSString * _privateDescription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *keyDescriptors;
@property (nonatomic, copy) NSString *privateDescription;
@property (readonly) Class superclass;

+ (id)keyDescriptorWithKeyDescriptors:(id)arg1 description:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_cn_executeGetterForRepresentedKeys:(id /* block */)arg1;
- (id)_cn_optionalKeys;
- (id)_cn_recursiveDescriptionWithPrefix:(id)arg1;
- (id)_cn_requiredKeys;
- (id)_recursiveDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyDescriptors:(id)arg1 description:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)keyDescriptors;
- (id)privateDescription;
- (void)setKeyDescriptors:(id)arg1;
- (void)setPrivateDescription:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTTestRecipeInfo : NSObject <NSSecureCoding> {
    NSString * _domainIdentifier;
    NSIndexSet * _events;
    NSString * _title;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) NSString *domainIdentifier;
@property (nonatomic, readonly) NSIndexSet *events;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)domainIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)events;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTestRecipe:(id)arg1 domainIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)title;
- (id)uniqueIdentifier;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECPersonItem : _DECItem {
    CNContact * _contact;
    NSString * _contactIdentifier;
    CNContactProperty * _contactProperty;
}

@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) CNContactProperty *contactProperty;

+ (id)_contactStore;
+ (unsigned long long)category;
+ (id)personWithContact:(id)arg1;
+ (id)personWithContactIdentifier:(id)arg1;
+ (id)personWithContactProperty:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToDECPersonItem:(id)arg1;
- (id)contact;
- (id)contactIdentifier;
- (id)contactProperty;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1;
- (id)initWithContactProperty:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalent:(id)arg1;

@end

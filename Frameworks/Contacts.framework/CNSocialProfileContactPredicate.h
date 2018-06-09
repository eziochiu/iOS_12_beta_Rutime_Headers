/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNSocialProfileContactPredicate : CNPredicate {
    CNSocialProfile * _socialProfile;
}

@property (nonatomic, readonly, copy) CNSocialProfile *socialProfile;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSocialProfile:(id)arg1;
- (id)socialProfile;

@end

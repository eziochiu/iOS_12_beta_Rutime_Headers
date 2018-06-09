/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContainerPermissions : NSObject <NSCopying, NSSecureCoding> {
    bool  _canCreateContacts;
    bool  _canCreateGroups;
    bool  _canDeleteContacts;
}

@property (nonatomic, readonly) bool canCreateContacts;
@property (nonatomic, readonly) bool canCreateGroups;
@property (nonatomic, readonly) bool canDeleteContacts;

+ (bool)supportsSecureCoding;

- (bool)canCreateContacts;
- (bool)canCreateGroups;
- (bool)canDeleteContacts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCanCreateContacts:(bool)arg1 canDeleteContacts:(bool)arg2 canCreateGroups:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end

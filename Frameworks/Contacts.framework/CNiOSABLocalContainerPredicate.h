/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABLocalContainerPredicate : CNPredicate <CNiOSContainerPredicate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (struct __CFArray { }*)cn_copyContainersInAddressBook:(void*)arg1 error:(struct __CFError {}**)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)includesDisabledContainers;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;

@end

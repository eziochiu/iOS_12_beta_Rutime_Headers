/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABAccountForContainerPredicate : CNPredicate <CNiOSAccountPredicate> {
    NSString * _containerIdentifier;
}

@property (nonatomic, readonly, copy) NSString *containerIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct __CFArray { }*)cn_copyAccountsInAddressBook:(void*)arg1 error:(struct __CFError {}**)arg2;
- (id)containerIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerIdentifier:(id)arg1;
- (id)initWithPredicate:(id)arg1;

@end

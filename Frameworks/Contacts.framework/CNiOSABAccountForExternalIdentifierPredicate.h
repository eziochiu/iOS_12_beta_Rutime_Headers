/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABAccountForExternalIdentifierPredicate : CNPredicate <CNiOSAccountPredicate> {
    NSString * _externalIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *externalIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct __CFArray { }*)cn_copyAccountsInAddressBook:(void*)arg1 error:(struct __CFError {}**)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)externalIdentifier;
- (id)initWithAccountExternalIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;

@end

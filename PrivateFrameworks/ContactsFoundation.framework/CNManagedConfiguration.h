/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNManagedConfiguration : NSObject {
    NSString * _bundleIdentifier;
    <CNManagedProfileConnection> * _profileConnection;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) <CNManagedProfileConnection> *profileConnection;

+ (id)bundleIdentifierForAuditToken:(struct { unsigned int x1[8]; }*)arg1;
+ (id)bundleIdentifierFromEntitlementForAuditToken:(struct { unsigned int x1[8]; }*)arg1;
+ (id)bundleIdentifierFromInfoPlistForAuditToken:(struct { unsigned int x1[8]; }*)arg1;
+ (id)os_log;

- (void).cxx_destruct;
- (id)accountForIdentifier:(id)arg1;
- (bool)accountIsManaged:(id)arg1;
- (bool)accountIsManagedForIdentifier:(id)arg1;
- (bool)allowsLocalAccount;
- (id)bundleIdentifier;
- (bool)canReadFromAccountWithIdentifier:(id)arg1;
- (bool)canWriteToAccountWithIdentifier:(id)arg1;
- (bool)deviceHasManagementRestrictions;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1 managedProfileConnection:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 managedProfileConnection:(id)arg2;
- (id)profileConnection;
- (id)readableAccountIdentifiersFromIdentifiers:(id)arg1;
- (id)readableAccountsFromAccounts:(id)arg1;
- (id)writableAccountIdentifiersFromIdentifiers:(id)arg1;
- (id)writableAccountsFromAccounts:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNManagedProfileConnection : NSObject <CNManagedProfileConnection> {
    MCProfileConnection * _profileConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MCProfileConnection *profileConnection;
@property (readonly) Class superclass;

+ (id)sharedConnection;

- (void).cxx_destruct;
- (id)filteredOpenInAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(long long)arg3;
- (id)filteredOpenInOriginatingAccounts:(id)arg1 targetAppBundleID:(id)arg2 targetAccountManagement:(long long)arg3;
- (id)init;
- (id)initWithProfileConnection:(id)arg1;
- (bool)isOpenInRestrictionInEffect;
- (bool)mayShowLocalAccountsForBundleID:(id)arg1 sourceAccountManagement:(long long)arg2;
- (id)profileConnection;
- (void)setProfileConnection:(id)arg1;

@end
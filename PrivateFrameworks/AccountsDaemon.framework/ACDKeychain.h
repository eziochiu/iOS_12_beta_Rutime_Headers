/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDKeychain : NSObject

+ (void)_addKnownMigratedKeychainItem:(id)arg1;
+ (bool)_isKnownMigratedKeychainItem:(id)arg1;
+ (id)_knownMigratedKeychainItems;
+ (id)_knownMissingKeychainItems;
+ (void)_migrateKeychainItemIfNecessary:(id)arg1;
+ (id)_missingKeychainItemSpecifierForService:(id)arg1 username:(id)arg2;
+ (void)addItemWithServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 passwordData:(id)arg4 options:(id)arg5 error:(id*)arg6;
+ (bool)addSyncItemWithServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 extension:(id)arg5 error:(id*)arg6;
+ (bool)canAccessPasswordsWithPolicy:(id)arg1;
+ (id)keychainDeletedAccounts;
+ (id)passwordForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id*)arg5;
+ (bool)removeItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id*)arg5;
+ (bool)removeTombstoneForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 extension:(id)arg4 error:(id*)arg5;
+ (void)updateItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 newValues:(id)arg4 options:(id)arg5 error:(id*)arg6;
+ (bool)updateSyncItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 newValues:(id)arg4 extension:(id)arg5 error:(id*)arg6;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

@interface FMKeychainManager : NSObject

+ (id)sharedInstance;

- (id)_accessibilityForDataProtectionClass:(long long)arg1 migratable:(bool)arg2;
- (int)_add:(id)arg1;
- (int)_delete:(id)arg1;
- (id)_query:(id)arg1 error:(id*)arg2;
- (int)_updateWithQuery:(id)arg1 attributes:(id)arg2;
- (id)allAccountsForService:(id)arg1;
- (id)allRecords;
- (id)allServices;
- (id)dataForAccount:(id)arg1 service:(id)arg2;
- (bool)deleteDataForAccount:(id)arg1 service:(id)arg2;
- (id)itemForAccount:(id)arg1 service:(id)arg2 error:(id*)arg3;
- (id)passwordForAccount:(id)arg1 service:(id)arg2;
- (bool)setData:(id)arg1 forAccount:(id)arg2 service:(id)arg3;
- (bool)setData:(id)arg1 forAccount:(id)arg2 service:(id)arg3 synchronizable:(long long)arg4 dataProtectionClass:(long long)arg5 migratable:(long long)arg6;
- (bool)setPassword:(id)arg1 forAccount:(id)arg2 service:(id)arg3;
- (bool)setPassword:(id)arg1 forAccount:(id)arg2 service:(id)arg3 synchronizable:(long long)arg4 dataProtectionClass:(long long)arg5 migratable:(long long)arg6;

@end

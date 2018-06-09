/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMAdminPersistenceController : RMPersistenceController

+ (id)sharedController;

- (id)_storeConfigurations;
- (void)clearUsageDataForOrganization:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;
- (void)refreshUsageDataForOrganization:(id)arg1 withCompletionHandler:(id /* block */)arg2;

@end

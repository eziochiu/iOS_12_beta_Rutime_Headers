/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDAccessPluginManager : NSObject {
    NSObject<OS_dispatch_queue> * _accessPluginQueue;
    NSSet * _accessPlugins;
}

- (void).cxx_destruct;
- (id)_authorizationPluginForAccountType:(id)arg1;
- (void)authorizeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(id /* block */)arg4;
- (void)handleAccessRequestToAccountsOfType:(id)arg1 forClient:(id)arg2 withOptions:(id)arg3 store:(id)arg4 allowUserInteraction:(bool)arg5 completion:(id /* block */)arg6;
- (id)init;
- (void)revokeAccessToAccountsOfType:(id)arg1 forClient:(id)arg2 store:(id)arg3 completion:(id /* block */)arg4;
- (void)revokeAllAccessToAccountsOfType:(id)arg1 store:(id)arg2 withCompletion:(id /* block */)arg3;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDAccountNotifier : NSObject {
    NSMutableDictionary * _instantiatedPluginsByAccountTypeID;
    NSSet * _notificationPlugins;
    NSDictionary * _pluginBundlesByAccountTypeID;
    NSMutableDictionary * _principalObjectByPluginBundleURL;
}

+ (id)_presumedAccountTypeIDsByNotificationPluginID;
+ (id)sharedAccountNotifier;

- (void).cxx_destruct;
- (void)_faultInNotificationPlugins;
- (id)_generateMapOfNotificationPluginBundlesByAccountTypeID;
- (id)_loadPrincipalObjectFromBundle:(id)arg1;
- (id)_loadPrincipalObjectsFromBundles:(id)arg1;
- (id)_pluginsRegisteredForAccountType:(id)arg1;
- (bool)canRemoveAccount:(id)arg1 inStore:(id)arg2;
- (bool)canSaveAccount:(id)arg1 inStore:(id)arg2;
- (id)init;
- (id)notificationPlugins;
- (void)postDidChangeNotificationForType:(int)arg1 inStore:(id)arg2 newAccount:(id)arg3 oldAccount:(id)arg4;
- (void)postDidPerformDataclassActionsOnAccount:(id)arg1 forDataclasses:(id)arg2;
- (bool)postWillChangeNotificationForType:(int)arg1 inStore:(id)arg2 newAccount:(id)arg3 oldAccount:(id)arg4;
- (void)postWillPerformDataclassActionsOnAccount:(id)arg1 forDataclasses:(id)arg2;

@end

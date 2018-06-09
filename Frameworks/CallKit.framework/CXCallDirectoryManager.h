/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallDirectoryManager : NSObject {
    NSXPCConnection * _defaultConnection;
    NSXPCConnection * _maintenanceConnection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSXPCConnection *defaultConnection;
@property (nonatomic, retain) NSXPCConnection *maintenanceConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)compactStoreWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)defaultConnection;
- (id)defaultConnectionRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)firstIdentificationEntriesForEnabledExtensionsWithPhoneNumbers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)firstIdentificationEntryForEnabledExtensionWithPhoneNumber:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getEnabledStatusForExtensionWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getExtensionsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)maintenanceConnection;
- (id)maintenanceConnectionRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)queue;
- (void)reloadExtensionWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDefaultConnection:(id)arg1;
- (void)setEnabled:(bool)arg1 forExtensionWithIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setMaintenanceConnection:(id)arg1;
- (void)setPrioritizedExtensionIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setQueue:(id)arg1;
- (void)synchronizeExtensionsWithCompletionHandler:(id /* block */)arg1;

@end

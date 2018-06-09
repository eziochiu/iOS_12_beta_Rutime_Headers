/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/NanoAppRegistry
 */

@interface NARApplicationWorkspace : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_connectionInvalidated;
- (void)_loadConnectionIfNeeded;
- (id)_workspaceServiceWithErrorHandler:(id /* block */)arg1;
- (id)connection;
- (void)dealloc;
- (void)getWorkspaceInfoIncludingHiddenApps:(bool)arg1 completion:(id /* block */)arg2;
- (void)getWorkspaceInfoWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)queue;
- (void)setConnection:(id)arg1;
- (void)setQueue:(id)arg1;
- (id)workspaceInfo:(id*)arg1;

@end

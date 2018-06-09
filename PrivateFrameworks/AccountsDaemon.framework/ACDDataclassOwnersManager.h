/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDDataclassOwnersManager : NSObject {
    NSXPCConnection * _connection;
    NSLock * _connectionLock;
}

- (void).cxx_destruct;
- (id)_dataclassOwnersManagerConnection;
- (id)actionsForAddingAccount:(id)arg1 affectingDataclass:(id)arg2 withError:(id*)arg3;
- (id)actionsForDeletingAccount:(id)arg1 affectingDataclass:(id)arg2 withError:(id*)arg3;
- (id)actionsForDisablingDataclass:(id)arg1 onAccount:(id)arg2 withError:(id*)arg3;
- (id)actionsForEnablingDataclass:(id)arg1 onAccount:(id)arg2 withError:(id*)arg3;
- (id)init;
- (bool)isPerformingDataclassActionsForAccount:(id)arg1;
- (bool)performDataclassActions:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 withError:(id*)arg4;
- (void)preloadDataclassOwnersWithError:(id*)arg1;

@end

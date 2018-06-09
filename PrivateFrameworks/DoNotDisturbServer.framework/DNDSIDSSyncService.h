/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSIDSSyncService : NSObject <DNDSSyncService, IDSServiceDelegate> {
    NSObject<OS_dispatch_queue> * _queue;
    Class  _recordClass;
    IDSService * _syncService;
    NSHashTable * _updateListeners;
    unsigned long long  _versionNumber;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_handleIncomingMessage:(id)arg1 sourceIdentifier:(id)arg2;
- (void)_queue_resume;
- (bool)_queue_sendRecordToRemotes:(id)arg1 error:(id*)arg2;
- (void)addUpdateListener:(id)arg1;
- (id)initWithRecordClass:(Class)arg1 versionNumber:(unsigned long long)arg2;
- (void)removeUpdateListener:(id)arg1;
- (void)resume;
- (void)sendRecordToRemotes:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;

@end

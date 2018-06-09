/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPassSyncService : NSObject <IDSServiceDelegate, NPKPassSyncEngineDataSource, NPKPassSyncEngineDelegate> {
    bool  _dropAllMessages;
    NPKPassSyncEngine * _passSyncEngine;
    NSObject<OS_dispatch_source> * _passSyncEngineArchiveTimer;
    NSObject<OS_dispatch_source> * _passSyncEngineSyncTimer;
    NPKPassSyncChange * _passSyncEngineSyncTimerCandidateChange;
    NPKPassSyncChange * _passSyncEngineSyncTimerProcessingChange;
    NSObject<OS_dispatch_queue> * _passSyncQueue;
    IDSService * _passSyncService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dropAllMessages;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NPKPassSyncEngine *passSyncEngine;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *passSyncEngineArchiveTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *passSyncEngineSyncTimer;
@property (nonatomic, retain) NPKPassSyncChange *passSyncEngineSyncTimerCandidateChange;
@property (nonatomic, retain) NPKPassSyncChange *passSyncEngineSyncTimerProcessingChange;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *passSyncQueue;
@property (nonatomic, retain) IDSService *passSyncService;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_archiveTimerFired;
- (id)_archivedPassSyncEngine;
- (void)_provideUpdatedLibraryStateToSyncEngineAndSyncIfNecessary:(bool)arg1;
- (void)_setSyncTimerWithCandidateChange:(id)arg1 processingChange:(id)arg2;
- (void)_syncNow;
- (void)_syncSubjectToSyncTimer;
- (void)_syncTimerFired;
- (void)catalogChanged:(id)arg1;
- (id)currentLibraryPassSyncStateWithReconciledState:(id)arg1;
- (bool)dropAllMessages;
- (void)handleCatalogChanged:(id)arg1;
- (void)handleIncomingCatalog:(id)arg1;
- (void)handleIncomingPassSettings:(unsigned long long)arg1 forPassWithUniqueID:(id)arg2;
- (void)handlePassLibraryChanged;
- (void)handleSettingsChanged:(unsigned long long)arg1 forPassWithUniqueID:(id)arg2;
- (id)initWithPassSyncEngineRole:(unsigned long long)arg1;
- (void)passSettingsChanged:(id)arg1;
- (id)passSyncEngine;
- (id)passSyncEngine:(id)arg1 dataForPassWithUniqueID:(id)arg2;
- (void)passSyncEngine:(id)arg1 receivedStateChangeProcessed:(id)arg2 changeAccepted:(bool)arg3;
- (void)passSyncEngine:(id)arg1 requestsAddPassData:(id)arg2 forSyncStateItem:(id)arg3 completion:(id /* block */)arg4;
- (void)passSyncEngine:(id)arg1 requestsRemovePassWithUniqueID:(id)arg2 completion:(id /* block */)arg3;
- (void)passSyncEngine:(id)arg1 requestsUpdatePassData:(id)arg2 forSyncStateItem:(id)arg3 completion:(id /* block */)arg4;
- (void)passSyncEngine:(id)arg1 sendProposedReconciledState:(id)arg2;
- (void)passSyncEngine:(id)arg1 sendReconciledStateAcceptedWithHash:(id)arg2;
- (void)passSyncEngine:(id)arg1 sendReconciledStateUnrecognizedWithHash:(id)arg2 currentPassSyncState:(id)arg3;
- (void)passSyncEngine:(id)arg1 sendStateChange:(id)arg2;
- (void)passSyncEngine:(id)arg1 sendStateChangeProcessedWithUUID:(id)arg2 changeAccepted:(bool)arg3;
- (id)passSyncEngineArchiveTimer;
- (void)passSyncEngineStateChanged:(id)arg1;
- (id)passSyncEngineSyncTimer;
- (id)passSyncEngineSyncTimerCandidateChange;
- (id)passSyncEngineSyncTimerProcessingChange;
- (id)passSyncQueue;
- (id)passSyncService;
- (void)proposedReconciledState:(id)arg1;
- (void)reconciledStateAccepted:(id)arg1;
- (void)reconciledStateUnrecognized:(id)arg1;
- (void)setDropAllMessages:(bool)arg1;
- (void)setPassSyncEngine:(id)arg1;
- (void)setPassSyncEngineArchiveTimer:(id)arg1;
- (void)setPassSyncEngineSyncTimer:(id)arg1;
- (void)setPassSyncEngineSyncTimerCandidateChange:(id)arg1;
- (void)setPassSyncEngineSyncTimerProcessingChange:(id)arg1;
- (void)setPassSyncQueue:(id)arg1;
- (void)setPassSyncService:(id)arg1;
- (unsigned long long)settingsForPassWithUniqueID:(id)arg1;
- (void)start;
- (void)suggestSync;
- (void)syncStateChangeProcessed:(id)arg1;
- (void)syncStateChanged:(id)arg1;

@end

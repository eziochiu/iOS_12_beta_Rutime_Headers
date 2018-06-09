/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCCompanionSyncService : NSObject <SYServiceDelegate, VCCompanionSyncSessionDelegate, VCVoiceShortcutSyncService> {
    VCCompanionSyncSession * _currentSession;
    <VCCompanionSyncServiceDelegate> * _delegate;
    bool  _hasBeenStarted;
    SYService * _syService;
    NSArray * _syncDataHandlers;
    NSObject<OS_dispatch_queue> * _syncQueue;
    NSString * _syncServiceIdentifier;
}

@property (nonatomic, retain) VCCompanionSyncSession *currentSession;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VCCompanionSyncServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasBeenStarted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) SYService *syService;
@property (nonatomic, readonly) NSArray *syncDataHandlers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic, retain) NSString *syncServiceIdentifier;

+ (void)initialize;
+ (id)successfulChangesFromAllSyncedChanges:(id)arg1 sessionFinishError:(id)arg2;

- (void).cxx_destruct;
- (void)companionSyncSession:(id)arg1 didFinishWithError:(id)arg2;
- (id)currentSession;
- (id)delegate;
- (bool)hasBeenStarted;
- (id)initWithSyncDataHandlers:(id)arg1 pairedDeviceIdentifier:(id)arg2;
- (bool)isRunningOnWatch;
- (void)requestFullResync;
- (void)requestSync;
- (bool)service:(id)arg1 startSession:(id)arg2 error:(id*)arg3;
- (void)setCurrentSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasBeenStarted:(bool)arg1;
- (void)setSyService:(id)arg1;
- (void)setSyncServiceIdentifier:(id)arg1;
- (bool)startSyncService:(id*)arg1;
- (void)startSyncSession;
- (void)stopSyncService;
- (id)syService;
- (id)syncDataHandlers;
- (id)syncQueue;
- (id)syncServiceIdentifier;
- (void)voiceShortcutsDidChange;

@end

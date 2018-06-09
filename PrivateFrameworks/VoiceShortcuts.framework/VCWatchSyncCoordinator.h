/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCWatchSyncCoordinator : NSObject <PSYSyncCoordinatorDelegate, VCCompanionSyncServiceDelegate> {
    NSMutableDictionary * _pairedDeviceByPairingID;
    PSYSyncCoordinator * _psySyncCoordinator;
    PSYServiceSyncSession * _psySyncSession;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSArray * _syncDataHandlers;
    NSMutableDictionary * _syncServiceByPairingID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *pairedDeviceByPairingID;
@property (nonatomic, readonly) PSYSyncCoordinator *psySyncCoordinator;
@property (nonatomic, retain) PSYServiceSyncSession *psySyncSession;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *syncDataHandlers;
@property (nonatomic, readonly) NSMutableDictionary *syncServiceByPairingID;

+ (void)initialize;

- (void).cxx_destruct;
- (void)actuallyStartSyncServiceForActivePairedDevice:(id)arg1;
- (void)companionSyncServiceDidFinishSyncSession:(id)arg1;
- (void)dealloc;
- (void)handleDidBecomeActiveNotification:(id)arg1;
- (void)handleDidBecomeInactiveNotification:(id)arg1;
- (void)handleDidPairNotification:(id)arg1;
- (void)handleDidUnpairNotification:(id)arg1;
- (id)initWithSyncDataHandlers:(id)arg1;
- (bool)isRunningOnWatch;
- (void)notifyPairedSyncThatSyncFinished;
- (id)pairedDeviceByPairingID;
- (id)psySyncCoordinator;
- (id)psySyncSession;
- (id)serialQueue;
- (void)setPsySyncSession:(id)arg1;
- (bool)shouldSyncWithActivePairedDevice:(id)arg1;
- (void)start;
- (void)startSyncToActivePairedDeviceIfAvailable;
- (void)stopCompanionSyncServiceForPairingID:(id)arg1;
- (void)subscribeToNanoRegistryNotifications;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;
- (id)syncDataHandlers;
- (id)syncServiceByPairingID;
- (void)unsubscribeFromNanoRegistryNotifications;

@end

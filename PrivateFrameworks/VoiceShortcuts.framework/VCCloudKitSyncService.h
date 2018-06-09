/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCCloudKitSyncService : NSObject <VCCloudKitClientDelegate, VCCloudKitNotificationCenterDelegate, VCVoiceShortcutSyncService> {
    VCCloudKitClient * _client;
    bool  _hasBeenStarted;
    VCCloudKitNotificationCenter * _notificationCenter;
    NSObject<OS_dispatch_queue> * _serialQueue;
    VCVoiceShortcutManager * _voiceShorcutManager;
}

@property (nonatomic, readonly) VCCloudKitClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasBeenStarted;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) VCCloudKitNotificationCenter *notificationCenter;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *syncServiceIdentifier;
@property (nonatomic, readonly) VCVoiceShortcutManager *voiceShorcutManager;

+ (void)initialize;

- (void).cxx_destruct;
- (struct NSOrderedSet { Class x1; }*)changesInLocalStore;
- (id)client;
- (void)cloudKitClientDidChangeRecordZone:(id)arg1;
- (bool)hasBeenStarted;
- (id)initWithVoiceShortcutManager:(id)arg1;
- (id)notificationCenter;
- (void)notificationCenter:(id)arg1 didReciveNotification:(id)arg2;
- (void)registerForPushNotifications;
- (bool)removeAllSyncStateFromLocalStore;
- (void)requestFullResync;
- (void)requestSync;
- (bool)saveChangesToLocalStore:(struct NSOrderedSet { Class x1; }*)arg1;
- (bool)saveSyncStateOfChangesToLocalStore:(struct NSOrderedSet { Class x1; }*)arg1;
- (id)serialQueue;
- (void)setHasBeenStarted:(bool)arg1;
- (bool)startSyncService:(id*)arg1;
- (void)syncChangesFromCloudKitToLocalStoreAllChanges:(bool)arg1;
- (void)syncChangesFromLocalStoreToCloudKit;
- (id)syncServiceIdentifier;
- (id)voiceShorcutManager;
- (void)voiceShortcutsDidChange;

@end

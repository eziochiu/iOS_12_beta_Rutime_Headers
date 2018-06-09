/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKSyncSessionController : NSObject {
    NSMutableSet * _messageIdsToIgnoreStatusUpdates;
    NSMutableDictionary * _notificationPayloadAcks;
    NSMutableDictionary * _standaloneStateByAccountId;
    NSMutableDictionary * _syncingAccountIdentityByUsername;
}

@property (nonatomic, retain) NSMutableSet *messageIdsToIgnoreStatusUpdates;
@property (nonatomic, retain) NSMutableDictionary *notificationPayloadAcks;
@property (nonatomic, retain) NSMutableDictionary *standaloneStateByAccountId;
@property (nonatomic, retain) NSMutableDictionary *syncingAccountIdentityByUsername;

- (void).cxx_destruct;
- (void)deleteStandaloneStateForAccountId:(id)arg1;
- (id)init;
- (id)messageIdsToIgnoreStatusUpdates;
- (id)notificationPayloadAcks;
- (void)setMessageIdsToIgnoreStatusUpdates:(id)arg1;
- (void)setNotificationPayloadAcks:(id)arg1;
- (void)setStandaloneStateByAccountId:(id)arg1;
- (void)setSyncingAccountIdentityByUsername:(id)arg1;
- (id)standaloneStateByAccountId;
- (unsigned long long)standaloneStateForAccountId:(id)arg1;
- (id)syncingAccountIdentityByUsername;
- (void)updateStandaloneState:(unsigned long long)arg1 forAccountId:(id)arg2;

@end

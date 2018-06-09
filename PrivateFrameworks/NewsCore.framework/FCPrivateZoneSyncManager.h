/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPrivateZoneSyncManager : NSObject <FCPrivateDataSyncManager> {
    NTPBPrivateZoneSyncState * _currentState;
    <FCPrivateZoneSyncManagerDelegate> * _delegate;
    NSArray * _desiredKeys;
    CKRecordZoneID * _recordZoneID;
    bool  _requiresBatchedSync;
}

@property (nonatomic, readonly, copy) NTPBPrivateZoneSyncState *currentState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FCPrivateZoneSyncManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *desiredKeys;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) CKRecordZoneID *recordZoneID;
@property (nonatomic, readonly) bool requiresBatchedSync;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_stateDidChange;
- (id)currentState;
- (id)delegate;
- (id)desiredKeys;
- (void)fetchChangesWithContext:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithRecordZoneID:(id)arg1 desiredKeys:(id)arg2 requiresBatchedSync:(bool)arg3 currentState:(id)arg4;
- (bool)isAwaitingFirstSync;
- (bool)isDirty;
- (void)markAsDirty;
- (void)notifyObservers;
- (id)recordZoneID;
- (bool)requiresBatchedSync;
- (void)setDelegate:(id)arg1;

@end

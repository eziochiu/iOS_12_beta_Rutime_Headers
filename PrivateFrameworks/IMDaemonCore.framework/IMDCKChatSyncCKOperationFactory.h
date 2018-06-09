/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDCKChatSyncCKOperationFactory : NSObject

- (id)_chatFetchRecordZoneChangesCKConfiguration;
- (id)_chatFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3;
- (id)_chatSyncOperationGroup;
- (id)_chatSyncOperationGroupWithName:(id)arg1;
- (id)_chatWriteRecordsCKConfiguration;
- (id)deleteChatCKOperationUsingRecordIDstoDelete:(id)arg1;
- (id)fetchChatZoneChangesCKOperationUsingToken:(id)arg1 zone:(id)arg2 resultsLimit:(unsigned long long)arg3;
- (id)fetchChatZoneChangesCKOperationUsingToken:(id)arg1 zone:(id)arg2 resultsLimit:(unsigned long long)arg3 groupName:(id)arg4;
- (id)saveChatsCKOperationUsingRecordsToSave:(id)arg1;

@end
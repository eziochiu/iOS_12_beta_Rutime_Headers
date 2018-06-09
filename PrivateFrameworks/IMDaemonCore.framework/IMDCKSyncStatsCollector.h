/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDCKSyncStatsCollector : NSObject {
    NSMutableDictionary * _inMemorySyncStatistics;
}

@property (nonatomic, retain) NSMutableDictionary *inMemorySyncStatistics;

+ (id)sharedInstance;

- (void)_incrementCountsForColumnSyncedKey:(id)arg1 syncedColumnAmountToIncrease:(unsigned long long)arg2 totalColumnAmountKey:(id)arg3 totalColumnAmountToIncrease:(unsigned long long)arg4;
- (id)currentInMemorySyncStatistics;
- (void)dealloc;
- (id)inMemorySyncStatistics;
- (void)incrementSyncedAttachmentCount:(unsigned long long)arg1 incrementTotalAttachmentCount:(unsigned long long)arg2;
- (void)incrementSyncedChatCount:(unsigned long long)arg1 incrementTotalChatCount:(unsigned long long)arg2;
- (void)incrementSyncedMessageCount:(unsigned long long)arg1 incrementTotalMessageCount:(unsigned long long)arg2;
- (id)init;
- (void)refreshWithDBSyncStatistics;
- (void)setInMemorySyncStatistics:(id)arg1;

@end

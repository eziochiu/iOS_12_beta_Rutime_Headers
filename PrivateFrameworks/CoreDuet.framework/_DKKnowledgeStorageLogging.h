/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKKnowledgeStorageLogging : NSObject <_DKKnowledgeStorageEventNotificationDelegate> {
    NSObject<OS_dispatch_queue> * _notificationQueue;
}

@property (readonly) NSObject<OS_dispatch_queue> *notificationQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_sendDistributedNotificationName:(id)arg1;
- (void)_sendDistributedNotificationName:(id)arg1 object:(id)arg2 throttledActivityName:(id)arg3;
- (void)_sendDistributedNotificationName:(id)arg1 streamNameCounts:(id)arg2;
- (void)_updateCounter:(id)arg1 streamNameCounts:(id)arg2;
- (id)init;
- (void)knowledgeStorage:(id)arg1 didDeleteEventsWithStreamNameCounts:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didInsertEventsWithStreamNameCounts:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didInsertLocalEventsWithStreamNameCounts:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didTombstoneEventsWithStreamNameCounts:(id)arg2;
- (id)notificationQueue;
- (id)portraitStreamNames;
- (id)streamNamesNotificationWhitelist;

@end

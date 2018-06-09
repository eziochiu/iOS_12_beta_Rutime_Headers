/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistoryURLCompletionDataStore : NSObject {
    NSObject<OS_dispatch_queue> * _dataStoreQueue;
    WBSHistoryService * _historyService;
    WBSURLCompletionHistorySnapshot * _snapshot;
    NSDate * _snapshotLastModifiedDate;
}

- (void).cxx_destruct;
- (struct RefPtr<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > { struct HistoryURLCompletionItem {} *x1; })_completionItemFromDatabase:(id)arg1 withVisitDatabaseID:(long long)arg2;
- (struct Ref<SafariShared::HistoryURLCompletionItem, WTF::DumbPtrTraits<SafariShared::HistoryURLCompletionItem> > { struct HistoryURLCompletionItem {} *x1; })_completionItemFromRow:(id)arg1;
- (void)_enumerateCompletionItemsForMostRecentVisitsFromDatabase:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_loadFromDatabaseIfNecessary;
- (void)getSnapshotWithCompletionHandler:(id /* block */)arg1;
- (id)initWithHistoryService:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCRecentsEnumerator : NSObject <BRCModule> {
    unsigned long long  _flushedNotifRank;
    br_pacer * _pacer;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _readyForIndexing;
    BRCAccountSession * _session;
    brc_task_tracker * _tracker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (readonly) Class superclass;

+ (void)dropLegacyCoreSpotlightIndexIfNeededWithCompletionHandler:(id /* block */)arg1;
+ (void)dropRecentsForSession:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)fileProviderManager;

- (void).cxx_destruct;
- (void)_activeSetDidChange;
- (void)_deleteAllRanks;
- (id)_deletedDocIdResultSetFromNotifRank:(unsigned long long)arg1 batchSize:(unsigned long long)arg2;
- (void)_enumerateChangesFromChangeToken:(id)arg1 limit:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_handleResetForRowID:(long long)arg1 notifRank:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)_readyForIndexingWithAckedRank:(unsigned long long)arg1;
- (void)_signalActiveSetDidChange;
- (void)cancel;
- (id)changeTokenForNotifRank:(unsigned long long)arg1;
- (void)close;
- (void)dealloc;
- (void)dropIndexForClientZone:(id)arg1;
- (void)enumerateChangesFromChangeToken:(id)arg1 limit:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)fileObjectID:(id)arg1 isNoLongerIndexableForNotifRank:(unsigned long long)arg2 itemIsLive:(bool)arg3;
- (void)garbageCollectRanksPreceding:(unsigned long long)arg1;
- (id)initWithAccountSession:(id)arg1;
- (bool)isCancelled;
- (void)maxNotifRankWasFlushed;
- (void)resume;

@end
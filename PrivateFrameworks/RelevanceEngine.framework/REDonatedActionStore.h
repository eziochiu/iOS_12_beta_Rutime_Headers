/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REDonatedActionStore : REObservableSingleton {
    REUpNextScheduler * _deletionsScheduler;
    REUpNextScheduler * _donationsScheduler;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_distributeAllDonatedActions;
- (void)_distributeRecentDeletedActions;
- (void)_distributeRecentDonatedActions;
- (void)_queue_distributeAllDonatedActions;
- (void)_queue_distributeDonatedActionsWithQuery:(id)arg1 prefKey:(struct __CFString { }*)arg2 actionBlock:(id /* block */)arg3;
- (void)_queue_distributeRecentDeletedActions;
- (void)_queue_distributeRecentDonatedActions;
- (void)_subscribeToNotifications;
- (void)dealloc;
- (void)fetchDonationWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)start;
- (void)triggerDistributeAllDonatedActions;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REDonatedActionsApplicationStore : NSObject <REDonatedActionFilteredCacheDelegate> {
    NSMutableSet * _applications;
    REDonatedActionFilteredCache * _cache;
    NSObject<OS_dispatch_queue> * _queue;
    REUpNextScheduler * _scheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notify;
- (void)_queue_loadApplicationsIfNeededWithCompletion:(id /* block */)arg1;
- (void)_sortDonationsByCount:(id)arg1 completion:(id /* block */)arg2;
- (void)donatedActionFilteredCacheCountDidChange;
- (void)donatedActionFilteredCacheDidAddDonation:(id)arg1;
- (void)donatedActionFilteredCacheDonationRemoved;
- (void)fetchAllUniqueDonationsWithBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)fetchApplicationsProvidingDonations:(id /* block */)arg1;
- (void)fetchDonationWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchTopDonationsForApplications:(id)arg1 block:(id /* block */)arg2;
- (id)init;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REDonatedActionFilteredCache : NSObject <REDonatedActionStoreObserver> {
    NSMapTable * _actions;
    <REDonatedActionFilteredCacheDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <REDonatedActionFilteredCacheDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_keyForAction:(id)arg1;
- (void)_queue_removeDonation:(id)arg1;
- (void)_queue_storeDonation:(id)arg1;
- (void)_refreshAllDonations;
- (void)dealloc;
- (id)delegate;
- (void)donationActionsStoreReceivedDonation:(id)arg1 isNewDonation:(bool)arg2;
- (void)donationActionsStoreRemovedDonation:(id)arg1;
- (void)fetchAllUniqueActions:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)fetchCountForAction:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)fetchDonationWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)reset;
- (void)setDelegate:(id)arg1;

@end

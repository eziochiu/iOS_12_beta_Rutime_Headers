/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMusicSubscriptionFairPlayController : NSObject {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSObject<OS_dispatch_queue> * _fairPlaySerialQueue;
    NSMutableDictionary * _subscriptionKeyBagStatusCache;
}

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_handleSubscriptionFairPlayKeyStatusChangedDistributedNotification:(id)arg1;
- (id)_init;
- (void)generateSubscriptionBagRequestWithAccountUniqueIdentifier:(unsigned long long)arg1 transactionType:(unsigned int)arg2 machineIDData:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)generateSubscriptionLeaseRequestWithAccountUniqueID:(unsigned long long)arg1 transactionType:(unsigned int)arg2 certificateData:(id)arg3 assetIDData:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)getKeyStatusForAccountUniqueIdentifier:(unsigned long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getKeyStatusListWithCompletionHandler:(id /* block */)arg1;
- (void)importSubscriptionKeyBagData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)importSubscriptionKeyBagData:(id)arg1 leaseInfoData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)stopSubscriptionLeaseForAccountUniqueIdentifier:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;

@end

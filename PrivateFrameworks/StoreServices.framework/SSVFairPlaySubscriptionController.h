/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVFairPlaySubscriptionController : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _hasValidSubscriptionStatusDidChangeNotifyToken;
    int  _subscriptionStatusDidChangeNotifyToken;
}

- (void).cxx_destruct;
- (id)_accountUniqueIdentifierToSubscriptionStatusWithFPSubscriptionInfoList:(struct FPSubscriptionInfo_ { unsigned long long x1; int x2; }*)arg1 subscriptionInfoListLength:(unsigned int)arg2;
- (void)_enumerateSubscriptionInfoUsingBlock:(id /* block */)arg1;
- (void)_notifySubscriptionStatusDidChange;
- (id)_subscriptionStatusForFPSubscriptionInfo:(struct FPSubscriptionInfo_ { unsigned long long x1; int x2; })arg1;
- (void)dealloc;
- (void)enumerateAccountSubscriptionStatusUsingBlock:(id /* block */)arg1;
- (bool)generateSubscriptionBagRequestWithAccountUniqueIdentifier:(unsigned long long)arg1 transactionType:(unsigned int)arg2 machineIDData:(id)arg3 returningSubscriptionBagData:(id*)arg4 error:(id*)arg5;
- (bool)generateSubscriptionLeaseRequestWithAccountUniqueID:(unsigned long long)arg1 transactionType:(unsigned int)arg2 certificateData:(id)arg3 assetIDData:(id)arg4 returningLeaseData:(id*)arg5 subscriptionBagData:(id*)arg6 error:(id*)arg7;
- (bool)importSubscriptionKeyBagData:(id)arg1 leaseInfoData:(id)arg2 returningError:(id*)arg3;
- (bool)importSubscriptionKeyBagData:(id)arg1 returningError:(id*)arg2;
- (id)init;
- (bool)stopSubscriptionLease:(id*)arg1;
- (id)subscriptionStatusForAccountUniqueIdentifier:(unsigned long long)arg1;

@end

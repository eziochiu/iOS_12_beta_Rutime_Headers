/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPaymentQueueInternal : NSObject {
    bool  _checkedIn;
    SKPaymentQueueClient * _client;
    bool  _isRefreshing;
    NSMutableArray * _localTransactions;
    NSMutableArray * _observerReferences;
    NSObject<OS_dispatch_queue> * _observerReferencesAccessQueue;
    SKXPCConnection * _requestConnection;
    SKXPCConnection * _responseConnection;
    bool  _restoreFinishedDuringRefresh;
    bool  _restoringCompletedTransactions;
    NSMutableArray * _transactions;
}

- (void).cxx_destruct;
- (void)dealloc;

@end

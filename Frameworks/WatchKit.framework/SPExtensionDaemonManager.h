/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface SPExtensionDaemonManager : NSObject {
    bool  _active;
    NSMutableDictionary * _coreLocationAsserts;
    NSObject<OS_dispatch_queue> * _coreLocationAssertsQueue;
    long long  _refCount;
    NSMutableSet * _transactionObservers;
    NSObject<OS_dispatch_queue> * _transactionQueue;
    NSObject<OS_dispatch_source> * _transactionTimer;
}

@property (nonatomic) bool active;
@property (nonatomic, retain) NSMutableDictionary *coreLocationAsserts;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *coreLocationAssertsQueue;
@property (nonatomic) long long refCount;
@property (nonatomic, retain) NSMutableSet *transactionObservers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *transactionQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *transactionTimer;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)active;
- (void)addTransactionObserver:(id)arg1;
- (void)beginTransaction;
- (id)coreLocationAsserts;
- (id)coreLocationAssertsQueue;
- (void)endTransaction;
- (id)init;
- (void)keepAlive;
- (long long)refCount;
- (void)removeTransactionObserver:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setCoreLocationAsserts:(id)arg1;
- (void)setCoreLocationAssertsQueue:(id)arg1;
- (void)setRefCount:(long long)arg1;
- (void)setTransactionObservers:(id)arg1;
- (void)setTransactionQueue:(id)arg1;
- (void)setTransactionTimer:(id)arg1;
- (void)startTransactionTimer;
- (id)transactionObservers;
- (id)transactionQueue;
- (void)transactionTimeOut;
- (id)transactionTimer;

@end

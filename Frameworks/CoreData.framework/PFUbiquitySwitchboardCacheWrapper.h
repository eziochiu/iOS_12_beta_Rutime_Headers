/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquitySwitchboardCacheWrapper : NSObject {
    bool  _allowSchedulingOfReceiptFileWrites;
    PFUbiquityKnowledgeVector * _baselineKV;
    PFUbiquityGlobalObjectIDCache * _globalIDCache;
    PFUbiquityKnowledgeVector * _kv;
    NSString * _localPeerID;
    PFUbiquityPeerRangeCache * _peerRangeCache;
    PFUbiquityPeerReceipt * _peerReceipt;
    bool  _pendingReceiptWrite;
    NSLock * _receiptFileLock;
    NSString * _storeName;
    PFUbiquityTransactionHistoryCache * _transactionHistoryCache;
    PFUbiquityTransactionLogCache * _transactionLogCache;
    PFUbiquityLocation * _ubiquityRootLocation;
}

@property (retain) PFUbiquityKnowledgeVector *baselineKV;
@property (nonatomic, readonly) PFUbiquityGlobalObjectIDCache *globalIDCache;
@property (retain) PFUbiquityKnowledgeVector *kv;
@property (nonatomic, readonly) NSString *localPeerID;
@property (nonatomic, readonly) PFUbiquityPeerRangeCache *peerRangeCache;
@property (nonatomic, readonly) PFUbiquityPeerReceipt *peerReceipt;
@property (nonatomic, readonly) NSString *storeName;
@property (nonatomic, readonly) PFUbiquityTransactionHistoryCache *transactionHistoryCache;
@property (nonatomic, readonly) PFUbiquityTransactionLogCache *transactionLogCache;
@property (nonatomic, retain) PFUbiquityLocation *ubiquityRootLocation;

- (void)_appWillResignActive:(id)arg1;
- (id)baselineKV;
- (void)cacheWrapperWillBeRemovedFromEntry;
- (void)dealloc;
- (id)globalIDCache;
- (id)init;
- (id)initWithStoreName:(id)arg1 privateStore:(id)arg2 forLocalPeerID:(id)arg3 andUbiquityRootLocation:(id)arg4;
- (id)kv;
- (id)localPeerID;
- (id)peerRangeCache;
- (id)peerReceipt;
- (void)scheduleReceiptFileWrite:(id)arg1;
- (void)setBaselineKV:(id)arg1;
- (void)setKv:(id)arg1;
- (void)setUbiquityRootLocation:(id)arg1;
- (id)storeName;
- (id)transactionHistoryCache;
- (id)transactionLogCache;
- (id)ubiquityRootLocation;
- (bool)writeReceiptFile:(bool)arg1 error:(id*)arg2;

@end

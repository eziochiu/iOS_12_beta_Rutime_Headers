/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDCacheBasedRequest : NSObject {
    CKDKeyValueDiskCache * _cache;
    unsigned long long  _fetchBatchSize;
    bool  _isCancelled;
    CKDPublicIdentityLookupService * _lookupService;
    CKDOperation * _operation;
}

@property (nonatomic) CKDKeyValueDiskCache *cache;
@property (nonatomic) unsigned long long fetchBatchSize;
@property (nonatomic) bool isCancelled;
@property (nonatomic) CKDPublicIdentityLookupService *lookupService;
@property (nonatomic) CKDOperation *operation;

- (void).cxx_destruct;
- (id)cache;
- (void)cancel;
- (unsigned long long)fetchBatchSize;
- (void)finishWithError:(id)arg1;
- (id)init;
- (bool)isCancelled;
- (id)lookupService;
- (id)operation;
- (void)performRequest;
- (void)setCache:(id)arg1;
- (void)setFetchBatchSize:(unsigned long long)arg1;
- (void)setIsCancelled:(bool)arg1;
- (void)setLookupService:(id)arg1;
- (void)setOperation:(id)arg1;
- (id)spawnURLRequests;

@end

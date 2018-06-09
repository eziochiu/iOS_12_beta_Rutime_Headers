/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKSyncRequestHandler : SBKRequestHandler <SBKSyncTransactionProcessing> {
    NSString * _overrideResponseDomainVersion;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _responseConflictedKeys;
    SBKSyncResponseData * _responseData;
    NSMutableDictionary * _responseDataByKey;
    NSMutableArray * _responseDeletedKeys;
    NSMutableArray * _responseUpdatedKeys;
    SBKTransactionController * _transactionController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *responseConflictedKeys;
@property (readonly) SBKSyncResponseData *responseData;
@property (readonly) NSArray *responseDeletedKeys;
@property (copy) NSString *responseDomainVersion;
@property (readonly) NSArray *responseUpdatedKeys;
@property (readonly) Class superclass;
@property (readonly) SBKTransactionController *transactionController;

+ (long long)conflictDetectionType;

- (void).cxx_destruct;
- (void)_onQueue_clearTransactionResponseData;
- (void)clearTransactionResponseData;
- (id)initWithBagContext:(id)arg1;
- (id)responseConflictedKeys;
- (id)responseData;
- (id)responseDataForResponseKey:(id)arg1;
- (id)responseDeletedKeys;
- (id)responseDomainVersion;
- (id)responseUpdatedKeys;
- (void)setResponseDomainVersion:(id)arg1;
- (void)startTransactionWithSyncAnchor:(id)arg1 keysToUpdate:(id)arg2 keysToDelete:(id)arg3 finishedBlock:(id /* block */)arg4;
- (void)transaction:(id)arg1 didProcessResponseData:(id)arg2;
- (id)transaction:(id)arg1 keyValuePairForUpdatedKey:(id)arg2;
- (void)transaction:(id)arg1 processDeletedKey:(id)arg2 isDirty:(bool*)arg3;
- (void)transaction:(id)arg1 processUpdatedKey:(id)arg2 data:(id)arg3 conflict:(bool)arg4 isDirty:(bool*)arg5;
- (void)transaction:(id)arg1 willProcessResponseData:(id)arg2;
- (id)transactionController;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPersistentHistoryHelper : NSObject

+ (id)_executePersistentHistoryChangeRequest:(id)arg1 withContext:(id)arg2;
+ (bool)deleteHistoryBeforeToken:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
+ (id)fetchTransactionCountSinceToken:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
+ (id)fetchTransactionsSinceToken:(id)arg1 withBatchSize:(unsigned long long)arg2 context:(id)arg3 error:(id*)arg4;
+ (id)fetchTransactionsSinceToken:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
+ (id)fetchTransactionsSinceToken:(id)arg1 withFetchLimit:(unsigned long long)arg2 context:(id)arg3 error:(id*)arg4;

@end
/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCERemoteDataCoordinator : NSObject {
    NSMutableDictionary * _cachedQuotes;
    TSCERemoteDataValueMap * _cachedSpecifiers;
    TSUIntToIntDictionary * _dataKindStatus;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _sourceFetchers;
    TSUPointerKeyDictionary * _storeMap;
}

@property (nonatomic, readonly) NSMutableDictionary *cachedQuotes;
@property (nonatomic, readonly) TSCERemoteDataValueMap *cachedSpecifiers;
@property (nonatomic, readonly) TSUIntToIntDictionary *dataKindStatus;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSMutableSet *sourceFetchers;
@property (nonatomic, readonly) TSUPointerKeyDictionary *storeMap;

+ (id)sharedCoordinator;

- (void).cxx_destruct;
- (void)addRemoteDataInterest:(id)arg1 forStore:(id)arg2;
- (void)autoCompleteQuotesWithInput:(id)arg1 completion:(id /* block */)arg2;
- (id)cachedQuoteForSingleSymbol:(id)arg1;
- (id)cachedQuotes;
- (id)cachedSpecifiers;
- (id)dataKindStatus;
- (void)fetchQuotesWithTickers:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (bool)isOnlineForDataKind:(long long)arg1;
- (struct TSUPointerKeyDictionary { Class x1; struct __CFDictionary {} *x2; }*)p_actionMapForKeys:(id)arg1 quotes:(struct NSDictionary { Class x1; }*)arg2;
- (bool)p_canUpdateStore:(id)arg1;
- (id)p_dataSourceFetcherForRemoteData:(id)arg1;
- (id)p_defaultStockList;
- (id)p_fetcherForDataKind:(long long)arg1;
- (id)p_localeStocks;
- (void)p_removeRemoteDataInterest:(id)arg1 forStore:(id)arg2;
- (void)p_revalidateOnlineStatus;
- (id)queue;
- (void)registerStore:(id)arg1;
- (void)removeRemoteDataInterest:(id)arg1 forStore:(id)arg2;
- (void)sourceFetcherDidGoOffline:(id)arg1 forKeys:(id)arg2;
- (void)sourceFetcherDidGoOnline:(id)arg1 forKeys:(id)arg2;
- (void)sourceFetcherDidUpdate:(id)arg1 withValues:(id)arg2 quotes:(struct NSDictionary { Class x1; }*)arg3;
- (id)sourceFetchers;
- (id)storeMap;
- (void)unregisterStore:(id)arg1;
- (void)updateKnownCachedStocksInStore:(id)arg1;
- (id)valueForSingleKey:(id)arg1;

@end

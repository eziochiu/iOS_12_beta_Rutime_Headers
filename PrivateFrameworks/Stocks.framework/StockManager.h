/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface StockManager : NSObject {
    NSMutableArray * _chartDataLRUCache;
    NSMutableArray * _defaultListStockSymbols;
    double  _lastModifiedTime;
    bool  _needRemoteAddNotification;
    bool  _needRemoteDeleteNotification;
    bool  _needRemoteMoveNotification;
    bool  _shouldPostSyncNotifications;
    NSMutableArray * _stocksList;
    NSUbiquitousKeyValueStore * _syncedKVStore;
}

+ (void)clearSharedManager;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)DeleteChartData:(id)arg1;
- (void)RemoveChartDataFromLRU:(id)arg1;
- (void)UpdateChartDataInLRU:(id)arg1;
- (void)_addStock:(id)arg1 withRemoteNotification:(bool)arg2;
- (void)_checkForAddedStocks;
- (void)_checkForDeletedStocks;
- (void)_checkForMovedStocks;
- (id)_defaultStockDictionaries;
- (void)_removeStock:(id)arg1 withRemoteNotification:(bool)arg2;
- (void)_saveDataChangesWithStockDictionaries:(id)arg1;
- (void)addStock:(id)arg1;
- (bool)anyMarketOpen;
- (void)clearCachedChartData;
- (void)clearCachedChartDataImageSets;
- (void)dealloc;
- (void)handleSyncedDataChanged:(id)arg1;
- (id)init;
- (id)makeSyncableStockListFromList:(id)arg1;
- (void)moveStockFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)purgeTransientData;
- (void)reloadStocksFromDefaults;
- (void)removeStock:(id)arg1;
- (void)saveDataChanges;
- (void)saveListChanges;
- (bool)setLocalStockListFromSyncableStockList:(id)arg1;
- (id)stockForURL:(id)arg1;
- (id)stockWithSymbol:(id)arg1;
- (id)stocksList;

@end

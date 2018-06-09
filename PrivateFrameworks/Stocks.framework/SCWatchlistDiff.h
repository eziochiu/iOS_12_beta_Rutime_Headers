/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface SCWatchlistDiff : NSObject {
    NSArray * _addedStocks;
    NSDictionary * _indexesOfReorderedStocks;
    NSArray * _removedStocks;
    NSArray * _reorderedStocks;
}

@property (nonatomic, readonly, copy) NSArray *addedStocks;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, readonly, copy) NSDictionary *indexesOfReorderedStocks;
@property (nonatomic, readonly, copy) NSArray *removedStocks;
@property (nonatomic, readonly, copy) NSArray *reorderedStocks;

+ (id)reorderedStocksFrom:(id)arg1 to:(id)arg2;

- (void).cxx_destruct;
- (id)addedStocks;
- (id)indexesOfReorderedStocks;
- (id)initWithOldStocks:(id)arg1 newStocks:(id)arg2;
- (bool)isEmpty;
- (id)removedStocks;
- (id)reorderedStocks;

@end

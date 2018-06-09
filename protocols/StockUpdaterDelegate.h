/* made by EzioChiu.
 */

@protocol StockUpdaterDelegate <NSObject>

@required

- (void)stockUpdater:(StockUpdater *)arg1 didFailWithError:(NSError *)arg2 whileUpdatingStocks:(NSArray *)arg3 comprehensive:(bool)arg4;
- (void)stockUpdater:(StockUpdater *)arg1 didRequestUpdateForStocks:(NSArray *)arg2 isComprehensive:(bool)arg3;
- (void)stockUpdater:(StockUpdater *)arg1 didUpdateStocks:(NSArray *)arg2 isComprehensive:(bool)arg3;

@end

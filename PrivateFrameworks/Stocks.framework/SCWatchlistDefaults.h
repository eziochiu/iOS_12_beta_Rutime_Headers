/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface SCWatchlistDefaults : NSObject {
    NSArray * _defaultStocks;
    NSArray * _defaultSymbols;
}

@property (nonatomic, readonly, copy) NSArray *defaultStocks;
@property (nonatomic, readonly, copy) NSArray *defaultSymbols;

+ (id)_defaultStocksByCountryCode;
+ (id)_iOS10DefaultsForCurrentCountry;
+ (id)_iOS7DefaultsForCurrentCountry;
+ (id)defaultsForCurrentCountry;
+ (id)defaultsHistoryForCurrentCountry;
+ (id)defaultsWithDefaultStocks:(id)arg1;
+ (id)emptyDefaults;

- (void).cxx_destruct;
- (id)defaultStocks;
- (id)defaultSymbols;
- (id)initWithDefaultStocks:(id)arg1;

@end

/* made by EzioChiu.
 */

@protocol NPKTransitAppletHistoryFetcherDelegate <NSObject>

@required

- (void)transitAppletHistoryFetcher:(NPKTransitAppletHistoryFetcher *)arg1 gotTransitAppletHistory:(PKTransitAppletHistory *)arg2 forAppletWithAID:(NSString *)arg3;

@end

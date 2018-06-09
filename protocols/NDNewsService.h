/* made by EzioChiu.
 */

@protocol NDNewsService <NSObject>

@required

- (void)fetchLatestResultsWithParameters:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 11: <NTTodayResultOperationInfoProviding> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NTTodayResults *, NSDictionary *, NSObject<NTTodayResultOperationFetchInfoProviding> *, NSError *, bool, void*
- (void)markAnalyticsElement:(void *)arg1 asReadAtDate:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: <NTHeadlineAnalyticsElementProviding> *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)markAnalyticsElements:(void *)arg1 asSeenAtDate:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end

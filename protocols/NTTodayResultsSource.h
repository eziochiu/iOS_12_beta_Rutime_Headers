/* made by EzioChiu.
 */

@protocol NTTodayResultsSource <NSObject>

@required

- (void)fetchLatestResultsWithOperationInfo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 10: NTPBTodayResultOperationInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NTTodayResults *, NSDictionary *, NSObject<NTTodayResultOperationFetchInfoProviding> *, NSError *, void*

@end

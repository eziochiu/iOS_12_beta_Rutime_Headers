/* made by EzioChiu.
 */

@protocol PUSearchResultsValueDelegate <NSObject>

@required

- (PLSearchIndexDateFormatter *)dateFormatter;
- (bool)searchIsFinished:(PUSearchResultsValue *)arg1;
- (NSString *)stringWithStartDate:(PSIDate *)arg1 endDate:(PSIDate *)arg2;

@end

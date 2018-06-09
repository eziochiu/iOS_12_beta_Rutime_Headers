/* made by EzioChiu.
 */

@protocol SPDaemonQueryDelegate <NSObject>

@required

- (void)searchDaemonLocalSuggestionsData:(NSData *)arg1;
- (void)searchDaemonQuery:(SPDaemonQueryToken *)arg1 encounteredError:(NSError *)arg2;
- (void)searchDaemonQuery:(SPDaemonQueryToken *)arg1 gotResultSet:(SPResultSet *)arg2 replace:(bool)arg3 complete:(bool)arg4 finished:(bool)arg5 blendingDuration:(double)arg6 geoEntityString:(NSString *)arg7;
- (void)searchDaemonRankingLog:(NSString *)arg1;
- (void)searchDaemonSuggestionsArray:(NSArray *)arg1;

@end

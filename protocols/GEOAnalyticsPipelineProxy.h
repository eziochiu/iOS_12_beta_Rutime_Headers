/* made by EzioChiu.
 */

@protocol GEOAnalyticsPipelineProxy <NSObject>

@required

- (void)setShortSessionValues:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 6: GEOUserSessionEntity *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)shortSessionValuesWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct GEOSessionID { unsigned long long x1; unsigned long long x2; }, unsigned long long, double, void*

@end

/* made by EzioChiu.
 */

@protocol SPQueryTaskDelegate

@required

- (void)didReceiveResponse:(SPQueryResponse *)arg1;
- (void)resultsDidBecomeInvalid:(SPQueryTask *)arg1;

@end

/* made by EzioChiu.
 */

@protocol ATXActionPredictionInterface

@required

- (void)getActionPredictionsForCandidateBundleIdentifiers:(void *)arg1 candidateActionTypes:(void *)arg2 consumerType:(void *)arg3 consumerSubType:(void *)arg4 limit:(void *)arg5 reply:(void *)arg6; // needs 6 arg types, found 12: NSArray *, NSArray *, unsigned long long, unsigned char, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATXActionResponse *, NSError *, void*
- (void)sendFeedbackWithResponse:(ATXActionResponse *)arg1;

@end

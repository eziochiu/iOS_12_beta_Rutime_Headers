/* made by EzioChiu.
 */

@protocol APRAppPreferenceInterface

@required

- (void)getAppPredictionsForIntent:(void *)arg1 candidateBundleIdentifiers:(void *)arg2 limit:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: INIntent *, NSArray *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, APRAppPreferenceResponse *, NSError *, void*
- (void)getAppPredictionsForIntent:(void *)arg1 candidateBundleIdentifiers:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: INIntent *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, APRAppPreferenceResponse *, NSError *, void*
- (void)prewarmWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendFeedbackForIntent:(INIntent *)arg1 aprResponse:(APRAppPreferenceResponse *)arg2;

@end

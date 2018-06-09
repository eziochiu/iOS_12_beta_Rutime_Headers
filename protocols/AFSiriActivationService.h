/* made by EzioChiu.
 */

@protocol AFSiriActivationService <NSObject>

@required

- (oneway void)activateWithRequestInfo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AFRequestInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)handleIntent:(void *)arg1 inBackgroundAppWithBundleId:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: INIntent *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INIntentResponse *, NSError *, void*
- (oneway void)prewarmForRequestInfo:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AFRequestInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end

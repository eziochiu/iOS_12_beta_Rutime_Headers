/* made by EzioChiu.
 */

@protocol AFSiriActivationListenerDelegate <NSObject>

@required

- (void)siriActivationListener:(AFSiriActivationListener *)arg1 handleActivationWithRequestInfo:(AFRequestInfo *)arg2;

@optional

- (void)siriActivationListener:(void *)arg1 handleIntent:(void *)arg2 inBackgroundAppWithBundleId:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: AFSiriActivationListener *, INIntent *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INIntentResponse *, NSError *, void*
- (void)siriActivationListener:(AFSiriActivationListener *)arg1 handlePrewarmForRequestInfo:(AFRequestInfo *)arg2;

@end

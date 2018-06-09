/* made by EzioChiu.
 */

@protocol WFLActionUserInterface <NSObject>

@optional

- (void)action:(void *)arg1 requiresContinuingInAppWithProceedHandler:(void *)arg2; // needs 2 arg types, found 7: WFLAction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)action:(void *)arg1 requiresUserConfirmation:(void *)arg2 proceedHandler:(void *)arg3; // needs 3 arg types, found 7: WFLAction *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)action:(void *)arg1 requiresUserConfirmation:(void *)arg2 requiresUserAuthentication:(void *)arg3 proceedHandler:(void *)arg4; // needs 4 arg types, found 8: WFLAction *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)handleIntentAction:(void *)arg1 requiresUserConfirmation:(void *)arg2 requiresUserAuthentication:(void *)arg3 withIntentResponse:(void *)arg4 proceedHandler:(void *)arg5; // needs 5 arg types, found 9: WFLHandleIntentAction *, bool, bool, INIntentResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)logDebugInformation:(NSString *)arg1;

@end

/* made by EzioChiu.
 */

@protocol TIProactiveQuickTypeManaging <NSObject>

@required

- (NSArray *)generateAndRenderProactiveSuggestionsWithInput:(NSString *)arg1 withSecureCandidateRenderer:(TIKeyboardSecureCandidateRenderer *)arg2 withRenderTraits:(TIKeyboardSecureCandidateRenderTraits *)arg3 textContentType:(NSString *)arg4;
- (void)generateAndRenderProactiveSuggestionsWithInput:(void *)arg1 withSecureCandidateRenderer:(void *)arg2 withRenderTraits:(void *)arg3 textContentType:(void *)arg4 async:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 11: NSString *, TIKeyboardSecureCandidateRenderer *, TIKeyboardSecureCandidateRenderTraits *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (NSArray *)generateAndRenderProactiveSuggestionsWithTriggers:(void *)arg1 withAdditionalPredictions:(void *)arg2 withSecureCandidateRenderer:(void *)arg3 withRenderTraits:(void *)arg4 withInput:(void *)arg5 withRecipient:(void *)arg6 withApplication:(void *)arg7 withLocale:(void *)arg8 withTextContentType:(void *)arg9 withAvailableApps:(void *)arg10 logBlock:(void *)arg11; // needs 11 arg types, found 16: NSArray *, NSArray *, TIKeyboardSecureCandidateRenderer *, TIKeyboardSecureCandidateRenderTraits *, NSString *, NSString *, NSString *, NSString *, NSString *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)generateAndRenderProactiveSuggestionsWithTriggers:(void *)arg1 withAdditionalPredictions:(void *)arg2 withSecureCandidateRenderer:(void *)arg3 withRenderTraits:(void *)arg4 withInput:(void *)arg5 withRecipient:(void *)arg6 withApplication:(void *)arg7 withLocale:(void *)arg8 withTextContentType:(void *)arg9 withAvailableApps:(void *)arg10 logBlock:(void *)arg11 async:(void *)arg12 completion:(void *)arg13; // needs 13 arg types, found 23: NSArray *, NSArray *, TIKeyboardSecureCandidateRenderer *, TIKeyboardSecureCandidateRenderTraits *, NSString *, NSString *, NSString *, NSString *, NSString *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*, bool, id /* block */, void*, void, id /* block */, NSArray *, void*
- (NSDictionary *)getCachedRecipientInfoForEmailOrPhone:(NSString *)arg1;
- (NSArray *)getMeCardEmailAddresses;
- (bool)isAutoCompleteEnabled;
- (bool)isAutoPopupEnabled;
- (bool)isEnabled;
- (void)reset;
- (void)setCachedRecipientInfo:(NSDictionary *)arg1 forEmailOrPhone:(NSString *)arg2;
- (void)suggestionAccepted:(NSString *)arg1 fieldType:(NSString *)arg2;
- (void)suggestionNotAccepted:(NSArray *)arg1;
- (void)userActionWithNoNewTriggers:(NSString *)arg1 fieldType:(NSString *)arg2;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INBillPayeeResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithBillPayeeToConfirm:(id)arg1;
+ (id)disambiguationWithBillPayeesToDisambiguate:(id)arg1;
+ (id)successWithResolvedBillPayee:(id)arg1;

@end

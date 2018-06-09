/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INPaymentAmountResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithPaymentAmountToConfirm:(id)arg1;
+ (id)disambiguationWithPaymentAmountsToDisambiguate:(id)arg1;
+ (id)successWithResolvedPaymentAmount:(id)arg1;

@end

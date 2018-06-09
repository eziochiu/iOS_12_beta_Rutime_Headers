/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INPaymentAccountResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithPaymentAccountToConfirm:(id)arg1;
+ (id)disambiguationWithPaymentAccountsToDisambiguate:(id)arg1;
+ (id)successWithResolvedPaymentAccount:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INPaymentStatusResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithPaymentStatusToConfirm:(long long)arg1;
+ (id)confirmationRequiredWithValueToConfirm:(long long)arg1;
+ (id)successWithResolvedPaymentStatus:(long long)arg1;
+ (id)successWithResolvedValue:(long long)arg1;

@end

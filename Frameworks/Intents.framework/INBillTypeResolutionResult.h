/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INBillTypeResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithBillTypeToConfirm:(long long)arg1;
+ (id)confirmationRequiredWithValueToConfirm:(long long)arg1;
+ (id)successWithResolvedBillType:(long long)arg1;
+ (id)successWithResolvedValue:(long long)arg1;

@end

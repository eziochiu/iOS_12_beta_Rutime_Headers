/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INBooleanResolutionResult : INIntentResolutionResult <INBooleanResolutionResultExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)confirmationRequiredWithValueToConfirm:(id)arg1;
+ (id)successWithResolvedValue:(bool)arg1;

@end

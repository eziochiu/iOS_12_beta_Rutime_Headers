/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INDoubleResolutionResult : INIntentResolutionResult <INDoubleResolutionResultExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)confirmationRequiredWithValueToConfirm:(id)arg1;
+ (id)successWithResolvedValue:(double)arg1;

@end

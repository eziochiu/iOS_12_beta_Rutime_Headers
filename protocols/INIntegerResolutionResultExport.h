/* made by EzioChiu.
 */

@protocol INIntegerResolutionResultExport <NSObject, JSExport>

@required

+ (id)confirmationRequiredWithValueToConfirm:(NSNumber *)arg1;
+ (id)successWithResolvedValue:(long long)arg1;

- (id)init;

@end

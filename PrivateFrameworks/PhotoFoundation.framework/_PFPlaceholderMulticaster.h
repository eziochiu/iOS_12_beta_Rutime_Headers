/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface _PFPlaceholderMulticaster : PFMulticaster

+ (void)convertToConcreteMulticaster:(id)arg1 forReceiver:(id)arg2;
+ (Class)placeholderSubclassOfClass:(Class)arg1 named:(id)arg2;
+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (bool)tryConvertToConcreteMulticaster:(id)arg1;

- (void)__ignore;
- (void)addReceiver:(id)arg1;
- (void)addWeakReceiver:(id)arg1;

@end

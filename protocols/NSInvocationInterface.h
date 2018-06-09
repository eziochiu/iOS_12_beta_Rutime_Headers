/* made by EzioChiu.
 */

@protocol NSInvocationInterface <NSObject>

@required

- (bool)argumentsRetained;
- (void)getArgument:(void*)arg1 atIndex:(long long)arg2;
- (void)getReturnValue:(void*)arg1;
- (NSObject<OS_dispatch_queue> *)invocationQueue;
- (void)invoke;
- (void)invokeWithTarget:(id)arg1;
- (NSMethodSignature *)methodSignature;
- (void)retainArguments;
- (SEL)selector;
- (void)setArgument:(void*)arg1 atIndex:(long long)arg2;
- (void)setReturnValue:(void*)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end

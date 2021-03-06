/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMDelayedInvocationTrampoline : IMInvocationTrampoline {
    double  _delay;
    NSArray * _modes;
}

- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 delay:(double)arg2 modes:(id)arg3;

@end

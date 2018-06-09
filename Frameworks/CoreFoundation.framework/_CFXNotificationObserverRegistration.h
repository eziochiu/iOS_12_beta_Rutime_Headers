/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface _CFXNotificationObserverRegistration : _CFXNotificationRegistrationContainer {
    void * _observer;
}

@property (readonly) void*observer;

+ (Class)childClass;

- (bool)enumerate:(id /* block */)arg1;
- (void)find:(struct { struct { id *x_1_1_1; unsigned long long x_1_1_2; bool x_1_1_3; } x1; struct { id *x_2_1_1; unsigned long long x_2_1_2; bool x_2_1_3; } x2; }*)arg1;
- (id)initWithObserver:(void*)arg1 parent:(id)arg2;
- (void*)key;
- (void)match:(struct { struct { id *x_1_1_1; unsigned long long x_1_1_2; bool x_1_1_3; } x1; struct { id *x_2_1_1; unsigned long long x_2_1_2; bool x_2_1_3; } x2; }*)arg1;
- (void*)observer;
- (void)resetObserverAndChildren:(void*)arg1;

@end

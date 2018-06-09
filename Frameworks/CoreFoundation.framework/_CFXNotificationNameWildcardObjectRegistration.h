/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface _CFXNotificationNameWildcardObjectRegistration : _CFXNotificationNameRegistration

+ (Class)childClass;

- (id)acquireObject:(void*)arg1 options:(unsigned long long)arg2;
- (id)acquireObserver:(void*)arg1 options:(unsigned long long)arg2;
- (bool)enumerate:(id /* block */)arg1;
- (void)find:(void*)arg1 matching:(struct { struct { id *x_1_1_1; unsigned long long x_1_1_2; bool x_1_1_3; } x1; struct { id *x_2_1_1; unsigned long long x_2_1_2; bool x_2_1_3; } x2; }*)arg2;
- (void)match:(void*)arg1 matching:(struct { struct { id *x_1_1_1; unsigned long long x_1_1_2; bool x_1_1_3; } x1; struct { id *x_2_1_1; unsigned long long x_2_1_2; bool x_2_1_3; } x2; }*)arg2;
- (void)match:(void*)arg1 observer:(void*)arg2 matching:(struct { struct { id *x_1_1_1; unsigned long long x_1_1_2; bool x_1_1_3; } x1; struct { id *x_2_1_1; unsigned long long x_2_1_2; bool x_2_1_3; } x2; }*)arg3;

@end

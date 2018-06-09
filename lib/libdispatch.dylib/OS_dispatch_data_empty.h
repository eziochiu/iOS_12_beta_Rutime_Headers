/* made by EzioChiu
   Image: /usr/lib/system/libdispatch.dylib
 */

@interface OS_dispatch_data_empty : OS_dispatch_data

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)load;

- (void)_activate;
- (void*)_getContext;
- (void)_resume;
- (void)_setContext:(void*)arg1;
- (void)_setFinalizer:(int (*)arg1;
- (void)_setTargetQueue:(id)arg1;
- (void)_suspend;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end

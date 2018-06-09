/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TCTracingManager : NSObject {
    TSMTraceBuffer * mBuffer;
    unsigned int  mCount;
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedManager;

- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setup;
- (void)teardown;

@end

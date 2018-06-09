/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HangTracer.framework/HangTracer
 */

@interface HTFenceAssertion : NSObject {
    unsigned long long  __name;
    unsigned long long  __startTime;
}

- (void)blown;
- (id)initWithFenceName:(unsigned long long)arg1;
- (void)invalidate;

@end

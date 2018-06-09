/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFTimer : NSObject {
    NSObject<OS_dispatch_source> * _src;
}

- (void)dealloc;
- (id)initWithCallback:(id /* block */)arg1 queue:(id)arg2;
- (void)startTimer:(double)arg1;
- (void)startTimer:(double)arg1 leeway:(double)arg2;
- (void)stopTimer;

@end

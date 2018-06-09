/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFTaskAssertion : NSObject {
    BKSProcessAssertion * _assertion;
    NSObject<OS_dispatch_source> * _timer;
}

- (void)cancelTimer;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 expiration:(double)arg2 preventIdleSleep:(bool)arg3;
- (id)initWithName:(id)arg1 preventIdleSleep:(bool)arg2;
- (void)invalidate;
- (bool)isValid;

@end

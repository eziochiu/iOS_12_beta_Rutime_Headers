/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMonitoredInvocation : NSInvocation {
    bool  _isLowPriority;
    MFActivityMonitor * _monitor;
    NSString * _powerAssertionId;
    bool  _shouldLogInvocation;
}

@property (nonatomic) bool isLowPriority;
@property (nonatomic, readonly) MFActivityMonitor *monitor;
@property (nonatomic, copy) NSString *powerAssertionId;

+ (id)invocationWithMethodSignature:(id)arg1;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 taskName:(id)arg5 priority:(int)arg6 canBeCancelled:(bool)arg7;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3 taskName:(id)arg4 priority:(int)arg5 canBeCancelled:(bool)arg6;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 taskName:(id)arg3 priority:(int)arg4 canBeCancelled:(bool)arg5;

- (void)dealloc;
- (id)description;
- (void)invoke;
- (bool)isLowPriority;
- (bool)mf_shouldLogInvocation;
- (id)monitor;
- (id)powerAssertionId;
- (void)setIsLowPriority:(bool)arg1;
- (void)setPowerAssertionId:(id)arg1;
- (void)setShouldLogInvocation:(bool)arg1;

@end

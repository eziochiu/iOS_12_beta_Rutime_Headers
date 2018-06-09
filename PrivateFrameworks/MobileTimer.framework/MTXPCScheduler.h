/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTXPCScheduler : NSObject <MTSchedulingDelegate> {
    NSString * _eventName;
}

@property (nonatomic, copy) NSString *eventName;

+ (id)xpcSchedulerWithEvent:(id)arg1;

- (void).cxx_destruct;
- (id)eventName;
- (id)initWithEvent:(id)arg1;
- (void)scheduleTimerForSeconds:(double)arg1;
- (void)setEventName:(id)arg1;
- (void)unscheduleTimer;

@end

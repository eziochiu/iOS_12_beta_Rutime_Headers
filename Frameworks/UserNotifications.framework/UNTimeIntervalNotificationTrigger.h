/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNTimeIntervalNotificationTrigger : UNNotificationTrigger {
    double  _timeInterval;
}

@property (nonatomic, readonly) double timeInterval;

+ (bool)supportsSecureCoding;
+ (id)triggerWithTimeInterval:(double)arg1 repeats:(bool)arg2;

- (id)_initWithTimeInterval:(double)arg1 repeats:(bool)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)nextTriggerDate;
- (id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2;
- (double)timeInterval;

@end

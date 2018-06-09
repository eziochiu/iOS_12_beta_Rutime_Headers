/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNLegacyNotificationTrigger : UNNotificationTrigger {
    NSDate * _date;
    int  _remainingRepeatCount;
    NSCalendar * _repeatCalendar;
    unsigned long long  _repeatInterval;
    NSTimeZone * _timeZone;
    int  _totalRepeatCount;
}

@property (nonatomic, copy) NSDate *date;
@property (nonatomic) int remainingRepeatCount;
@property (nonatomic, copy) NSCalendar *repeatCalendar;
@property (nonatomic) unsigned long long repeatInterval;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic) int totalRepeatCount;

+ (bool)supportsSecureCoding;
+ (id)triggerWithDate:(id)arg1 timeZone:(id)arg2 remainingRepeatCount:(int)arg3 totalRepeatCount:(int)arg4 repeatInterval:(unsigned long long)arg5 repeatCalendar:(id)arg6;
+ (id)triggerWithDate:(id)arg1 timeZone:(id)arg2 repeatInterval:(unsigned long long)arg3 repeatCalendar:(id)arg4;

- (void).cxx_destruct;
- (id)_initWithDate:(id)arg1 timeZone:(id)arg2 remainingRepeatCount:(int)arg3 totalRepeatCount:(int)arg4 repeatInterval:(unsigned long long)arg5 repeatCalendar:(id)arg6;
- (id)_nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2 defaultTimeZone:(id)arg3;
- (double)_retroactiveTriggerHysteresis;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2;
- (int)remainingRepeatCount;
- (id)repeatCalendar;
- (unsigned long long)repeatInterval;
- (void)setDate:(id)arg1;
- (void)setRemainingRepeatCount:(int)arg1;
- (void)setRepeatCalendar:(id)arg1;
- (void)setRepeatInterval:(unsigned long long)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTotalRepeatCount:(int)arg1;
- (id)timeZone;
- (int)totalRepeatCount;
- (bool)willTriggerAfterDate:(id)arg1 withRequestedDate:(id)arg2;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNCalendarNotificationTrigger : UNNotificationTrigger {
    NSDateComponents * _dateComponents;
}

@property (nonatomic, readonly, copy) NSDateComponents *dateComponents;

+ (bool)supportsSecureCoding;
+ (id)triggerWithDateMatchingComponents:(id)arg1 repeats:(bool)arg2;

- (void).cxx_destruct;
- (id)_initWithDateComponents:(id)arg1 repeats:(bool)arg2;
- (id)dateComponents;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)nextTriggerDate;
- (id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2;

@end

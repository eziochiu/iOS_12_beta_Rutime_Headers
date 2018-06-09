/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKRecurrenceDayOfWeek : NSObject <NSCopying> {
    long long  _dayOfTheWeek;
    long long  _weekNumber;
}

@property (nonatomic, readonly) long long dayOfTheWeek;
@property (nonatomic, readonly) long long weekNumber;

+ (id)dayOfWeek:(long long)arg1;
+ (id)dayOfWeek:(long long)arg1 weekNumber:(long long)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dayOfTheWeek;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)iCalendarDescription;
- (id)iCalendarValueFromDayOfTheWeek:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDayOfTheWeek:(long long)arg1 weekNumber:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)weekNumber;

@end

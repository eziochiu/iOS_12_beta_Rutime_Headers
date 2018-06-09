/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDateInterval : NSObject <NSCopying, NSSecureCoding>

@property (readonly) double duration;
@property (readonly, copy) NSDate *endDate;
@property (readonly, copy) NSDate *startDate;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;

- (long long)compare:(id)arg1;
- (bool)containsDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 duration:(double)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)intersectionWithDateInterval:(id)arg1;
- (bool)intersectsDateInterval:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDateInterval:(id)arg1;
- (id)startDate;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)hk_dateIntervalForDayFromDate:(id)arg1 calendar:(id)arg2;
+ (id)hk_dateIntervalWithStart:(double)arg1 end:(double)arg2;

- (bool)hk_containsTime:(double)arg1;
- (bool)hk_intersectsDateIntervalWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)hk_midDate;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)hk_dateIntervalWithValueRange:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

+ (id)_mt_dateIntervalFromPropertyList:(id)arg1;

- (id)_mt_propertyList;

@end

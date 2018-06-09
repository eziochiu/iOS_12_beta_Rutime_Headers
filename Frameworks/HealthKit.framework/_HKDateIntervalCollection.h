/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKDateIntervalCollection : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _anchorDate;
    double  _approximateIntervalDuration;
    NSDateComponents * _intervalComponents;
}

@property (nonatomic, readonly, copy) NSDate *anchorDate;
@property (nonatomic, readonly, copy) NSDateComponents *intervalComponents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchorDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateIntervalAtIndex:(long long)arg1;
- (id)dateIntervalContainingDate:(id)arg1 index:(long long*)arg2;
- (id)dateIntervalForIntervalsContainingInterval:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAnchorDate:(id)arg1 intervalComponents:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)intervalComponents;
- (bool)isEqual:(id)arg1;

@end

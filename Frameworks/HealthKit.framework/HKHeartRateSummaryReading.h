/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHeartRateSummaryReading : NSObject <NSSecureCoding> {
    long long  _context;
    NSDate * _date;
    HKQuantity * _quantity;
}

@property (nonatomic, readonly) long long context;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) HKQuantity *quantity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)context;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 quantity:(id)arg2;
- (id)initWithDate:(id)arg1 quantity:(id)arg2 context:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)quantity;

@end

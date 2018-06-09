/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDScheduledActivityCriteria : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _endDate;
    long long  _gracePeriod;
    NSString * _priorityKey;
    NSString * _reason;
    double  _repeatInterval;
    bool  _repeating;
    bool  _requireMainsPower;
    bool  _requireNetworkConnectivity;
    bool  _requireScreenSleep;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic) double repeatInterval;
@property (getter=isRepeating, nonatomic) bool repeating;
@property (nonatomic) bool requireMainsPower;
@property (nonatomic) bool requireNetworkConnectivity;
@property (nonatomic) bool requireScreenSleep;
@property (nonatomic, retain) NSDate *startDate;

+ (id)maintenanceActivityCriteriaWithStartDate:(id)arg1;
+ (id)priorityActivityCriteriaWithStartDate:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPriorityKey:(id)arg1 gracePeriod:(long long)arg2 startDate:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToScheduledAcivityCriteria:(id)arg1;
- (bool)isRepeating;
- (id)reason;
- (double)repeatInterval;
- (bool)requireMainsPower;
- (bool)requireNetworkConnectivity;
- (bool)requireScreenSleep;
- (void)setEndDate:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setRepeatInterval:(double)arg1;
- (void)setRepeating:(bool)arg1;
- (void)setRequireMainsPower:(bool)arg1;
- (void)setRequireNetworkConnectivity:(bool)arg1;
- (void)setRequireScreenSleep:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (id)xpcActivityCriteria;

@end

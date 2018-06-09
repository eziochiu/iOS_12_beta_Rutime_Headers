/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKCurrentWorkoutSnapshot : NSObject <NSSecureCoding> {
    long long  _activeWorkoutState;
    NSString * _applicationIdentifier;
    HKWorkoutConfiguration * _configuration;
    NSArray * _events;
    NSDate * _startDate;
    long long  _state;
}

@property (nonatomic, readonly) long long activeWorkoutState;
@property (nonatomic, readonly, copy) NSString *applicationIdentifier;
@property (nonatomic, readonly) HKWorkoutConfiguration *configuration;
@property (nonatomic, readonly) NSArray *events;
@property (nonatomic, readonly) bool isFirstPartyWorkout;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) long long state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)activeWorkoutState;
- (id)applicationIdentifier;
- (id)configuration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)events;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkoutConfiguration:(id)arg1 state:(long long)arg2 applicationIdentifier:(id)arg3 startDate:(id)arg4 events:(id)arg5 activeWorkoutState:(long long)arg6;
- (bool)isFirstPartyWorkout;
- (id)startDate;
- (long long)state;

@end

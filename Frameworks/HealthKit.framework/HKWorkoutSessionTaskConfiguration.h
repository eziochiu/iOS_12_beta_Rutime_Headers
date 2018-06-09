/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKWorkoutSessionTaskConfiguration : HKTaskConfiguration {
    bool  _requiresCoreLocationAssertion;
    NSUUID * _sessionUUID;
    HKWorkoutConfiguration * _workoutConfiguration;
}

@property (nonatomic) bool requiresCoreLocationAssertion;
@property (nonatomic, copy) NSUUID *sessionUUID;
@property (nonatomic, copy) HKWorkoutConfiguration *workoutConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)requiresCoreLocationAssertion;
- (id)sessionUUID;
- (void)setRequiresCoreLocationAssertion:(bool)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setWorkoutConfiguration:(id)arg1;
- (id)workoutConfiguration;

@end

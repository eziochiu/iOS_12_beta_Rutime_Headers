/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKWorkoutRouteQueryServerConfiguration : HKQueryServerConfiguration {
    HKWorkoutRoute * _workoutRoute;
}

@property (nonatomic, retain) HKWorkoutRoute *workoutRoute;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setWorkoutRoute:(id)arg1;
- (id)workoutRoute;

@end

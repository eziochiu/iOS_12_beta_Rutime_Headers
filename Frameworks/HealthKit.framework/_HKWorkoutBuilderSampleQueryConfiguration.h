/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKWorkoutBuilderSampleQueryConfiguration : HKQueryServerConfiguration {
    bool  _needsHistoricalData;
    NSUUID * _workoutBuilderIdentifier;
}

@property (nonatomic) bool needsHistoricalData;
@property (nonatomic, copy) NSUUID *workoutBuilderIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)needsHistoricalData;
- (void)setNeedsHistoricalData:(bool)arg1;
- (void)setWorkoutBuilderIdentifier:(id)arg1;
- (id)workoutBuilderIdentifier;

@end

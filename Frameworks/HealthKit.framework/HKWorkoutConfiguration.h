/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKWorkoutConfiguration : NSObject <HDCoding, NSCopying, NSSecureCoding> {
    unsigned long long  _activityType;
    NSUUID * _fitnessMachineSessionUUID;
    HKQuantity * _lapLength;
    long long  _locationType;
    NSUUID * _predictionSessionUUID;
    long long  _swimmingLocationType;
}

@property unsigned long long activityType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSUUID *fitnessMachineSessionUUID;
@property (readonly) unsigned long long hash;
@property (copy) HKQuantity *lapLength;
@property long long locationType;
@property (nonatomic, retain) NSUUID *predictionSessionUUID;
@property (readonly) Class superclass;
@property long long swimmingLocationType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_workoutConfigurationFromDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (unsigned long long)activityType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fitnessMachineSessionUUID;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lapLength;
- (long long)locationType;
- (id)predictionSessionUUID;
- (void)setActivityType:(unsigned long long)arg1;
- (void)setFitnessMachineSessionUUID:(id)arg1;
- (void)setLapLength:(id)arg1;
- (void)setLocationType:(long long)arg1;
- (void)setPredictionSessionUUID:(id)arg1;
- (void)setSwimmingLocationType:(long long)arg1;
- (long long)swimmingLocationType;
- (bool)validateAndReturnError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

@end

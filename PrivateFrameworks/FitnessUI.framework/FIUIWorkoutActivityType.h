/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIWorkoutActivityType : NSObject <NSSecureCoding> {
    unsigned long long  _auxiliaryTypeIdentifier;
    unsigned long long  _identifier;
    bool  _isIndoor;
    NSDictionary * _metadata;
}

@property (nonatomic, readonly) unsigned long long auxiliaryTypeIdentifier;
@property (nonatomic, readonly) unsigned long long effectiveTypeIdentifier;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) bool isCategorizedOtherWorkout;
@property (nonatomic, readonly) bool isIndoor;
@property (nonatomic, readonly) HKQuantity *lapLength;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) long long swimmingLocationType;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(bool)arg2;
+ (id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(bool)arg2 metadata:(id)arg3;
+ (id)activityTypeWithWorkout:(id)arg1;
+ (unsigned long long)mapWheelchairUserActivityType:(unsigned long long)arg1 isWheelchairUser:(bool)arg2;
+ (id)possibleActivityTypesForIdentifier:(unsigned long long)arg1 locationType:(long long)arg2 swimmingLocationType:(long long)arg3 wheelchairUser:(bool)arg4;
+ (id)supportedActivityTypesWithIsWheelchairUser:(bool)arg1;
+ (bool)supportsSecureCoding;
+ (id)wheelchairActivityTypes;

- (void).cxx_destruct;
- (id)activityTypeByAddingLapLength:(double)arg1;
- (id)activityTypePlistKey;
- (unsigned long long)auxiliaryTypeIdentifier;
- (id)description;
- (unsigned long long)effectiveTypeIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasLocationTypePool;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(bool)arg2;
- (id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(bool)arg2 metadata:(id)arg3;
- (id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(bool)arg2 metadata:(id)arg3 auxiliaryTypeIdentifier:(unsigned long long)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isCategorizedOtherWorkout;
- (bool)isEqual:(id)arg1;
- (bool)isIndoor;
- (id)lapLength;
- (id)localizedName;
- (id)localizedNameComponents;
- (id)metadata;
- (long long)swimmingLocationType;
- (id)uniqueIdentifier;

@end

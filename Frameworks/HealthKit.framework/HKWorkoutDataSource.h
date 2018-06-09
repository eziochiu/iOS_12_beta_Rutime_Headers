/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKWorkoutDataSource : NSObject

+ (id)_distanceTypeForActivityType:(unsigned long long)arg1 isIndoor:(bool)arg2;
+ (id)observedTypesForActivityType:(unsigned long long)arg1 isIndoor:(bool)arg2 connectedToFitnessMachine:(bool)arg3;

@end

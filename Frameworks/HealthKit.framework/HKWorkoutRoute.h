/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKWorkoutRoute : HKSeriesSample <HDCoding> {
    HDCodableLocationSeries * __codableWorkoutRoute;
}

@property (setter=_setCodableWorkoutRoute:, nonatomic, retain) HDCodableLocationSeries *_codableWorkoutRoute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_workoutRouteWithDevice:(id)arg1 metadata:(id)arg2;

- (void).cxx_destruct;
- (id)_codableWorkoutRoute;
- (bool)_isSmoothed;
- (bool)_requiresPrivateEntitlementForQueries;
- (void)_setCodableWorkoutRoute:(id)arg1;
- (id)_validateConfiguration;
- (id)_validateSample;
- (id)_valueDescription;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKSolarWaypoint : NSObject {
    NSString * _localizedName;
    double  _percentageThroughPeriodForWaypointDate;
    NTKSolarTimeModel * _solarTimeModel;
    long long  _type;
    NSDate * _waypointDate;
}

@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) double percentageThroughPeriodForWaypointDate;
@property (nonatomic, readonly) NTKSolarTimeModel *solarTimeModel;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSDate *waypointDate;

- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(long long)arg1 solarTimeModel:(id)arg2;
- (id)localizedName;
- (double)percentageThroughPeriodForWaypointDate;
- (id)solarTimeModel;
- (long long)type;
- (void)updateDependentValues;
- (void)updateDependentValuesWithPlaceholderData;
- (id)waypointDate;

@end

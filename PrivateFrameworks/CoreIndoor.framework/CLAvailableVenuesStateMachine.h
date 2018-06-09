/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface CLAvailableVenuesStateMachine : NSObject {
    CLIndoorAvailabilityTileParams * _availabilityTileParams;
    NSSet * _disabledVenues;
    GeographicCoordinate * _lastFix;
    double  _maxLoadRadius;
}

@property (readonly) CLIndoorAvailabilityTileParams *availabilityTileParams;
@property (retain) NSSet *disabledVenues;
@property (readonly) GeographicCoordinate *lastFix;
@property double maxLoadRadius;

+ (double)deg2rad:(double)arg1;
+ (double)distBetweenLatLon:(id)arg1 latlon1:(id)arg2;
+ (long long)getLocationContextFromVenueBounds:(const struct VenueBounds { int (**x1)(); struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_2_1_1; int x_2_1_2; int x_2_1_3; int x_2_1_4; } x2; struct RepeatedPtrField<proto::availability::LatLonPolygon> { void **x_3_1_1; int x_3_1_2; int x_3_1_3; int x_3_1_4; } x3; struct TileDownloadConfiguration {} *x4; struct LatLonPolygon {} *x5; struct RepeatedField<unsigned int> { unsigned int *x_6_1_1; int x_6_1_2; int x_6_1_3; } x6; int x7; int x8; unsigned int x9[1]; }*)arg1;
+ (double)metersFromGreatCircleDistance:(double)arg1;

- (void).cxx_destruct;
- (id)availabilityTileParams;
- (id)computeAvailableVenues:(id)arg1;
- (id)disabledVenues;
- (id)getNearbyLocationGroups:(id)arg1 withComputeMode:(int)arg2 andUpdatedPos:(id)arg3 isFirstRequest:(bool)arg4;
- (id)getNearbyLocationGroupsForTile:(id)arg1 withComputeMode:(int)arg2 andUpdatedPos:(id)arg3 isFirstRequest:(bool)arg4;
- (id)init;
- (bool)isVenueDisabled:(id)arg1 locationId:(id)arg2;
- (id)lastFix;
- (double)maxLoadRadius;
- (id)recomputeIfNecessary:(id)arg1 withGlobalAvailabilityTile:(id)arg2 forceRecompute:(bool)arg3;
- (void)setDisabledVenues:(id)arg1;
- (void)setMaxLoadRadius:(double)arg1;
- (bool)shouldRecompute:(id)arg1;

@end

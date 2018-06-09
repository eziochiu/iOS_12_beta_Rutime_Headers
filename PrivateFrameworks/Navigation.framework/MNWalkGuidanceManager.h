/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNWalkGuidanceManager : MNClassicGuidanceManager

- (double)_adjustedVehicleSpeed:(id)arg1;
- (id)_combinedGuidanceForStep:(id)arg1 withType:(int)arg2;
- (bool)_updateConsiderExecuteAnnouncement:(id)arg1 location:(id)arg2;
- (void)_updatePrepareForNextStep;
- (int)transportType;
- (void)updateGuidanceForProceedToRouteAtLocation:(struct { double x1; double x2; })arg1 routeMatch:(id)arg2 remainingTime:(double)arg3 distanceUntilDestination:(double)arg4;

@end

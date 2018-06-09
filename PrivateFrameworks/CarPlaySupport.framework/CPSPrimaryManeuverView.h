/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSPrimaryManeuverView : CPSManeuverView {
    CPSAbridgableLabel * _distanceLabel;
}

@property (nonatomic, readonly) CPSAbridgableLabel *distanceLabel;

- (void).cxx_destruct;
- (id)_formattedDistance;
- (id)distanceLabel;
- (id)initWithManeuver:(id)arg1 minimalMode:(bool)arg2;
- (void)setCurrentTravelEstimates:(id)arg1;

@end

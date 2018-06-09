/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSManeuverView : UIView {
    CPTravelEstimates * _currentTravelEstimates;
    bool  _minimalMode;
    CPManeuver * _representedManeuver;
}

@property (nonatomic, retain) CPTravelEstimates *currentTravelEstimates;
@property (getter=isMinimalMode, nonatomic, readonly) bool minimalMode;
@property (nonatomic, readonly) CPManeuver *representedManeuver;

- (void).cxx_destruct;
- (id)currentTravelEstimates;
- (id)initWithManeuver:(id)arg1 minimalMode:(bool)arg2;
- (bool)isMinimalMode;
- (id)representedManeuver;
- (void)setCurrentTravelEstimates:(id)arg1;

@end

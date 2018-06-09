/* made by EzioChiu.
 */

@protocol VKLabelNavFeature

@required

- (long long)intraRoadPriority;
- (bool)isAwayFromRoute;
- (bool)isEtaFeature;
- (bool)isGuidanceStepStart;
- (bool)isInGuidance;
- (bool)isOnRoute;
- (bool)isPicked;
- (bool)isRamp;
- (bool)isStartOfRoadName;
- (bool)isTrafficCameraFeature;
- (void)layoutWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; struct LabelLayoutContext {} *x3; struct LabelNavLayoutContext {} *x4; }*)arg1;
- (NSString *)name;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (void)setIsPicked:(bool)arg1;
- (NSString *)shieldDisplayGroup;

@end

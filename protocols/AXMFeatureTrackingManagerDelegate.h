/* made by EzioChiu.
 */

@protocol AXMFeatureTrackingManagerDelegate <NSObject>

@required

- (void)trackingManager:(AXMFeatureTrackingManager *)arg1 didBeginTrackingFeature:(AXMFeatureTracker *)arg2 appliedOrientation:(NSNumber *)arg3;
- (void)trackingManager:(AXMFeatureTrackingManager *)arg1 didFinishTrackingFeature:(AXMFeatureTracker *)arg2 appliedOrientation:(NSNumber *)arg3;
- (void)trackingManager:(AXMFeatureTrackingManager *)arg1 trackingFeatureLocationDidChange:(AXMFeatureTracker *)arg2 appliedOrientation:(NSNumber *)arg3;

@end

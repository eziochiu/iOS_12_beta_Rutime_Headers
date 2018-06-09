/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
 */

@interface UISApplicationStateClient : FBSServiceFacilityClient {
    NSString * _bundleIdentifier;
}

@property (nonatomic, copy) NSString *badgeValue;
@property (nonatomic) double minimumBackgroundFetchInterval;
@property (nonatomic) double nextWakeIntervalSinceReferenceDate;
@property (nonatomic) bool usesBackgroundNetwork;

- (void).cxx_destruct;
- (id)badgeValue;
- (void)configureConnectMessage:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (double)minimumBackgroundFetchInterval;
- (double)nextWakeIntervalSinceReferenceDate;
- (void)setBadgeValue:(id)arg1;
- (void)setMinimumBackgroundFetchInterval:(double)arg1;
- (void)setNextWakeIntervalSinceReferenceDate:(double)arg1;
- (void)setUsesBackgroundNetwork:(bool)arg1;
- (bool)usesBackgroundNetwork;

@end

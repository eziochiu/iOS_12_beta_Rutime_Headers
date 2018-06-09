/* made by EzioChiu.
 */

@protocol UISApplicationStateServerDelegate <NSObject>

@required

- (id)client:(id <FBSServiceFacilityClientHandle>)arg1 getBadgeValueForApplication:(NSString *)arg2;
- (double)client:(id <FBSServiceFacilityClientHandle>)arg1 getNextWakeIntervalSinceReferenceDateForApplication:(NSString *)arg2;
- (bool)client:(id <FBSServiceFacilityClientHandle>)arg1 getUsesBackgroundNetworkForApplication:(NSString *)arg2;
- (void)client:(id <FBSServiceFacilityClientHandle>)arg1 setBadgeValue:(id)arg2 forApplication:(NSString *)arg3;
- (void)client:(id <FBSServiceFacilityClientHandle>)arg1 setMinimumBackgroundFetchInterval:(double)arg2 forApplication:(NSString *)arg3;
- (void)client:(id <FBSServiceFacilityClientHandle>)arg1 setNextWakeIntervalSinceReferenceDate:(double)arg2 forApplication:(NSString *)arg3;
- (void)client:(id <FBSServiceFacilityClientHandle>)arg1 setUsesBackgroundNetwork:(bool)arg2 forApplication:(NSString *)arg3;

@end

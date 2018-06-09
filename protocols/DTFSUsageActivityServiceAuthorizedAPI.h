/* made by EzioChiu.
 */

@protocol DTFSUsageActivityServiceAuthorizedAPI <DTXAllowedRPC>

@required

- (NSMutableDictionary *)configureLaunchEnvironment:(NSMutableDictionary *)arg1;
- (NSMutableDictionary *)initialSwitches;
- (void)setValue:(NSNumber *)arg1 forSwitchName:(NSString *)arg2;
- (void)startSamplingWithPid:(int)arg1;
- (void)stopSampling;
- (NSNumber *)valueForSwitch:(NSString *)arg1;

@end

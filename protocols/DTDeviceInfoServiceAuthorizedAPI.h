/* made by EzioChiu.
 */

@protocol DTDeviceInfoServiceAuthorizedAPI <DTXAllowedRPC>

@required

- (NSArray *)directoryListingForPath:(NSString *)arg1;
- (NSString *)execnameForPid:(NSNumber *)arg1;
- (NSDictionary *)hardwareInformation;
- (NSDictionary *)iconDescriptionFileForAppPath:(NSString *)arg1;
- (NSNumber *)isRunningPid:(NSNumber *)arg1;
- (NSData *)kpepDatabase;
- (NSString *)machKernelName;
- (NSArray *)machTimeInfo;
- (NSString *)nameForGID:(NSNumber *)arg1;
- (NSString *)nameForUID:(NSNumber *)arg1;
- (NSSet *)netstatCountsAttributes;
- (NSSet *)netstatRouteAttributes;
- (NSSet *)netstatTCPAttributes;
- (NSSet *)netstatUDPAttributes;
- (NSDictionary *)networkInformation;
- (NSArray *)runningProcesses;
- (NSData *)symbolicatorSignatureForPid:(NSNumber *)arg1 trackingSelector:(NSString *)arg2;
- (NSDictionary *)symbolicatorSignaturesForExpiredPids;
- (NSSet *)sysmonCoalitionAttributes;
- (NSSet *)sysmonProcessAttributes;
- (NSSet *)sysmonSystemAttributes;
- (NSDictionary *)systemInformation;
- (NSString *)traceCodesFile;
- (void)unregisterSignatureTrackingForPid:(NSNumber *)arg1;

@end

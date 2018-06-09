/* made by EzioChiu.
 */

@protocol DTNetworkingServiceAuthorizedAPI <DTXAllowedRPC>

@required

- (void)replayLastRecordedSession;
- (void)setTargetPID:(NSNumber *)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;

@end

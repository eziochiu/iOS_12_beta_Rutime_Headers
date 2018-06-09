/* made by EzioChiu.
 */

@protocol DEDXPCProtocol <NSObject>

@required

- (void)didDiscoverDevices:(NSArray *)arg1;
- (void)didStartBugSessionWithInfo:(NSDictionary *)arg1;
- (void)discoverAllAvailableDevices;
- (void)gotDeviceUpdate:(DEDDevice *)arg1;
- (void)hasActiveSession:(NSString *)arg1;
- (void)ping;
- (void)pong;
- (void)promptPINForDevice:(DEDDevice *)arg1;
- (void)sessionWithIdentifier:(NSString *)arg1 isActive:(bool)arg2;
- (void)startBugSessionWithIdentifier:(NSString *)arg1 configuration:(DEDBugSessionConfiguration *)arg2 caller:(DEDDevice *)arg3 target:(DEDDevice *)arg4;
- (void)startPairSetupForDevice:(DEDDevice *)arg1;
- (void)stopDeviceDiscovery;
- (void)successPINForDevice:(DEDDevice *)arg1;
- (void)tryPIN:(NSString *)arg1 forDevice:(DEDDevice *)arg2;

@optional

- (void)adoptFiles:(NSArray *)arg1 forSession:(NSString *)arg2;
- (void)cancelNotifySession:(NSString *)arg1;
- (void)cancelSession:(NSString *)arg1;
- (void)commitSession:(NSString *)arg1;
- (void)deviceSupportsDiagnosticExtensions:(NSArray *)arg1 session:(NSString *)arg2;
- (void)didAdoptFilesWithError:(NSError *)arg1 forSession:(NSString *)arg2;
- (void)didCancelSession:(NSString *)arg1;
- (void)didCommitSession:(NSString *)arg1;
- (void)finishedDiagnosticWithIdentifier:(NSString *)arg1 result:(NSDictionary *)arg2 session:(NSString *)arg3;
- (void)getSessionStatusWithSession:(NSString *)arg1;
- (void)hasCollected:(NSArray *)arg1 isCollecting:(NSArray *)arg2 inSession:(NSString *)arg3;
- (void)hasCollected:(NSArray *)arg1 isCollecting:(NSArray *)arg2 withIdentifiers:(NSArray *)arg3 inSession:(NSString *)arg4;
- (void)listAvailableExtensionsForSession:(NSString *)arg1;
- (void)notifySession:(NSString *)arg1;
- (void)pingSession:(NSString *)arg1;
- (void)pongSession:(NSString *)arg1;
- (void)startDiagnosticWithIdentifier:(NSString *)arg1 parameters:(NSDictionary *)arg2 deferRunUntil:(NSDate *)arg3 session:(NSString *)arg4;
- (void)startDiagnosticWithIdentifier:(NSString *)arg1 parameters:(NSDictionary *)arg2 session:(NSString *)arg3;
- (void)syncSessionStatusWithSession:(NSString *)arg1;
- (void)terminateExtension:(NSString *)arg1 info:(NSDictionary *)arg2 session:(NSString *)arg3;
- (void)uploadProgress:(unsigned long long)arg1 total:(long long)arg2 session:(NSString *)arg3;

@end

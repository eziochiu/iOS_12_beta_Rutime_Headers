/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDXPCInbound : NSObject <DEDXPCProtocol> {
    DEDController * _delegate;
    NSObject<OS_os_log> * _log;
}

@property (readonly, copy) NSString *debugDescription;
@property DEDController *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_os_log> *log;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)adoptFiles:(id)arg1 forSession:(id)arg2;
- (void)cancelNotifySession:(id)arg1;
- (void)cancelSession:(id)arg1;
- (void)commitSession:(id)arg1;
- (id)delegate;
- (void)deviceSupportsDiagnosticExtensions:(id)arg1 session:(id)arg2;
- (void)didAdoptFilesWithError:(id)arg1 forSession:(id)arg2;
- (void)didCancelSession:(id)arg1;
- (void)didCommitSession:(id)arg1;
- (void)didDiscoverDevices:(id)arg1;
- (void)didStartBugSessionWithInfo:(id)arg1;
- (void)discoverAllAvailableDevices;
- (void)finishedDiagnosticWithIdentifier:(id)arg1 result:(id)arg2 session:(id)arg3;
- (void)getSessionStatusWithSession:(id)arg1;
- (void)gotDeviceUpdate:(id)arg1;
- (void)hasActiveSession:(id)arg1;
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2 inSession:(id)arg3;
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2 withIdentifiers:(id)arg3 inSession:(id)arg4;
- (id)initWithDelegate:(id)arg1;
- (void)listAvailableExtensionsForSession:(id)arg1;
- (id)log;
- (void)notifySession:(id)arg1;
- (void)ping;
- (void)pingSession:(id)arg1;
- (void)pong;
- (void)pongSession:(id)arg1;
- (void)promptPINForDevice:(id)arg1;
- (void)sessionWithIdentifier:(id)arg1 isActive:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setLog:(id)arg1;
- (void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 session:(id)arg4;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;
- (void)startPairSetupForDevice:(id)arg1;
- (void)stopDeviceDiscovery;
- (void)successPINForDevice:(id)arg1;
- (void)syncSessionStatusWithSession:(id)arg1;
- (void)terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3;
- (void)tryPIN:(id)arg1 forDevice:(id)arg2;
- (void)uploadProgress:(unsigned long long)arg1 total:(long long)arg2 session:(id)arg3;

@end

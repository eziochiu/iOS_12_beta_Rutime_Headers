/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDIDSOutbound : NSObject <DEDClientProtocol, DEDSecureArchiving, DEDWorkerProtocol> {
    DEDIDSConnection * _connection;
    NSString * _deviceAddress;
    NSObject<OS_os_log> * _log;
    NSString * _sessionID;
}

@property DEDIDSConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *deviceAddress;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_os_log> *log;
@property (retain) NSString *sessionID;
@property (readonly) Class superclass;

+ (id)archivedClasses;
+ (id)sessionWithID:(id)arg1 withDeviceAtAddress:(id)arg2 connection:(id)arg3;

- (void).cxx_destruct;
- (void)adoptFiles:(id)arg1 forSession:(id)arg2;
- (void)cancelNotificationForSession:(id)arg1;
- (void)cancelSession:(id)arg1;
- (void)commitSession:(id)arg1;
- (id)connection;
- (id)deviceAddress;
- (void)deviceSupportsDiagnosticExtensions:(id)arg1 session:(id)arg2;
- (void)didAdoptFilesWithError:(id)arg1 forSession:(id)arg2;
- (void)didCancelSession:(id)arg1;
- (void)didCommitSession:(id)arg1;
- (void)finishedDiagnosticWithIdentifier:(id)arg1 result:(id)arg2 session:(id)arg3;
- (void)getSessionStatusWithSession:(id)arg1;
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2 inSession:(id)arg3;
- (void)hasCollected:(id)arg1 isCollecting:(id)arg2 withIdentifiers:(id)arg3 inSession:(id)arg4;
- (id)init;
- (void)listAvailableExtensionsForSession:(id)arg1;
- (id)log;
- (void)pingSession:(id)arg1;
- (void)pongSession:(id)arg1;
- (void)scheduleNotificationForSession:(id)arg1;
- (id)sessionID;
- (void)setConnection:(id)arg1;
- (void)setDeviceAddress:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 session:(id)arg4;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;
- (void)syncSessionStatusWithSession:(id)arg1;
- (void)terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3;
- (long long)transportType;
- (void)uploadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2 session:(id)arg3;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDDaemon : NSObject <DEDWorkerProtocol> {
    DEDDiagnosticCollector * __diagnosticCollector;
    NSOperationQueue * _backgroundOpQueue;
    DEDConfiguration * _config;
    DEDController * _controller;
    NSObject<OS_dispatch_queue> * _diskAccessQueue;
    bool  _embeddedInApp;
    NSObject<OS_os_log> * _log;
    NSOperationQueue * _userInitiatedOpQueue;
}

@property (retain) DEDDiagnosticCollector *_diagnosticCollector;
@property (retain) NSOperationQueue *backgroundOpQueue;
@property (retain) DEDConfiguration *config;
@property (retain) DEDController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSObject<OS_dispatch_queue> *diskAccessQueue;
@property bool embeddedInApp;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_os_log> *log;
@property (readonly) Class superclass;
@property (retain) NSOperationQueue *userInitiatedOpQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_blockOnFakeSysidagnoseWithIdentifer:(id)arg1 withBugSession:(id)arg2;
- (id)_controller;
- (id)_diagnosticCollector;
- (void)_getSessionStatusWithSession:(id)arg1;
- (void)_logOperations;
- (void)_streamOperationStatus;
- (void)_syncSessionStatusWithSession:(id)arg1 withIdentifiers:(bool)arg2;
- (void)adoptFiles:(id)arg1 forSession:(id)arg2;
- (id)attachmentHandler;
- (id)backgroundOpQueue;
- (void)cancelNotificationForSession:(id)arg1;
- (void)cancelSession:(id)arg1;
- (void)commitSession:(id)arg1;
- (id)config;
- (void)configureForEmbedded:(bool)arg1;
- (id)controller;
- (id)diagnosticCollector;
- (id)diskAccessQueue;
- (bool)embeddedInApp;
- (void)getSessionStatusWithSession:(id)arg1;
- (id)init;
- (void)listAvailableExtensionsForSession:(id)arg1;
- (id)log;
- (bool)observesOperations;
- (void)pingSession:(id)arg1;
- (void)scheduleNotificationForSession:(id)arg1;
- (void)setBackgroundOpQueue:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setController:(id)arg1;
- (void)setDiskAccessQueue:(id)arg1;
- (void)setEmbeddedInApp:(bool)arg1;
- (void)setLog:(id)arg1;
- (void)setUserInitiatedOpQueue:(id)arg1;
- (void)set_diagnosticCollector:(id)arg1;
- (void)start;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 deferRunUntil:(id)arg3 session:(id)arg4;
- (void)startDiagnosticWithIdentifier:(id)arg1 parameters:(id)arg2 session:(id)arg3;
- (void)syncSessionStatusWithSession:(id)arg1;
- (void)terminateExtension:(id)arg1 info:(id)arg2 session:(id)arg3;
- (long long)transportType;
- (id)userInitiatedOpQueue;

@end

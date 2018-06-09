/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SymptomDiagnosticReporter.framework/SymptomDiagnosticReporter
 */

@interface SDRDiagnosticReporter : NSObject {
    NSXPCConnection * _connection;
    <SDRDiagnosticReporterDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <SDRDiagnosticReporterDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (void)initialize;

- (void).cxx_destruct;
- (id)actionsDictionary:(id)arg1 withIDSDestinations:(id)arg2 validFor:(double)arg3;
- (bool)addSignatureContentForSession:(id)arg1 key:(id)arg2 content:(id)arg3 reply:(id /* block */)arg4;
- (bool)addToSession:(id)arg1 event:(id)arg2 payload:(id)arg3 reply:(id /* block */)arg4;
- (bool)addToSession:(id)arg1 events:(id)arg2 payload:(id)arg3 reply:(id /* block */)arg4;
- (bool)assertFactString:(id)arg1 module:(id)arg2 asSymptom:(bool)arg3 reply:(id /* block */)arg4;
- (bool)cancelSession:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)endSession:(id)arg1;
- (void)getAllDiagnosticCasesWithReply:(id /* block */)arg1;
- (bool)getDiagnosticPayloadsForSignatures:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (bool)isSignatureValid:(id)arg1;
- (bool)postAWDEvent:(id)arg1 reply:(id /* block */)arg2;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setupXPCInterface;
- (id)signatureWithDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 detectedProcess:(id)arg4 triggerThresholdValues:(id)arg5;
- (id)signatureWithDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 originatingProcess:(id)arg4 triggerThreshold:(id)arg5;
- (id)signatureWithDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 subtypeContext:(id)arg4 detectedProcess:(id)arg5 triggerThresholdValues:(id)arg6;
- (bool)snapshotWithSignature:(id)arg1 duration:(double)arg2 event:(id)arg3 payload:(id)arg4 reply:(id /* block */)arg5;
- (bool)snapshotWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 reply:(id /* block */)arg6;
- (bool)snapshotWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 wantsRemoteCase:(bool)arg6 reply:(id /* block */)arg7;
- (bool)snapshotWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 reply:(id /* block */)arg5;
- (bool)snapshotWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 wantsRemoteCase:(bool)arg5 reply:(id /* block */)arg6;
- (bool)snapshotWithSignature:(id)arg1 duration:(double)arg2 payload:(id)arg3 reply:(id /* block */)arg4;
- (bool)snapshotWithSignature:(id)arg1 withIDSDestinations:(id)arg2 validFor:(double)arg3 duration:(double)arg4 events:(id)arg5 payload:(id)arg6 actions:(id)arg7 reply:(id /* block */)arg8;
- (bool)startSessionWithSignature:(id)arg1 duration:(double)arg2 event:(id)arg3 payload:(id)arg4 reply:(id /* block */)arg5;
- (bool)startSessionWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 reply:(id /* block */)arg6;
- (bool)startSessionWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 actions:(id)arg5 wantsRemoteCase:(bool)arg6 reply:(id /* block */)arg7;
- (bool)startSessionWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 reply:(id /* block */)arg5;
- (bool)startSessionWithSignature:(id)arg1 duration:(double)arg2 events:(id)arg3 payload:(id)arg4 wantsRemoteCase:(bool)arg5 reply:(id /* block */)arg6;
- (bool)startSessionWithSignature:(id)arg1 duration:(double)arg2 payload:(id)arg3 reply:(id /* block */)arg4;
- (bool)startSessionWithSignature:(id)arg1 withIDSDestinations:(id)arg2 validFor:(double)arg3 duration:(double)arg4 events:(id)arg5 payload:(id)arg6 actions:(id)arg7 reply:(id /* block */)arg8;
- (bool)triggerRemoteSessionForSignature:(id)arg1 caseGroupID:(id)arg2 reply:(id /* block */)arg3;

@end

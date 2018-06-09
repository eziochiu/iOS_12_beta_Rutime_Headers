/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5Client : NSObject {
    NSXPCConnection * _conn;
    id /* block */  _eventCallback;
    bool  _isBrowsing;
    double  _lastRecoveryTimestamp;
    NSMutableDictionary * _mutableDiagnosticsCallbackMap;
    NSMutableArray * _mutableEventIDs;
    NSMutableDictionary * _mutableLogsCallbackMap;
    NSMutableDictionary * _mutablePerformanceCallbackMap;
    NSMutableArray * _mutableUUIDs;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id /* block */ eventCallback;

+ (id)sharedClient;

- (void)__cancelAllRequestsAndReply:(id /* block */)arg1;
- (void)__cancelRequestWithUUID:(id)arg1 reply:(id /* block */)arg2;
- (void)__log:(id)arg1 timestamp:(bool)arg2 reply:(id /* block */)arg3;
- (void)__queryLocalPeerAndReply:(id /* block */)arg1;
- (void)__queryPeerCacheAndReply:(id /* block */)arg1;
- (void)__startBrowsingAndReply:(id /* block */)arg1;
- (void)__startMonitoringEvents:(id)arg1 reply:(id /* block */)arg2;
- (void)__stopBrowsingAndReply:(id /* block */)arg1;
- (void)__stopMonitoringEvents:(id)arg1 reply:(id /* block */)arg2;
- (void)cancelAllRequests;
- (void)cancelRequestWithUUID:(id)arg1;
- (id)collectLogItems:(id)arg1 outputURL:(id)arg2 compress:(bool)arg3 peer:(id)arg4 update:(id /* block */)arg5 diagnostics:(id /* block */)arg6 receipts:(id*)arg7 error:(out id*)arg8;
- (id)collectLogItems:(id)arg1 outputURL:(id)arg2 compress:(bool)arg3 peer:(id)arg4 update:(id /* block */)arg5 diagnostics:(id /* block */)arg6 reply:(id /* block */)arg7;
- (id)collectLogs:(id)arg1 compress:(bool)arg2 peer:(id)arg3 update:(id /* block */)arg4 diagnostics:(id /* block */)arg5 error:(out id*)arg6;
- (id)collectLogs:(id)arg1 compress:(bool)arg2 peer:(id)arg3 update:(id /* block */)arg4 diagnostics:(id /* block */)arg5 reply:(id /* block */)arg6;
- (void)collectedLogItem:(id)arg1 next:(id)arg2 peer:(id)arg3 completed:(double)arg4 uuid:(id)arg5;
- (void)completedDiagnosticsTest:(id)arg1 next:(id)arg2 peer:(id)arg3 completed:(double)arg4 uuid:(id)arg5;
- (void)dealloc;
- (id /* block */)eventCallback;
- (id)init;
- (id)localPeer;
- (void)log:(id)arg1 timestamp:(bool)arg2;
- (id)peerCache;
- (id)queryDebugConfigurationForPeer:(id)arg1 error:(out id*)arg2;
- (void)queryDebugConfigurationForPeer:(id)arg1 reply:(id /* block */)arg2;
- (id)queryStatusForPeer:(id)arg1 error:(out id*)arg2;
- (void)queryStatusForPeer:(id)arg1 reply:(id /* block */)arg2;
- (void)receivedEvent:(id)arg1;
- (id)runDiagnosticsTests:(id)arg1 peer:(id)arg2 update:(id /* block */)arg3 error:(out id*)arg4;
- (id)runDiagnosticsTests:(id)arg1 peer:(id)arg2 update:(id /* block */)arg3 reply:(id /* block */)arg4;
- (id)runPerformanceTest:(id)arg1 update:(id /* block */)arg2 error:(out id*)arg3;
- (id)runPerformanceTest:(id)arg1 update:(id /* block */)arg2 reply:(id /* block */)arg3;
- (id)runWiFiSnifferOnChannel:(id)arg1 duration:(double)arg2 peer:(id)arg3 error:(out id*)arg4;
- (id)runWiFiSnifferOnChannel:(id)arg1 duration:(double)arg2 peer:(id)arg3 reply:(id /* block */)arg4;
- (bool)setDebugConfiguration:(id)arg1 peer:(id)arg2 error:(out id*)arg3;
- (void)setDebugConfiguration:(id)arg1 peer:(id)arg2 reply:(id /* block */)arg3;
- (void)setEventCallback:(id /* block */)arg1;
- (void)startBrowsing;
- (void)startMonitoringEvents:(id)arg1;
- (void)stopBrowsing;
- (void)stopMonitoringEvents:(id)arg1;
- (void)updatedPerformanceTest:(id)arg1 uuid:(id)arg2;

@end

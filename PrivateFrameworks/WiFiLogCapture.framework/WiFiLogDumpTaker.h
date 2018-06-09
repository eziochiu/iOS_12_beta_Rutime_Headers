/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiLogCapture.framework/WiFiLogCapture
 */

@interface WiFiLogDumpTaker : NSObject {
    bool  _didLastCaptureFallback;
    NSObject<OS_dispatch_queue> * event_queue;
    NSObject<OS_xpc_object> * xpc_connection;
}

@property (nonatomic, readonly) bool didLastCaptureFallback;

- (void).cxx_destruct;
- (id)XPCConnection:(const char *)arg1;
- (bool)didLastCaptureFallback;
- (void)handleConnection:(id)arg1;
- (id)init;
- (void)takeWiFiCoreCaptureDumpWithReason:(const char *)arg1 callback:(id /* block */)arg2;
- (void)takeWiFiDiagnosticsDumpWithPath:(const char *)arg1 reason:(const char *)arg2 callback:(id /* block */)arg3;
- (void)takeWiFiDiagnosticsDumpWithPath:(const char *)arg1 reason:(const char *)arg2 shouldTryFallback:(bool)arg3 callback:(id /* block */)arg4;
- (void)takeWiFiDiagnosticsDumpWithPathAndReason:(id /* block */)arg1 :(const char *)arg2 :(const char *)arg3;

@end

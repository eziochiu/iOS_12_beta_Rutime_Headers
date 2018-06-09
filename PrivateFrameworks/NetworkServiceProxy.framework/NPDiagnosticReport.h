/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPDiagnosticReport : NSObject

+ (void)logConnectionFailed:(long long)arg1 error:(int)arg2 onRamp:(id)arg3;
+ (void)logFetchError:(id)arg1 requestType:(int)arg2;
+ (void)logInternalError:(id)arg1 context:(id)arg2;
+ (void)logLatencyMapTimeout:(long long)arg1;
+ (bool)logNSPDiagnosticReport:(id)arg1 event:(id)arg2 context:(id)arg3;
+ (void)logTTFBDelayed:(unsigned long long)arg1 rtt:(unsigned long long)arg2 isFirstTunnel:(bool)arg3 interfaceType:(long long)arg4 onRamp:(id)arg5;

@end

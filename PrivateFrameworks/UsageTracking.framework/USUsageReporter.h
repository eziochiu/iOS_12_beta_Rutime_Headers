/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
 */

@interface USUsageReporter : NSObject {
    NSXPCConnection * _xpcConnection;
}

@property (readonly) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)dealloc;
- (void)fetchReportsDuringInterval:(id)arg1 partitionInterval:(double)arg2 forceImmediateSync:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)fetchReportsForUsageType:(unsigned long long)arg1 interval:(id)arg2 partitionInterval:(double)arg3 focalOnly:(bool)arg4 completionHandler:(id /* block */)arg5;
- (id)init;
- (id)xpcConnection;

@end

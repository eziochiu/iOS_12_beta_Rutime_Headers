/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAMonitoring : NSObject {
    PHAMonitoringProcessInfo * _processInfo;
    PHAMonitoringSystemInfo * _systemInfo;
}

@property (readonly) PHAMonitoringProcessInfo *processInfo;
@property (readonly) PHAMonitoringSystemInfo *systemInfo;

- (void).cxx_destruct;
- (bool)isMonitoring;
- (id)processInfo;
- (id)registerUpdateBlock:(id /* block */)arg1;
- (void)startMonitoringWithUpdateRate:(double)arg1;
- (void)stopMonitoring;
- (id)systemInfo;
- (void)unregisterUpdateBlockWithID:(id)arg1;

@end

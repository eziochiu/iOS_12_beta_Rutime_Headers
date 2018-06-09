/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKExtendedHealthStore : NSObject <_HKXPCExportable> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    _HKXPCConnection * _connection;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clientQueue;
- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)daemonDidStart;
- (void)dealloc;
- (id)exportedInterface;
- (id)init;
- (id)remoteInterface;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(id /* block */)arg3;

@end

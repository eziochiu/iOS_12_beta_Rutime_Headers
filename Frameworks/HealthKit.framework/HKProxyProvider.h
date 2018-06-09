/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKProxyProvider : NSObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    _HKXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    <_HKXPCExportable> * _exportedObject;
    HKHealthStore * _healthStore;
    NSMutableArray * _pendingFetchContinuations;
    NSString * _proxyIdentifier;
}

@property (nonatomic, readonly) <_HKXPCExportable> *exportedObject;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) NSString *proxyIdentifier;

- (void).cxx_destruct;
- (void)_connectionQueue_fetchEndpointAndConnectionWithRetryCount:(long long)arg1;
- (void)_fetchRetryingProxyWithErrorCount:(long long)arg1 handler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)_resetConnection;
- (void)dealloc;
- (id)exportedObject;
- (void)fetchProxyServiceEndpointForIdentifier:(id)arg1 endpointHandler:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)fetchProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)fetchRetryingProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1 proxyIdentifier:(id)arg2 exportedObject:(id)arg3;
- (void)invalidate;
- (id)proxyIdentifier;

@end

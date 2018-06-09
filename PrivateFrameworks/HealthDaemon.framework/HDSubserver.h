/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSubserver : NSObject <HDDiagnosticObject> {
    HDXPCClient * _client;
    HDDaemon * _daemon;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HDHealthStoreServer * _server;
}

@property (nonatomic, readonly) HDXPCClient *client;
@property (nonatomic, readonly) HDDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) HDHealthStoreServer *server;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)client;
- (id)daemon;
- (id)diagnosticDescription;
- (id)initWithParentServer:(id)arg1;
- (void)invalidate;
- (id)profile;
- (id)queue;
- (void)requireEntitlement:(id)arg1 usingBlock:(id /* block */)arg2 errorHandler:(id /* block */)arg3;
- (void)requirePrivateHealthKitEntitlementUsingBlock:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (id)server;

@end

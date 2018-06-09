/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHealthExtensionsServer : NSObject <HDDiagnosticObject, HKExtendedServerInterface, _HKXPCExportable> {
    HDXPCClient * _client;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) HDXPCClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDProfile *profile;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (bool)_shouldAcceptConnectionForClient:(id)arg1 error:(id*)arg2;
+ (id)serverWithClient:(id)arg1 profile:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)client;
- (void)connectionInvalidated;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)exportedInterface;
- (id)initWithClient:(id)arg1 profile:(id)arg2;
- (id)profile;
- (id)queue;
- (id)remoteInterface;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)remote_setCurrentActivityCacheOverrideDate:(id)arg1 timeZone:(id)arg2 completion:(id /* block */)arg3;
- (void)setClient:(id)arg1;
- (void)setProfile:(id)arg1;

@end

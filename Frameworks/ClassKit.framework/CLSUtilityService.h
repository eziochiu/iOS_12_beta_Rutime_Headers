/* made by EzioChiu
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSUtilityService : NSObject {
    CLSEndpointConnection * _endpointConnection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) CLSEndpointConnection *endpointConnection;

+ (Class)endpointClass;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addAuthorizationStatus:(unsigned long long)arg1 forContextAtPath:(id)arg2 completion:(id /* block */)arg3;
- (void)authorizationStatusForContextAtPath:(id)arg1 completion:(id /* block */)arg2;
- (void)databasePathWithCompletion:(id /* block */)arg1;
- (id)endpointConnection;
- (void)getDevModeWithCompletion:(id /* block */)arg1;
- (id)initWithEndpoint:(id)arg1;
- (void)recreateDatabaseWithCompletion:(id /* block */)arg1;
- (void)recreateDevelopmentDatabaseWithCompletion:(id /* block */)arg1;
- (void)removeAuthorizationStatus:(unsigned long long)arg1 forContextAtPath:(id)arg2 completion:(id /* block */)arg3;
- (void)setDevMode:(int)arg1 completion:(id /* block */)arg2;
- (void)setEndpointConnection:(id)arg1;
- (void)statusWithCompletion:(id /* block */)arg1;
- (void)syncFetchWithCompletion:(id /* block */)arg1;
- (void)syncPushWithCompletion:(id /* block */)arg1;
- (void)syncStatsWithCompletion:(id /* block */)arg1;
- (id)utilityServer:(id /* block */)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDQueryControlServer : HDSubserver <HDQueryControlServerInterface, HDQueryServerDelegate, HDTaskServerDelegate> {
    NSMutableDictionary * _queryServerEndpointsByUUID;
    NSMutableDictionary * _queryServersByUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_clientSourceIdentifierWithError:(id*)arg1;
- (bool)_queue_hasActiveQueries;
- (void)_startQueryServer:(id)arg1 handler:(id /* block */)arg2;
- (void)addObserver:(id)arg1 forTaskServerUUID:(id)arg2;
- (unsigned int)clientSDKVersionForQueryServer:(id)arg1;
- (id)initWithParentServer:(id)arg1;
- (void)invalidate;
- (void)queryServer:(id)arg1 requestsAuthorizationForSamples:(id)arg2 completion:(id /* block */)arg3;
- (void)queryServer:(id)arg1 shouldStartWithCompletion:(id /* block */)arg2;
- (bool)queryServerClientHasActiveWorkout:(id)arg1;
- (bool)queryServerClientIsInBackground:(id)arg1;
- (void)queryServerDidFinish:(id)arg1;
- (bool)queryServerShouldObserveInBackground:(id)arg1;
- (id)readAuthorizationStatusForQueryServer:(id)arg1 type:(id)arg2 error:(id*)arg3;
- (void)remote_createQueryServerForIdentifier:(id)arg1 queryUUID:(id)arg2 configuration:(id)arg3 completion:(id /* block */)arg4;
- (void)removeObserver:(id)arg1 forTaskServerUUID:(id)arg2;
- (void)removeTaskServerObserver:(id)arg1;
- (void)taskServerDidFinishInitialization:(id)arg1;
- (void)taskServerDidInvalidate:(id)arg1;
- (id)taskServerWithUUID:(id)arg1;

@end

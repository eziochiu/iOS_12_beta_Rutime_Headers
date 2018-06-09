/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAuthorizationServer : NSObject {
    HDClientAuthorizationOracle * _authorizationOracle;
    NSMutableArray * _authorizationRequestIdentifiers;
    HDXPCClient * _client;
    int  _invalidated;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSUUID * _transactionSessionIdentifier;
}

@property (nonatomic, retain) NSMutableArray *authorizationRequestIdentifiers;
@property (readonly) HDXPCClient *client;
@property (nonatomic) int invalidated;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSUUID *transactionSessionIdentifier;

- (void).cxx_destruct;
- (id)_authorizationStatusForTypes:(id)arg1 error:(id*)arg2;
- (void)_invalidate;
- (void)_performIfAuthorizedForTypes:(id)arg1 sharing:(bool)arg2 onQueue:(id)arg3 usingBlock:(id /* block */)arg4 errorHandler:(id /* block */)arg5;
- (void)_queue_beginAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_enqueueAuthorizationRequestForBundleIdentifier:(id)arg1 writeTypes:(id)arg2 readTypes:(id)arg3 authorizationNeededHandler:(id /* block */)arg4 requestCompletionHandler:(id /* block */)arg5;
- (void)_setAuthorizationStatusesEntitled:(id)arg1 authorizationModes:(id)arg2 forBundleIdentifier:(id)arg3 options:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (id)allAuthorizationRecordsForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (id)allAuthorizationRecordsForType:(id)arg1 error:(id*)arg2;
- (id)allDocumentAuthorizationRecordsForType:(id)arg1 bundleIdentifier:(id)arg2 error:(id*)arg3;
- (id)allObjectAuthorizationsForSampleWithUUID:(id)arg1 error:(id*)arg2;
- (id)allSourcesRequestingTypes:(id)arg1 error:(id*)arg2;
- (id)authorizationRequestIdentifiers;
- (id)authorizationStatusForType:(id)arg1 error:(id*)arg2;
- (void)beginAuthorizationRequestDelegateTransactionWithRequestRecord:(id)arg1 completion:(id /* block */)arg2;
- (void)beginAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)client;
- (void)endAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2;
- (void)enqueueAuthorizationRequestToWriteTypes:(id)arg1 readTypes:(id)arg2 authorizationNeededHandler:(id /* block */)arg3 requestCompletionHandler:(id /* block */)arg4;
- (void)enqueueObjectAuthorizationRequestForSamples:(id)arg1 promptIfNeeded:(bool)arg2 authorizationNeededHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)handleAuthorizationRequestsForBundleIdentifier:(id)arg1 promptHandler:(id /* block */)arg2 requestCompletionHandler:(id /* block */)arg3;
- (void)handleAuthorizationRequestsWithPromptHandler:(id /* block */)arg1 requestCompletionHandler:(id /* block */)arg2;
- (void)handleObjectAuthorizationRequestsWithPromptHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)initWithClient:(id)arg1 profile:(id)arg2 queue:(id)arg3;
- (void)invalidate;
- (int)invalidated;
- (bool)isAuthorizationStatusDeterminedForTypes:(id)arg1 error:(id*)arg2;
- (void)performIfAuthorizedToDeleteObjectsWithTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(id /* block */)arg3 errorHandler:(id /* block */)arg4;
- (void)performIfAuthorizedToReadTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(id /* block */)arg3 errorHandler:(id /* block */)arg4;
- (void)performIfAuthorizedToSaveObjectsWithTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(id /* block */)arg3 errorHandler:(id /* block */)arg4;
- (id)profile;
- (id)queue;
- (id)readAuthorizationStatusForType:(id)arg1 error:(id*)arg2;
- (id)readAuthorizationWithTypes:(id)arg1 error:(id*)arg2;
- (void)requestAuthorizationForBundleIdentifier:(id)arg1 writeTypes:(id)arg2 readTypes:(id)arg3 completion:(id /* block */)arg4;
- (bool)resetAuthorizationStatusForBundleIdentifier:(id)arg1 error:(id*)arg2;
- (bool)resetAuthorizationStatusesForObjects:(id)arg1 error:(id*)arg2;
- (void)setAuthorizationRequestIdentifiers:(id)arg1;
- (void)setAuthorizationStatuses:(id)arg1 authorizationModes:(id)arg2 forBundleIdentifier:(id)arg3 options:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)setInvalidated:(int)arg1;
- (void)setProfile:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTransactionSessionIdentifier:(id)arg1;
- (id)transactionSessionIdentifier;
- (void)updateDefaultAuthorizationStatusesWithCompletion:(id /* block */)arg1;

@end

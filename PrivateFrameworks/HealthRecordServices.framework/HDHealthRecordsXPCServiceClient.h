/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthRecordServices.framework/HealthRecordServices
 */

@interface HDHealthRecordsXPCServiceClient : NSObject <_HKXPCExportable> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    _HKXPCConnection * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)arg1;
- (id /* block */)_objectCompletionOnClientQueue:(id /* block */)arg1;
- (void)_performWithProxyHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)connectionInvalidated;
- (void)dealloc;
- (void)executeFHIRExtractionRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)executeFHIRReferenceExtractionRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)exportedInterface;
- (id)init;
- (id)initWithListenerEndpoint:(id)arg1;
- (void)optInDataForFHIRDocumentWithRequest:(id)arg1 redactor:(id)arg2 completion:(id /* block */)arg3;
- (id)remoteInterface;
- (void)rulesVersionForFHIRDocumentExtractionWithCompletion:(id /* block */)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFConfigurationSourceClient : NSObject <DMFConfigurationSourceClientInterface, NSXPCConnectionDelegate, NSXPCListenerDelegate> {
    NSString * _configurationSourceName;
    DMFConnection * _connection;
    <DMFConfigurationSourceClientDelegate> * _delegate;
    NSXPCConnection * _incomingConnection;
    NSXPCListener * _listener;
    NSString * _machServiceName;
    CATOperationQueue * _operationQueue;
    NSString * _organizationIdentifier;
    NSObject<OS_dispatch_source> * _registerConfigurationSource;
    DMFReportingRequirements * _reportingRequirements;
    NSObject * _reportingRequirementsLock;
    NSObject<OS_dispatch_queue> * _serialQueue;
    unsigned long long  _state;
}

@property (nonatomic, copy) NSString *configurationSourceName;
@property (nonatomic, retain) DMFConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DMFConfigurationSourceClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSXPCConnection *incomingConnection;
@property (getter=isInvalid, nonatomic, readonly) bool invalid;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, copy) NSString *machServiceName;
@property (nonatomic, retain) CATOperationQueue *operationQueue;
@property (nonatomic, copy) NSString *organizationIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *registerConfigurationSource;
@property (nonatomic, copy) DMFReportingRequirements *reportingRequirements;
@property (nonatomic, retain) NSObject *reportingRequirementsLock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)assetResolutionOperationDidFinish:(id)arg1 completion:(id /* block */)arg2;
- (void)configurationEngineRequestedAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)configurationEventsDidChange:(id)arg1 completion:(id /* block */)arg2;
- (id)configurationSourceName;
- (void)configurationStatusDidChange:(id)arg1 completion:(id /* block */)arg2;
- (id)connection;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (void)enqueueOperationToReportEvents:(id)arg1 completion:(id /* block */)arg2;
- (void)enqueueOperationToReportStatusChange:(id)arg1 completion:(id /* block */)arg2;
- (void)enqueueOperationToResolveAsset:(id)arg1 completion:(id /* block */)arg2;
- (void)eventsReportingOperationDidFinish:(id)arg1 completion:(id /* block */)arg2;
- (id)incomingConnection;
- (id)init;
- (id)initWithConnection:(id)arg1 organizationIdentifier:(id)arg2 displayName:(id)arg3 localMachServiceName:(id)arg4;
- (void)invalidate;
- (bool)isInvalid;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)machService;
- (id)machServiceName;
- (id)name;
- (id)operationQueue;
- (id)organizationIdentifier;
- (void)probe:(id /* block */)arg1;
- (id)registerConfigurationSource;
- (void)registerConfigurationSourceIfNeeded;
- (void)registrationOperationDidFinish:(id)arg1;
- (id)reportingRequirements;
- (id)reportingRequirementsLock;
- (void)resume;
- (id)serialQueue;
- (void)setConfigurationSourceName:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIncomingConnection:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setMachServiceName:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setOrganizationIdentifier:(id)arg1;
- (void)setRegisterConfigurationSource:(id)arg1;
- (void)setReportingRequirements:(id)arg1;
- (void)setReportingRequirementsLock:(id)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (id)stateDescription;
- (void)statusReportingOperationDidFinish:(id)arg1 completion:(id /* block */)arg2;

@end

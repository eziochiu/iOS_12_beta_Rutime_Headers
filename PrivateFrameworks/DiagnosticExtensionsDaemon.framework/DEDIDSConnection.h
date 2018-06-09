/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDIDSConnection : NSObject <DEDSecureArchiving, IDSServiceDelegate> {
    id /* block */  _deviceStatusCallback;
    NSObject<OS_dispatch_queue> * _discovery_queue;
    <IDSServiceDelegate> * _incomingDelegate;
    NSObject<OS_os_log> * _log;
    <DEDClientProtocol> * _remoteSideDelegate;
    NSObject<OS_dispatch_queue> * _run_queue;
    IDSService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ deviceStatusCallback;
@property (retain) NSObject<OS_dispatch_queue> *discovery_queue;
@property (readonly) unsigned long long hash;
@property (retain) <IDSServiceDelegate> *incomingDelegate;
@property (retain) NSObject<OS_os_log> *log;
@property <DEDClientProtocol> *remoteSideDelegate;
@property (retain) NSObject<OS_dispatch_queue> *run_queue;
@property (retain) IDSService *service;
@property (readonly) Class superclass;

+ (id)archivedClasses;
+ (id)packPayload:(id)arg1;
+ (id)unpackProtobuf:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)deviceStatusCallback;
- (void)didStartBugSessionWithInfo:(id)arg1 forID:(id)arg2;
- (void)discoverDevicesWithCompletion:(id /* block */)arg1;
- (id)discovery_queue;
- (id)incomingDelegate;
- (void)incomingDeviceReceived:(id)arg1;
- (id)initWithConroller:(id)arg1;
- (id)log;
- (id)remoteSideDelegate;
- (id)run_queue;
- (bool)sendMessage:(int)arg1 withData:(id)arg2 forDevice:(id)arg3 isResponse:(bool)arg4;
- (bool)sendMessage:(int)arg1 withData:(id)arg2 forID:(id)arg3 isResponse:(bool)arg4;
- (id)service;
- (void)setDeviceCallback:(id /* block */)arg1;
- (void)setDeviceStatusCallback:(id /* block */)arg1;
- (void)setDiscovery_queue:(id)arg1;
- (void)setIncomingDelegate:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setRemoteSideDelegate:(id)arg1;
- (void)setRun_queue:(id)arg1;
- (void)setService:(id)arg1;
- (void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4;

@end

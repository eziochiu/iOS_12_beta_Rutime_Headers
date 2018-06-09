/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHTTPMessageTransport : HMDRemoteMessageTransport <HMDHTTPClientMessageTransportDelegate, HMDHTTPServerMessageTransportDelegate, HMFNetServiceBrowserDelegate> {
    HMFNetServiceBrowser * _clientBrowser;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSMutableArray * _clientTransports;
    HMDHTTPDevice * _currentDevice;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSMutableSet * _residentDevices;
    bool  _serverEnabled;
    HMDHTTPServerMessageTransport * _serverTransport;
    NSMutableSet * _transientDevices;
    NSMutableDictionary * _txtRecord;
}

@property (nonatomic, readonly, copy) NSDictionary *TXTRecord;
@property (nonatomic, readonly) HMFNetServiceBrowser *clientBrowser;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly) NSArray *clientTransports;
@property (nonatomic, readonly) HMDHTTPDevice *currentDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (getter=isServerEnabled) bool serverEnabled;
@property (nonatomic, readonly) HMDHTTPServerMessageTransport *serverTransport;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (unsigned long long)restriction;
+ (id)shortDescription;
+ (bool)shouldHostMessageServer;

- (void).cxx_destruct;
- (id)TXTRecord;
- (void)_connectToDevice:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_handleReceivedRequestMessage:(id)arg1 fromDevice:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_sendMessage:(id)arg1 destination:(id)arg2 timeout:(double)arg3 responseHandler:(id /* block */)arg4;
- (id)_serviceForDevice:(id)arg1;
- (void)_startServerWithDevice:(id)arg1;
- (void)_stopServer;
- (void)addClientTransport:(id)arg1;
- (bool)canSendMessage:(id)arg1;
- (void)client:(id)arg1 didReceiveMessage:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)client:(id)arg1 didStopWithError:(id)arg2;
- (id)clientBrowser;
- (id)clientQueue;
- (id)clientTransportForDevice:(id)arg1;
- (id)clientTransportForService:(id)arg1;
- (id)clientTransports;
- (void)configureWithDevice:(id)arg1;
- (id)currentDevice;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)deviceForHTTPDevice:(id)arg1;
- (void)handleServerEnabled:(bool)arg1;
- (id)init;
- (id)initWithAccountRegistry:(id)arg1;
- (bool)isDeviceConnected:(id)arg1;
- (bool)isServerEnabled;
- (id)logIdentifier;
- (void)netServiceBrowser:(id)arg1 didAddService:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didStopBrowsingWithError:(id)arg2;
- (id)propertyQueue;
- (long long)qualityOfService;
- (void)removeAllClientTransports;
- (void)removeClientTransport:(id)arg1;
- (void)removeTXTRecordValueForKey:(id)arg1;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)server:(id)arg1 didAddDevice:(id)arg2;
- (void)server:(id)arg1 didReceiveMessage:(id)arg2 fromDevice:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)server:(id)arg1 didRemoveDevice:(id)arg2;
- (void)server:(id)arg1 didStopWithError:(id)arg2;
- (id)serverTransport;
- (void)setCurrentDevice:(id)arg1;
- (void)setServerEnabled:(bool)arg1;
- (void)setServerTransport:(id)arg1;
- (void)setTXTRecordValue:(id)arg1 forKey:(id)arg2;
- (id)shortDescription;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHTTPClientMessageTransport : HMFObject <HMFHTTPClientDelegate, HMFNetServiceDelegate> {
    HMFHTTPClient * _client;
    <HMDHTTPClientMessageTransportDelegate> * _delegate;
    NSUUID * _identifier;
    HMFNetService * _netService;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMDHTTPDevice * _remoteDevice;
    bool  _running;
    NSUUID * _sessionIdentifier;
}

@property (nonatomic, readonly) HMFHTTPClient *client;
@property (readonly, copy) NSString *debugDescription;
@property <HMDHTTPClientMessageTransportDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) HMFNetService *netService;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (getter=isReachable, nonatomic, readonly) bool reachable;
@property (nonatomic, readonly) HMDHTTPDevice *remoteDevice;
@property (getter=isRunning, nonatomic) bool running;
@property (readonly, copy) NSUUID *sessionIdentifier;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_receiveMessage;
- (void)_sendResponseMessage:(id)arg1 forTransactionIdentifier:(id)arg2;
- (void)_stopWithError:(id)arg1;
- (id)client;
- (void)client:(id)arg1 didRequestPingWithCompletionHandler:(id /* block */)arg2;
- (void)clientDidBecomeUnreachable:(id)arg1;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 netService:(id)arg2;
- (bool)isReachable;
- (bool)isRunning;
- (id)logIdentifier;
- (id)netService;
- (void)netService:(id)arg1 didUpdateTXTRecord:(id)arg2;
- (id)propertyQueue;
- (id)remoteDevice;
- (void)sendMessage:(id)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)sendPingWithCompletionHandler:(id /* block */)arg1;
- (id)sessionIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setRunning:(bool)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (id)shortDescription;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (void)stop;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFHTTPClient : HMFObject <HMFLogging, HMFNetMonitorDelegate, HMFTimerDelegate, NSURLSessionDelegate, _HMFNetServiceMonitorDelegate> {
    bool  _active;
    bool  _allowAnonymousConnection;
    NSURL * _baseURL;
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMFHTTPClientDelegate> * _delegate;
    HMFExponentialBackoffTimer * _delegatedPingTimer;
    HMFNetService * _netService;
    _HMFNetServiceMonitor * _netServiceMonitor;
    unsigned long long  _options;
    bool  _pinging;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    HMFNetMonitor * _reachabilityMonitor;
    NSOperationQueue * _reachabilityProbeQueue;
    bool  _reachable;
    NSURLSession * _session;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic) bool allowAnonymousConnection;
@property (nonatomic, readonly, copy) NSURL *baseURL;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property <HMFHTTPClientDelegate> *delegate;
@property (nonatomic, retain) HMFExponentialBackoffTimer *delegatedPingTimer;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HMFNetService *netService;
@property (nonatomic, readonly) _HMFNetServiceMonitor *netServiceMonitor;
@property (nonatomic, readonly) unsigned long long options;
@property (getter=isPinging, nonatomic) bool pinging;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly) HMFNetMonitor *reachabilityMonitor;
@property (nonatomic, readonly) NSOperationQueue *reachabilityProbeQueue;
@property (getter=isReachable, nonatomic) bool reachable;
@property (nonatomic, readonly) NSURLSession *session;
@property (readonly) Class superclass;

+ (id)baseURLWithScheme:(id)arg1 hostAddress:(id)arg2 port:(unsigned long long)arg3;
+ (bool)isValidBaseURL:(id)arg1;
+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)__initializeWithOptions:(unsigned long long)arg1;
- (bool)allowAnonymousConnection;
- (id)baseURL;
- (void)cancelPendingRequests;
- (id)clientQueue;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)delegatedPingTimer;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)init;
- (id)initWithBaseURL:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithNetService:(id)arg1 options:(unsigned long long)arg2;
- (bool)isActive;
- (bool)isPinging;
- (bool)isReachable;
- (bool)isValid;
- (id)logIdentifier;
- (void)monitor:(id)arg1 didUpdateNetService:(id)arg2;
- (void)monitor:(id)arg1 didUpdateReachability:(bool)arg2;
- (id)netService;
- (id)netServiceMonitor;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)networkMonitorIsUnreachable:(id)arg1;
- (void)notifyDelegateOfReachabilityChange:(bool)arg1;
- (unsigned long long)options;
- (id)propertyQueue;
- (id)reachabilityMonitor;
- (id)reachabilityProbeQueue;
- (bool)requestClientReachabilityPingWithRetry:(bool)arg1;
- (void)resolveWithCompletionHandler:(id /* block */)arg1;
- (void)sendRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)session;
- (void)setActive:(bool)arg1;
- (void)setAllowAnonymousConnection:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegatedPingTimer:(id)arg1;
- (void)setNetService:(id)arg1;
- (void)setPinging:(bool)arg1;
- (void)setReachable:(bool)arg1;
- (id)shortDescription;
- (void)startDelegatedPingTimer;
- (void)startReachabilityProbe;
- (void)stopDelegatedPingTimer;
- (void)timerDidFire:(id)arg1;

@end

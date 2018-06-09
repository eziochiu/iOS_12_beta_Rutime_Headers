/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRelayManager : HMFObject <HMFLogging, HMFNetMonitorDelegate, IDSServiceDelegateHomeKit, NSURLSessionDelegate> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSString * _controllerIdentifier;
    unsigned long long  _currentState;
    NSHashTable * _delegates;
    bool  _enabled;
    HMDHome * _home;
    IDSService * _idsService;
    HMFNetMonitor * _networkMonitor;
    bool  _networkReachable;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSHashTable * _relayAccessories;
    NSMutableArray * _relayStreams;
    bool  _supported;
    NSURLSession * _urlSession;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, copy) NSString *controllerIdentifier;
@property (nonatomic) unsigned long long currentState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSHashTable *delegates;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, readonly) IDSService *idsService;
@property (nonatomic, readonly) HMFNetMonitor *networkMonitor;
@property (getter=isNetworkReachable, nonatomic) bool networkReachable;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly) NSHashTable *relayAccessories;
@property (nonatomic, readonly) NSMutableArray *relayStreams;
@property (readonly) Class superclass;
@property (getter=isSupported, nonatomic) bool supported;
@property (nonatomic, readonly) NSURLSession *urlSession;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)__resumeAllStreams;
- (void)__suspendAllStreams;
- (id)_accessTokenForAccessTokenAttributes:(id)arg1 consentTokens:(id)arg2 matchedConsentToken:(id*)arg3 error:(id*)arg4;
- (void)_accessTokensForConsentTokens:(id)arg1 user:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_activateAccessory:(id)arg1;
- (id)_consentTokenForConsentTokenAttributes:(id)arg1 matchedAccessory:(id*)arg2 error:(id*)arg3;
- (void)_disableRelayForAccessory:(id)arg1;
- (bool)_enableRelayForAccessory:(id)arg1;
- (void)_handleAccessoryEnabled:(id)arg1;
- (void)_handleNotifyingDelegatesOfControllerIdentifierUpdate:(id)arg1;
- (void)_handleRelayManagerDisabled;
- (void)_handleRelayManagerEnabled;
- (void)_handleRelayManagerEnabling;
- (void)_handleRelayManagerUnsupported;
- (void)_pairAccessory:(id)arg1;
- (id)_relayStreamForAccessory:(id)arg1;
- (void)_requestConsentTokensForAccessoryIdentifiers:(id)arg1 administratorIdentifier:(id)arg2;
- (void)_requestPairingWithAccessories:(id)arg1;
- (void)_requestUserReportAccessory:(id)arg1 reportIdentifier:(id)arg2;
- (void)_sendAccessoryReport:(id)arg1 reportIdentifier:(id)arg2;
- (void)_setupRelayForAccessory:(id)arg1;
- (void)_tearDownRelayForAccessory:(id)arg1;
- (void)_updateControllerIdentifier;
- (void)_updateCurrentState;
- (void)accessory:(id)arg1 didUpdateEnabledState:(bool)arg2;
- (void)accessoryDidActivate:(id)arg1;
- (void)accessoryDidPair:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)addRelayAccessory:(id)arg1;
- (void)addUserToRelayAccessories:(id)arg1 consentTokens:(id)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)clientQueue;
- (id)controllerIdentifier;
- (unsigned long long)currentState;
- (id)delegates;
- (id)home;
- (id)idsService;
- (id)init;
- (id)initWithHome:(id)arg1;
- (bool)isEnabled;
- (bool)isNetworkReachable;
- (bool)isSupported;
- (id)logIdentifier;
- (id)networkMonitor;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)networkMonitorIsUnreachable:(id)arg1;
- (id)propertyQueue;
- (id)relayAccessories;
- (id)relayStreams;
- (void)removeDelegate:(id)arg1;
- (void)removeRelayAccessory:(id)arg1;
- (void)requestPairingWithRelayAccessories:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 incomingAccessoryData:(id)arg3 fromAccessoryID:(id)arg4 context:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingAccessoryReportMessage:(id)arg3 controllerID:(id)arg4 accessoryID:(id)arg5 context:(id)arg6;
- (void)setControllerIdentifier:(id)arg1;
- (void)setCurrentState:(unsigned long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setNetworkReachable:(bool)arg1;
- (void)setSupported:(bool)arg1;
- (void)startAccessories:(id)arg1;
- (id)urlSession;

@end

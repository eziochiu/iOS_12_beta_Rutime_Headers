/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSLocalDiscoverySession : NSObject <RMSDiscoverySession, RMSServiceProviderDelegate> {
    NSMutableSet * _availableServices;
    <RMSDiscoverySessionDelegate> * _delegate;
    long long  _discoveryTypes;
    bool  _networkAvailable;
    NSArray * _pairedNetworkNames;
    NSArray * _providers;
    Reachability * _reachability;
}

@property (nonatomic, readonly) NSArray *availableServices;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RMSDiscoverySessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long discoveryTypes;
@property (readonly) unsigned long long hash;
@property (getter=isNetworkAvailable, nonatomic, readonly) bool networkAvailable;
@property (nonatomic, retain) NSArray *pairedNetworkNames;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enableProviders;
- (void)_handleHSGroupIDDidChangeNotification:(id)arg1;
- (void)_handleReachabilityChangedNotification:(id)arg1;
- (id)_providerForDiscoveryType:(long long)arg1;
- (void)_updateWifiAvailability;
- (id)availableServices;
- (void)beginDiscovery;
- (void)dealloc;
- (id)delegate;
- (long long)discoveryTypes;
- (void)endDiscovery;
- (id)init;
- (bool)isNetworkAvailable;
- (id)pairedNetworkNames;
- (void)serviceProvider:(id)arg1 serviceDidBecomeAvailable:(id)arg2;
- (void)serviceProvider:(id)arg1 serviceDidBecomeUnavailable:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDiscoveryTypes:(long long)arg1;
- (void)setPairedNetworkNames:(id)arg1;

@end

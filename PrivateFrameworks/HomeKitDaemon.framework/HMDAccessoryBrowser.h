/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryBrowser : HMFObject <HAPAccessoryServerBrowserDelegate, HAPAccessoryServerDelegate, HMDAccessoryBrowserHapProtocol, HMDAccessoryBrowserProtocol, HMDAuthServerDelegate, HMDMediaBrowserDelegate, HMDWACAccessoryConfigurationDelegate, HMDWACBrowserDelegate, HMDWatchSystemStateDelegate, HMFLogging, HMFMessageReceiver, HMFTimerDelegate> {
    HMDUnassociatedWACAccessory * _accessoryPerformingWAC;
    NSMutableArray * _accessoryServerBrowsers;
    bool  _activeSiriCommand;
    bool  _appIsInForeground;
    HMDAuthServer * _authServer;
    bool  _browseForMediaAccessories;
    NSMutableSet * _browsingXPCConnections;
    HAPAccessoryServerBrowserBTLE * _btleAccessoryServerBrowser;
    NSMutableArray * _currentlyPairingAccessories;
    NSMutableArray * _currentlyPairingProgressHandlers;
    NSMapTable * _delegates;
    HMDDAccessoryServerBrowserDemo * _demoAccessoryServerBrowser;
    NSMutableSet * _deviceSetupMediaAccessories;
    NSMutableSet * _discoveredAccessoryServerIdentifiers;
    NSHashTable * _discoveringBLEAccessoryServerIdentifiers;
    unsigned long long  _generationCounter;
    HMDHomeManager * _homeManager;
    NSString * _identifierOfAccessoryBeingReprovisioned;
    NSMutableSet * _identifiersOfAssociatedMediaAccessories;
    NSMutableSet * _identifiersOfBTLEPairedAccessories;
    NSMutableSet * _identifiersOfPairedAccessories;
    HAPAccessoryServerBrowserIP * _ipAccessoryServerBrowser;
    <HMDAccessoryBrowserManagerDelegate> * _managerDelegate;
    NSMutableSet * _mediaAccessoryControlConnections;
    HMDMediaBrowser * _mediaBrowser;
    HMFMessageDispatcher * _messageDispatcher;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSObject<OS_dispatch_source> * _reachabilityTimerForBTLE;
    HAPAccessoryServerBrowserRelay * _relayAccessoryServerBrowser;
    HMFTimer * _stopBrowsingAccessoriesNeedingReprovisioningTimer;
    HMFTimer * _stopReprovisioningTimer;
    NSHashTable * _tombstonedHAPAccessoryServers;
    NSMutableSet * _unassociatedMediaAccessories;
    NSMutableSet * _unassociatedWACAccessories;
    NSMutableSet * _unpairedHAPAccessories;
    NSUUID * _uuid;
    HMDWACBrowser * _wacBrowser;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (getter=getActiveWACSession, setter=setActiveWACSession:, nonatomic, retain) HMDUnassociatedWACAccessory *accessoryPerformingWAC;
@property (nonatomic, retain) NSMutableArray *accessoryServerBrowsers;
@property (nonatomic) bool activeSiriCommand;
@property (nonatomic) bool appIsInForeground;
@property (nonatomic, retain) HMDAuthServer *authServer;
@property (nonatomic) bool browseForMediaAccessories;
@property (nonatomic, retain) NSMutableSet *browsingXPCConnections;
@property (nonatomic, retain) HAPAccessoryServerBrowserBTLE *btleAccessoryServerBrowser;
@property (nonatomic, retain) NSMutableArray *currentlyPairingAccessories;
@property (nonatomic, retain) NSMutableArray *currentlyPairingProgressHandlers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMapTable *delegates;
@property (nonatomic, retain) HMDDAccessoryServerBrowserDemo *demoAccessoryServerBrowser;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *deviceSetupMediaAccessories;
@property (nonatomic, retain) NSMutableSet *discoveredAccessoryServerIdentifiers;
@property (nonatomic, readonly) NSHashTable *discoveringBLEAccessoryServerIdentifiers;
@property (nonatomic) unsigned long long generationCounter;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHomeManager *homeManager;
@property (nonatomic, retain) NSString *identifierOfAccessoryBeingReprovisioned;
@property (nonatomic, retain) NSMutableSet *identifiersOfAssociatedMediaAccessories;
@property (nonatomic, retain) NSMutableSet *identifiersOfBTLEPairedAccessories;
@property (nonatomic, retain) NSMutableSet *identifiersOfPairedAccessories;
@property (nonatomic, retain) HAPAccessoryServerBrowserIP *ipAccessoryServerBrowser;
@property (nonatomic) <HMDAccessoryBrowserManagerDelegate> *managerDelegate;
@property (nonatomic, retain) HMDMediaBrowser *mediaBrowser;
@property (nonatomic, retain) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *reachabilityTimerForBTLE;
@property (nonatomic, readonly) HAPAccessoryServerBrowserRelay *relayAccessoryServerBrowser;
@property (nonatomic, retain) HMFTimer *stopBrowsingAccessoriesNeedingReprovisioningTimer;
@property (nonatomic, retain) HMFTimer *stopReprovisioningTimer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSHashTable *tombstonedHAPAccessoryServers;
@property (readonly, copy) NSArray *unassociatedAccessories;
@property (nonatomic, readonly) NSArray *unassociatedMediaAccessories;
@property (nonatomic, readonly) NSArray *unpairedHAPAccessories;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) HMDWACBrowser *wacBrowser;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)__addMediaAccessoryControlObserver:(id)arg1;
- (bool)__isConnectionBeingObserved:(id)arg1;
- (bool)__isCurrentDevicePrimaryResident;
- (bool)__isMediaAccessoryControlRequested;
- (id)__observerMatchingConnection:(id)arg1;
- (void)__removeMediaAccessoryControlObserver:(id)arg1;
- (void)_addReconfirmTimer:(id)arg1 accessoryServer:(id)arg2;
- (void)_addUnpairedAccessoryForServer:(id)arg1;
- (void)_btleAccessoryReachabilityProbeTimer:(bool)arg1;
- (void)_callProgressOrErrorOut:(id)arg1 pairingInfo:(id)arg2 accessoryInfo:(id)arg3 unpairedAccessory:(id)arg4 progress:(long long)arg5 certStatus:(unsigned long long)arg6;
- (void)_cancelCurrentlyPairingAccessories:(id)arg1;
- (void)_cancelPairingWithAccessory:(id)arg1 error:(id)arg2;
- (void)_checkDelegatesOfAccessoryWithSetupID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_checkDelegatesofBlockedAccessoryServer:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_checkIfPairingWithPairedAccessoryServer:(id)arg1 errorCode:(long long)arg2;
- (void)_continueAfterPPIDValidation:(bool)arg1 server:(id)arg2;
- (void)_discoverAccessories:(id)arg1;
- (void)_discoverAccessoryServer:(id)arg1 linkType:(long long)arg2 errorHandler:(id /* block */)arg3;
- (void)_handleActiveAppOrSiriCommand;
- (void)_handleAddedAccessory:(id)arg1;
- (void)_handleAddedAccessoryAdvertisements:(id)arg1;
- (void)_handleInvalidatedXPCConnection:(id)arg1;
- (void)_handleNoActiveHomeKitAppOrSiriCommand;
- (void)_handlePairingInterruptedTimeout:(id)arg1 error:(id)arg2;
- (void)_handleRemovedAccessory:(id)arg1;
- (void)_handleRemovedAccessoryAdvertisements:(id)arg1;
- (void)_handleRemovedUnpairedHAPAccessory:(id)arg1;
- (void)_handleRequestFetchNewAccessories:(id)arg1;
- (void)_handleRequestSearchForNewAccessories:(id)arg1;
- (void)_handleSetupCodeAvailable:(id)arg1;
- (bool)_isAccessoryServerTombstoned:(id)arg1;
- (bool)_isBrowsingAllowed;
- (void)_notifyDelegatesOfAccessoryServer:(id)arg1 didDiscoverAccessories:(id)arg2 transaction:(id)arg3 error:(id)arg4;
- (void)_notifyDelegatesOfAccessoryServer:(id)arg1 didStopPairingWithError:(id)arg2;
- (void)_notifyDelegatesOfAccessoryServer:(id)arg1 didUpdateCategory:(id)arg2;
- (void)_notifyDelegatesOfAccessoryServer:(id)arg1 didUpdateHasPairings:(bool)arg2;
- (void)_notifyDelegatesOfAccessoryServer:(id)arg1 didUpdateName:(id)arg2;
- (void)_notifyDelegatesOfAccessoryServer:(id)arg1 didUpdateValuesForCharacteristics:(id)arg2 stateNumber:(id)arg3 broadcast:(bool)arg4;
- (void)_notifyDelegatesOfAccessoryServerNeedingReprovisioning:(id)arg1 error:(id)arg2;
- (void)_notifyDelegatesOfDiscoveryFailure:(id)arg1 accessoryServer:(id)arg2 linkType:(long long)arg3;
- (void)_notifyDelegatesOfNewAccessory:(id)arg1;
- (void)_notifyDelegatesOfNewPairedAccessoryServer:(id)arg1 stateChanged:(bool)arg2 stateNumber:(id)arg3;
- (void)_notifyDelegatesOfReachability:(bool)arg1 forAccessoryWithIdentifier:(id)arg2;
- (void)_notifyDelegatesOfReachabilityChange:(bool)arg1 forBTLEAccessories:(id)arg2;
- (void)_notifyDelegatesOfRemovedAccessoryServer:(id)arg1 error:(id)arg2;
- (void)_notifyDelegatesOfTombstonedAccessoryServer:(id)arg1;
- (void)_notifyDelegatesOfWACCompletionForAccessoryServerWithIdentifier:(id)arg1 error:(id)arg2;
- (void)_pairAccessory:(id)arg1 homeName:(id)arg2 setupCode:(id)arg3 setupCodeProvider:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)_pairAccessoryWithDescription:(id)arg1 homeName:(id)arg2 neeedsUserConfirmation:(bool)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)_pairingInformationForUnpairedAccessory:(id)arg1;
- (id)_progressHandlerForUnpairedAccessory:(id)arg1;
- (void)_promptForPairingPasswordForServer:(id)arg1 reason:(id)arg2;
- (void)_registerForMessages;
- (void)_removeMediaAccessoryControlObserverMatchingConnection:(id)arg1;
- (void)_removePairingInformation:(id)arg1 errorCode:(long long)arg2;
- (void)_removePairingInformationForUnpairedAccessory:(id)arg1;
- (void)_reprovisionAccessoryWithIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_resurrectAccessoryServer:(id)arg1;
- (void)_sendNewAccessoryData:(id)arg1 added:(bool)arg2 requiresSPIEntitlement:(bool)arg3;
- (void)_sendPairingCompletionStatusForServer:(id)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_setBTLEPowerChangeCompletionHandler;
- (bool)_shouldAccessoryServerBeTombstoned:(id)arg1;
- (void)_startDiscoveringAccessories;
- (void)_startDiscoveringAccessoriesNeedingReprovisioning;
- (void)_startDiscoveringPairedAccessories;
- (void)_startOrStopAccessoryDiscovery;
- (void)_startPairingInterruptionTimer:(id)arg1;
- (void)_stopBtleAccessoryReachabilityProbeTimer;
- (void)_stopDiscoveringAccessoriesWithForce:(bool)arg1;
- (void)_stopReconfirmTimer:(id)arg1;
- (void)_stopReprovisioningTimerHandler;
- (void)_stopSearchingWithXPCConnection:(id)arg1;
- (void)_tombstoneAccessoryServer:(id)arg1;
- (id)_tombstonedAccessoryServerWithServerIdentifier:(id)arg1;
- (id)_unassociatedMediaAccessoryWithIdentifier:(id)arg1;
- (id)_unpairedAccessoryForServer:(id)arg1;
- (id)_unpairedAccessoryMatchingPairingInfo:(id)arg1;
- (id)_unpairedAccessoryWithServerIdentifier:(id)arg1;
- (void)_updatePairingRetryTimerForAccessory:(id)arg1 delay:(long long)arg2;
- (void)accessoryServer:(id)arg1 authenticateUUID:(id)arg2 token:(id)arg3;
- (void)accessoryServer:(id)arg1 confirmUUID:(id)arg2 token:(id)arg3;
- (void)accessoryServer:(id)arg1 didDiscoverAccessories:(id)arg2 transaction:(id)arg3 error:(id)arg4;
- (void)accessoryServer:(id)arg1 didFinishAuth:(id)arg2;
- (void)accessoryServer:(id)arg1 didReceiveBadPasswordThrottleAttemptsWithDelay:(long long)arg2;
- (void)accessoryServer:(id)arg1 didStopPairingWithError:(id)arg2;
- (void)accessoryServer:(id)arg1 didUpdateCategory:(id)arg2;
- (void)accessoryServer:(id)arg1 didUpdateHasPairings:(bool)arg2;
- (void)accessoryServer:(id)arg1 didUpdateName:(id)arg2;
- (void)accessoryServer:(id)arg1 didUpdateValuesForCharacteristics:(id)arg2 stateNumber:(id)arg3 broadcast:(bool)arg4;
- (void)accessoryServer:(id)arg1 isBlockedWithCompletionHandler:(id /* block */)arg2;
- (void)accessoryServer:(id)arg1 promptUserForPasswordWithType:(unsigned long long)arg2;
- (void)accessoryServer:(id)arg1 promtDialog:(id)arg2 forNotCertifiedAccessory:(id)arg3 completion:(id /* block */)arg4;
- (void)accessoryServer:(id)arg1 requestUserPermission:(long long)arg2 accessoryInfo:(id)arg3 error:(id)arg4;
- (void)accessoryServer:(id)arg1 validateUUID:(id)arg2 token:(id)arg3 model:(id)arg4;
- (void)accessoryServerBrowser:(id)arg1 accessoryServer:(id)arg2 didUpdateValuesForCharacteristics:(id)arg3 stateNumber:(id)arg4 broadcast:(bool)arg5;
- (void)accessoryServerBrowser:(id)arg1 didChangeReachability:(bool)arg2 forAccessoryServerWithIdentifier:(id)arg3;
- (void)accessoryServerBrowser:(id)arg1 didFailToDiscoverAccessoryServerWithIdentifier:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didFindAccessoryServer:(id)arg2 stateChanged:(bool)arg3 stateNumber:(id)arg4;
- (void)accessoryServerBrowser:(id)arg1 didFindAccessoryServerForReprovisioning:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didFindAccessoryServerNeedingReprovisioning:(id)arg2 error:(id)arg3;
- (void)accessoryServerBrowser:(id)arg1 didFinishWACForAccessoryWithIdentifier:(id)arg2 error:(id)arg3;
- (void)accessoryServerBrowser:(id)arg1 didRemoveAccessoryServer:(id)arg2 error:(id)arg3;
- (void)accessoryServerBrowser:(id)arg1 didStartDiscoveringWithError:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 didStopDiscoveringWithError:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 getCacheForAccessoryWithIdentifier:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)accessoryServerBrowser:(id)arg1 removeCacheForAccessoryWithIdentifier:(id)arg2;
- (void)accessoryServerBrowser:(id)arg1 saveCache:(id)arg2 serverIdentifier:(id)arg3;
- (id)accessoryServerBrowsers;
- (void)accessoryServerDidUpdateStateNumber:(id)arg1;
- (id)acessoryBrowserHapProtocol;
- (void)activate:(bool)arg1;
- (bool)activeSiriCommand;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)addUnassociatedAccessory:(id)arg1 forDeviceSetup:(bool)arg2;
- (void)addUnassociatedMediaAccessory:(id)arg1 forDeviceSetup:(bool)arg2;
- (void)addUnassociatedWACAccessory:(id)arg1;
- (void)addUnpairedAccessoryServer:(id)arg1 identifier:(id)arg2;
- (void)addUnpairedHAPAccessory:(id)arg1;
- (bool)appIsInForeground;
- (id)authServer;
- (bool)browseForMediaAccessories;
- (void)browser:(id)arg1 didAddAdvertisements:(id)arg2;
- (void)browser:(id)arg1 didRemoveAdvertisements:(id)arg2;
- (void)browser:(id)arg1 didRemoveSessions:(id)arg2;
- (void)browser:(id)arg1 didUpdateEndpoints:(id)arg2;
- (id)browsingXPCConnections;
- (void)btleAccessoryReachabilityProbeTimer:(bool)arg1;
- (id)btleAccessoryServerBrowser;
- (void)cancelPairingWithAccessory:(id)arg1 error:(id)arg2;
- (void)cancelPairingWithAccessoryDescription:(id)arg1 error:(id)arg2;
- (void)configureAccessory:(id)arg1 trackState:(bool)arg2 connectionPriority:(bool)arg3;
- (void)configureDemoBrowserWithDemoAccessories:(id)arg1 finalized:(bool)arg2;
- (void)configureWithHomeManager:(id)arg1;
- (void)continueAddingAccesosryToHomeAfterUserConfirmation:(id)arg1 withError:(id)arg2;
- (id)currentlyPairingAccessories;
- (id)currentlyPairingProgressHandlers;
- (void)dealloc;
- (id)delegates;
- (id)demoAccessoryServerBrowser;
- (void)deregisterPairedAccessory:(id)arg1;
- (id)deviceSetupMediaAccessories;
- (void)didFinishActivation:(id)arg1 context:(id)arg2;
- (void)didReceiveUserConsentResponseForSetupAccessoryDescription:(id)arg1 consent:(bool)arg2;
- (void)discoverAccessories:(id)arg1;
- (void)discoverAccessoryServer:(id)arg1 linkType:(long long)arg2 errorHandler:(id /* block */)arg3;
- (id)discoveredAccessoryServerIdentifiers;
- (id)discoveredAccessoryServers;
- (id)discoveringBLEAccessoryServerIdentifiers;
- (id)dumpBrowsingConnections;
- (id)dumpRegisteredPairedAccessories;
- (id)dumpUnassociatedAccessories;
- (id)findAccessoryServerForAccessoryDescription:(id)arg1;
- (unsigned long long)generationCounter;
- (id)getActiveWACSession;
- (void)handleActivationResponse:(id)arg1 context:(id)arg2;
- (void)handleActiveSiriCommand:(id)arg1;
- (void)handleAddedAccessory:(id)arg1;
- (void)handleAppTermination:(id)arg1;
- (void)handleHomeKitAppInForeground:(id)arg1;
- (void)handleNewlyPairedAccessory:(id)arg1 linkType:(long long)arg2;
- (void)handleNoActiveHomeKitApp:(id)arg1;
- (void)handleNoActiveSiriCommand:(id)arg1;
- (void)handlePPIDInfoResponse:(id)arg1 context:(id)arg2 error:(id)arg3;
- (void)handleRemovedAccessory:(id)arg1;
- (void)handleSetupCodeAvailable:(id)arg1;
- (void)handleStartDiscoveringAssociatedMediaAccessories:(bool)arg1 forTransport:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)hasClientRequestedMediaAccessoryControl:(id)arg1;
- (void)homeLocationChangeNotification:(id)arg1;
- (id)homeManager;
- (id)identifierOfAccessoryBeingReprovisioned;
- (id)identifiersOfAssociatedMediaAccessories;
- (id)identifiersOfBTLEPairedAccessories;
- (id)identifiersOfPairedAccessories;
- (id)initWithMessageDispatcher:(id)arg1;
- (id)initWithMessageDispatcher:(id)arg1 workQueue:(id)arg2 injectedSettings:(id)arg3;
- (id)ipAccessoryServerBrowser;
- (bool)isBrowsingAllowed;
- (bool)isDemoAccessoryIdentifier:(id)arg1;
- (id)managerDelegate;
- (id)mediaBrowser;
- (id)messageDestination;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)notifyDelegatesOfReachability:(bool)arg1 forAccessoryWithIdentifier:(id)arg2;
- (unsigned long long)numPairedIPAccessories;
- (void)pairAccessory:(id)arg1 homeName:(id)arg2 setupCode:(id)arg3 setupCodeProvider:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)pairAccessoryWithDescription:(id)arg1 homeName:(id)arg2 neeedsUserConfirmation:(bool)arg3 progressHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)probeReachabilityForBTLEAccessoryServersWithIdentifiers:(id)arg1 onQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)propertyQueue;
- (id)reachabilityTimerForBTLE;
- (void)registerPairedAccessory:(id)arg1 btleTransport:(bool)arg2 airPlay:(bool)arg3;
- (void)registerProgressHandler:(id /* block */)arg1 unpairedAccessoryUUID:(id)arg2;
- (id)relayAccessoryServerBrowser;
- (void)removeDelegate:(id)arg1;
- (void)removeUnassociatedAccessory:(id)arg1;
- (void)removeUnassociatedAccessoryWithIdentifier:(id)arg1;
- (void)removeUnassociatedMediaAccessory:(id)arg1;
- (void)removeUnassociatedWACAccessory:(id)arg1;
- (void)removeUnpairedHAPAccessory:(id)arg1;
- (void)reprovisionAccessoryWithIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)requestPermissionToAssociateWACAccessory:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resetConfiguration;
- (void)resurrectAccessoryServer:(id)arg1;
- (void)retrieveCurrentStateForIdentifer:(id)arg1 onQueue:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setAccessoryServerBrowsers:(id)arg1;
- (void)setActiveSiriCommand:(bool)arg1;
- (void)setActiveWACSession:(id)arg1;
- (void)setAppIsInForeground:(bool)arg1;
- (void)setAuthServer:(id)arg1;
- (void)setBrowseForMediaAccessories:(bool)arg1;
- (void)setBrowsingXPCConnections:(id)arg1;
- (void)setBtleAccessoryServerBrowser:(id)arg1;
- (void)setCurrentlyPairingAccessories:(id)arg1;
- (void)setCurrentlyPairingProgressHandlers:(id)arg1;
- (void)setDelegates:(id)arg1;
- (void)setDemoAccessoryServerBrowser:(id)arg1;
- (void)setDiscoveredAccessoryServerIdentifiers:(id)arg1;
- (void)setGenerationCounter:(unsigned long long)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setIdentifierOfAccessoryBeingReprovisioned:(id)arg1;
- (void)setIdentifiersOfAssociatedMediaAccessories:(id)arg1;
- (void)setIdentifiersOfBTLEPairedAccessories:(id)arg1;
- (void)setIdentifiersOfPairedAccessories:(id)arg1;
- (void)setIpAccessoryServerBrowser:(id)arg1;
- (void)setManagerDelegate:(id)arg1;
- (void)setMediaBrowser:(id)arg1;
- (void)setMessageDispatcher:(id)arg1;
- (void)setQOS:(long long)arg1;
- (void)setReachabilityTimerForBTLE:(id)arg1;
- (void)setStopBrowsingAccessoriesNeedingReprovisioningTimer:(id)arg1;
- (void)setStopReprovisioningTimer:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWacBrowser:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)startDiscoveringAccessories;
- (void)startDiscoveringAccessoriesNeedingReprovisioning;
- (void)startDiscoveringPairedAccessories;
- (id)stopBrowsingAccessoriesNeedingReprovisioningTimer;
- (void)stopDiscoveringAccessories;
- (id)stopReprovisioningTimer;
- (void)stopTrackingBTLEAccessoriesWithIdentifiers:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (void)tombstoneAccessoryServer:(id)arg1;
- (id)tombstonedHAPAccessoryServers;
- (id)unassociatedAccessories;
- (id)unassociatedHAPAccessories;
- (id)unassociatedMediaAccessories;
- (void)unassociatedWACAccessoryDidFinishAssociation:(id)arg1 withError:(id)arg2;
- (void)unassociatedWACAccessoryDidStartAssociation:(id)arg1;
- (id)unpairedAccessoryWithUUID:(id)arg1;
- (id)unpairedHAPAccessories;
- (void)updateBroadcastKeyForIdentifer:(id)arg1 key:(id)arg2 keyUpdatedStateNumber:(id)arg3 keyUpdatedTime:(double)arg4;
- (void)updateStateForIdentifier:(id)arg1 stateNumber:(id)arg2;
- (void)updateUnassociatedWACAccessory:(id)arg1;
- (id)uuid;
- (id)wacBrowser;
- (id)workQueue;

@end

/* made by EzioChiu.
 */

@protocol HMDAccessoryBrowserProtocol

@required

- (<HMDAccessoryBrowserHapProtocol> *)acessoryBrowserHapProtocol;
- (void)activate:(bool)arg1;
- (void)addDelegate:(id <HMDAccessoryBrowserDelegate>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)addUnassociatedAccessory:(HMDUnassociatedAccessory *)arg1 forDeviceSetup:(bool)arg2;
- (void)addUnpairedAccessoryServer:(HAPAccessoryServer *)arg1 identifier:(NSString *)arg2;
- (void)btleAccessoryReachabilityProbeTimer:(bool)arg1;
- (void)cancelPairingWithAccessory:(HMDUnpairedHAPAccessory *)arg1 error:(NSError *)arg2;
- (void)cancelPairingWithAccessoryDescription:(HMSetupAccessoryDescription *)arg1 error:(NSError *)arg2;
- (void)deregisterPairedAccessory:(NSString *)arg1;
- (void)didReceiveUserConsentResponseForSetupAccessoryDescription:(HMSetupAccessoryDescription *)arg1 consent:(bool)arg2;
- (void)discoverAccessories:(HAPAccessoryServer *)arg1;
- (void)discoverAccessoryServer:(void *)arg1 linkType:(void *)arg2 errorHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSSet *)discoveredAccessoryServers;
- (NSString *)dumpBrowsingConnections;
- (NSString *)dumpRegisteredPairedAccessories;
- (NSDictionary *)dumpUnassociatedAccessories;
- (void)handleNewlyPairedAccessory:(NSString *)arg1 linkType:(long long)arg2;
- (void)handleSetupCodeAvailable:(HMDUnpairedHAPAccessory *)arg1;
- (void)handleStartDiscoveringAssociatedMediaAccessories:(void *)arg1 forTransport:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: bool, HMFMessageTransport *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, NSDictionary *, void*
- (bool)hasClientRequestedMediaAccessoryControl:(HMFMessageTransport *)arg1;
- (bool)isBrowsingAllowed;
- (HMDMediaBrowser *)mediaBrowser;
- (void)pairAccessory:(void *)arg1 homeName:(void *)arg2 setupCode:(void *)arg3 setupCodeProvider:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 27: HMDUnpairedHAPAccessory *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMDUnpairedHAPAccessory *, NSString *, id /* block */, void*, void, id /* block */, NSString *, NSError *, void*, void*, id /* block */, void*, void, id /* block */, HAPAccessoryServer *, NSUUID *, long long, unsigned long long, NSError *, void*
- (void)pairAccessoryWithDescription:(void *)arg1 homeName:(void *)arg2 neeedsUserConfirmation:(void *)arg3 progressHandler:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 24: HMSetupAccessoryDescription *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSString *, NSString *, HMAccessoryCategory *, long long, unsigned long long, void*, id /* block */, void*, void, id /* block */, HAPAccessoryServer *, NSUUID *, long long, unsigned long long, NSError *, void*
- (void)probeReachabilityForBTLEAccessoryServersWithIdentifiers:(void *)arg1 onQueue:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, bool, void*
- (void)registerPairedAccessory:(NSString *)arg1 btleTransport:(bool)arg2 airPlay:(bool)arg3;
- (void)registerProgressHandler:(void *)arg1 unpairedAccessoryUUID:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSString *, NSString *, HMAccessoryCategory *, long long, unsigned long long, void*, NSUUID *
- (HAPAccessoryServerBrowserRelay *)relayAccessoryServerBrowser;
- (void)removeDelegate:(id <HMDAccessoryBrowserDelegate>)arg1;
- (void)removeUnassociatedAccessory:(HMDUnassociatedAccessory *)arg1;
- (void)removeUnassociatedAccessoryWithIdentifier:(NSString *)arg1;
- (void)reprovisionAccessoryWithIdentifier:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resetConfiguration;
- (void)resurrectAccessoryServer:(HAPAccessoryServer *)arg1;
- (void)setQOS:(long long)arg1;
- (void)startDiscoveringAccessories;
- (void)startDiscoveringAccessoriesNeedingReprovisioning;
- (void)startDiscoveringPairedAccessories;
- (void)stopDiscoveringAccessories;
- (void)stopTrackingBTLEAccessoriesWithIdentifiers:(NSArray *)arg1;
- (void)tombstoneAccessoryServer:(HAPAccessoryServer *)arg1;
- (NSArray *)unassociatedAccessories;
- (HMDUnpairedHAPAccessory *)unpairedAccessoryWithUUID:(NSUUID *)arg1;

@end

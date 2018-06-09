/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMediaBrowser : HMFObject <HMFLogging, HMFTimerDelegate> {
    NSMutableSet * _accessoryAdvertisements;
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMDMediaBrowserDelegate> * _delegate;
    bool  _discoverAssociatedAccessories;
    bool  _discoverUnassociatedAccessories;
    HMFTimer * _discoveryPollTimer;
    void * _discoverySession;
    void * _discoverySessionCallbackToken;
    HMDHomeManager * _homeManager;
    NSMutableSet * _identifiersOfAssociatedMediaAccessories;
    NSMutableSet * _mediaEndpoints;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    bool  _updateAvailableOutputDevices;
}

@property (readonly, copy) NSArray *accessoryAdvertisements;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) HMDUnassociatedMediaAccessory *currentAccessory;
@property (readonly, copy) NSString *debugDescription;
@property <HMDMediaBrowserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HMFTimer *discoveryPollTimer;
@property (nonatomic, readonly) void*discoverySession;
@property (nonatomic) void*discoverySessionCallbackToken;
@property (readonly) unsigned long long hash;
@property HMDHomeManager *homeManager;
@property (nonatomic, retain) NSMutableSet *identifiersOfAssociatedMediaAccessories;
@property (nonatomic, retain) NSMutableSet *mediaEndpoints;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic) bool updateAvailableOutputDevices;

+ (id)advertisementsFromOutputDevices:(struct __CFArray { }*)arg1;
+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_addAdvertisements:(id)arg1;
- (void)_handleAvailableOutputDevices:(struct __CFArray { }*)arg1;
- (void)_notifyDelegateOfAddedAdvertisements:(id)arg1;
- (void)_notifyDelegateOfRemovedAdvertisements:(id)arg1;
- (void)_notifyDelegateOfUpdatedEndpoints:(id)arg1;
- (void)_removeAdvertisements:(id)arg1;
- (void)_startDiscoveringAccessories;
- (void)_stopDiscoveringAccessories;
- (void)_updateSessionForAccessory:(id)arg1;
- (void)_updateSessionsForAccessories:(id)arg1;
- (id)accessoryAdvertisements;
- (void)checkForUpdatedAvailableOutputDevices:(struct __CFArray { }*)arg1;
- (id)clientQueue;
- (id)currentAccessory;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (void)deregisterAccessories:(id)arg1;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1 additionalDescription:(id)arg2;
- (id)discoveryPollTimer;
- (void*)discoverySession;
- (void*)discoverySessionCallbackToken;
- (id)dumpDescription;
- (id)homeManager;
- (id)identifiersOfAssociatedMediaAccessories;
- (id)initWithHomeManager:(id)arg1;
- (id)mediaEndpoints;
- (id)messageDispatcher;
- (id)propertyQueue;
- (void)registerAccessories:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscoveryPollTimer:(id)arg1;
- (void)setDiscoverySessionCallbackToken:(void*)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setIdentifiersOfAssociatedMediaAccessories:(id)arg1;
- (void)setMediaEndpoints:(id)arg1;
- (void)setUpdateAvailableOutputDevices:(bool)arg1;
- (id)shortDescription;
- (void)startDiscoveringAssociatedAccessories;
- (void)startDiscoveringUnassociatedAccessories;
- (void)stopDiscoveringAssociatedAccessories;
- (void)stopDiscoveringUnassociatedAccessories;
- (void)timerDidFire:(id)arg1;
- (id)unassociatedAccessoryFromAdvertisementData:(id)arg1;
- (bool)updateAvailableOutputDevices;
- (void)updateSessionsForAccessories:(id)arg1;

@end
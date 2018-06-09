/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessoryBrowsingManager : NSObject <HMAccessoryBrowserDelegate> {
    HMAccessoryBrowser * _accessoryBrowser;
    NSMutableSet * _mutableDiscoveredSharingDevices;
    NSHashTable * _observers;
    SFDeviceDiscovery * _sharingDeviceBrowser;
}

@property (nonatomic, retain) HMAccessoryBrowser *accessoryBrowser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *discoveredHMAccessories;
@property (nonatomic, readonly) NSArray *discoveredSharingDevices;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *mutableDiscoveredSharingDevices;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) SFDeviceDiscovery *sharingDeviceBrowser;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessoryBrowser;
- (void)accessoryBrowser:(id)arg1 didFindNewAccessory:(id)arg2;
- (void)accessoryBrowser:(id)arg1 didRemoveNewAccessory:(id)arg2;
- (void)addBrowsingObserver:(id)arg1;
- (id)discoveredHMAccessories;
- (id)discoveredSharingDevices;
- (id)init;
- (id)mutableDiscoveredSharingDevices;
- (id)observers;
- (void)removeBrowsingObserver:(id)arg1;
- (void)setAccessoryBrowser:(id)arg1;
- (void)setMutableDiscoveredSharingDevices:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setSharingDeviceBrowser:(id)arg1;
- (id)sharingDeviceBrowser;
- (void)startSearchingForNewAccessories;
- (void)stopSearchingForNewAccessories;

@end

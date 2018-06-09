/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKClassSessionBeaconBrowser : NSObject <WPDeviceScannerDelegate, WPZoneTrackerDelegate> {
    bool  _allowInvitationSessions;
    <CRKClassSessionBeaconBrowserDelegate> * _delegate;
    bool  _isBrowsing;
    bool  _isScanning;
    NSSet * _organizationUUIDs;
    WPDeviceScanner * mDeviceScanner;
    long long  mIncreasedScanRequestCount;
    NSMutableSet * mScanningZones;
    WPZoneTracker * mZoneTracker;
}

@property (nonatomic) bool allowInvitationSessions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CRKClassSessionBeaconBrowserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isBrowsing;
@property (nonatomic) bool isScanning;
@property (nonatomic, copy) NSSet *organizationUUIDs;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)allowInvitationSessions;
- (void)dealloc;
- (id)delegate;
- (void)delegateDidFailWithError:(id)arg1;
- (void)delegateDidFindClassSession:(id)arg1 flags:(unsigned short)arg2;
- (void)delegateDidFindInvitationSessionWithIPAddress:(id)arg1;
- (void)deviceScannerDidUpdateState:(id)arg1;
- (void)increaseScanFrequencyForDuration:(double)arg1;
- (void)increasedScanDurationElapsed;
- (id)init;
- (bool)isBrowsing;
- (bool)isScanning;
- (id)organizationUUIDs;
- (id)organizationUUIDsMatchingZoneData:(id)arg1;
- (void)scanner:(id)arg1 didFailToRegisterDevices:(id)arg2 withError:(id)arg3;
- (void)scanner:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;
- (void)scanner:(id)arg1 foundRequestedDevices:(id)arg2;
- (void)setAllowInvitationSessions:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsBrowsing:(bool)arg1;
- (void)setIsScanning:(bool)arg1;
- (void)setOrganizationUUID:(id)arg1;
- (void)setOrganizationUUIDs:(id)arg1;
- (void)startBrowsing;
- (void)startInitialScan;
- (void)startScanningForDevicesInZone:(id)arg1;
- (id)stateDictionary;
- (void)stopBrowsing;
- (void)stopScanningForDevicesInAllZones;
- (void)stopScanningForDevicesInZone:(id)arg1;
- (void)updateScanner;
- (void)updateZones;
- (id)zoneDataForAdvertisementUUID:(id)arg1;
- (id)zoneDataForOrganizationUUID:(id)arg1;
- (void)zoneTracker:(id)arg1 didFailToRegisterZones:(id)arg2 withError:(id)arg3;
- (void)zoneTracker:(id)arg1 enteredZone:(id)arg2;
- (void)zoneTracker:(id)arg1 exitedZone:(id)arg2;
- (void)zoneTrackerDidUpdateState:(id)arg1;

@end

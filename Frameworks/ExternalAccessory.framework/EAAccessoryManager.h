/* made by EzioChiu
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@interface EAAccessoryManager : NSObject <ACCExternalAccessoryProviderProtocol, EABluetoothAccessoryPickerDelegate> {
    NSMutableArray * _connectedAccessories;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    EABluetoothAccessoryPicker * _picker;
    id /* block */  _pickerCompletion;
    NSRecursiveLock * _pickerLock;
    NSTimer * _pickerTimer;
    NSString * _selectedBluetoothAddress;
    bool  _sequesterNewAccessories;
    NSMutableArray * _sequesteredAccessories;
}

@property (nonatomic, readonly) NSArray *connectedAccessories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)accessibilityStartListening;
+ (void)accessibilityStopListening;
+ (id)accessoryDictionaryForLogging:(id)arg1;
+ (bool)isLoggingEnabled;
+ (void)registerCapabilities:(unsigned int)arg1;
+ (id)sharedAccessoryManager;

- (void)EAAccessoryArrived:(id)arg1;
- (void)EAAccessoryLeft:(id)arg1;
- (void)_OOBBTPairingCompletionStatusReceived:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_cameraInfoUpdated:(id)arg1;
- (void)_checkForConnectedAccessories:(bool)arg1 backgroundTaskIdentifier:(unsigned long long)arg2;
- (void)_cleanUpForTaskSuspendWithTaskIdentifier:(unsigned long long)arg1;
- (id)_connectedAccessories;
- (void)_ephemerisURLAvailable:(id)arg1;
- (void)_externalAccessoryConnected:(id)arg1;
- (void)_externalAccessoryConnectedNotificationHandler:(id)arg1;
- (void)_externalAccessoryDisconnected:(id)arg1;
- (void)_externalAccessoryReconnected:(id)arg1;
- (void)_externalAccessoryUpdated:(id)arg1;
- (id)_findExtraAccessoriesContainedOnlyInEA:(id)arg1;
- (id)_findExtraAccessoriesContainedOnlyIniAP:(id)arg1;
- (void)_gpsTimeRequested:(id)arg1;
- (void)_handleAccessoryNotificationTimeout:(id)arg1;
- (void)_iapServerDied:(id)arg1;
- (id)_initFromSingletonCreationMethod;
- (void)_integrateSequesteredAccessories;
- (void)_locationNmeaDataAvailable:(id)arg1;
- (void)_locationPointDataAvailable:(id)arg1;
- (void)_nmeaFilteringSupportChanged:(id)arg1;
- (void)_notifyObserversThatAccessoryDisconnectedWithUserInfo:(id)arg1;
- (void)_pointOfInterestStatusReceived:(id)arg1;
- (void)_removeAlliAPAccessoriesFromArray:(id)arg1 notifyClients:(bool)arg2;
- (void)_timeSyncInfoUpdated:(id)arg1;
- (void)_vehicleDataUpdated:(id)arg1;
- (void)accessibilityAction:(id)arg1;
- (void)accessibilityContextChange:(id)arg1;
- (void)accessibilityItemPropertyRequest:(id)arg1;
- (void)accessibilitySystemPropertyChange:(id)arg1;
- (void)accessibilitySystemPropertyRequest:(id)arg1;
- (void)accessoryClosedEASession:(id)arg1;
- (bool)appDeclaresProtocol:(id)arg1;
- (bool)areLocationAccessoriesEnabled;
- (id)authCertForLegacyConnectionID:(unsigned int)arg1;
- (id)authCertSerialNumberForLegacyConnectionID:(unsigned int)arg1;
- (id)availableAccessories;
- (void)closeEASessionForEASessionUUID:(id)arg1;
- (void)closeInputStreamForEASessionUUID:(id)arg1;
- (id)connectedAccessories;
- (void)createEASessionForProtocol:(id)arg1 accessoryUUID:(id)arg2 withReply:(id /* block */)arg3;
- (id)currentVehicleInformation:(id)arg1;
- (void)dealloc;
- (bool)destinationInformation:(id)arg1 forAccessoryUUID:(id)arg2;
- (void)destinationSharingStatus:(bool)arg1 forDestinationUUID:(id)arg2 supportedParams:(id)arg3 forUUID:(id)arg4;
- (void)devicePicker:(id)arg1 didSelectAddress:(id)arg2 errorCode:(long long)arg3;
- (void)disconnectIPAccessory:(id)arg1;
- (void)endSession:(unsigned int)arg1 forConnectionID:(unsigned int)arg2;
- (void)handleIncomingExternalAccessoryData:(id)arg1 forEASessionIdentifier:(id)arg2 withReply:(id /* block */)arg3;
- (id)init;
- (void)initialEAAccessoriesAttachedAfterClientConnection:(id)arg1;
- (void)initiateConnectionToIPAccessory:(id)arg1;
- (void)nmeaSentenceArrived:(id)arg1 forAccessoryUUID:(id)arg2;
- (void)openCompleteForSession:(unsigned int)arg1 connectionID:(unsigned int)arg2;
- (void)openSessionFromAccessoryToApp:(id)arg1;
- (void)openSessionFromAppToAccessory:(id)arg1;
- (void)pointOfInterestSelection:(id)arg1;
- (bool)processIDIsUsingAccessory:(struct __CFString { }*)arg1;
- (void)registerForLocalNotifications;
- (void)requestIAPAccessoryWiFiCredentials:(id)arg1;
- (void)resumeEASessionData:(id)arg1;
- (void)saveEASession:(id)arg1 forEASessionUUID:(id)arg2;
- (void)sendDeviceIdentifierNotification:(id)arg1 usbIdentifier:(id)arg2 forUUID:(id)arg3;
- (void)sendGPRMCDataStatus:(bool)arg1 ValueV:(bool)arg2 ValueX:(bool)arg3 forUUID:(id)arg4;
- (void)sendNMEAFilterList:(id)arg1 forUUID:(id)arg2;
- (void)sendOutgoingEAData:(id)arg1 forSessionUUID:(id)arg2;
- (void)setAreLocationAccessoriesEnabled:(bool)arg1;
- (void)setShouldAllowCppRuntime:(bool)arg1;
- (void)setShouldAllowInternalProtocols:(bool)arg1;
- (bool)shouldAllowCppRuntime;
- (bool)shouldAllowInternalProtocols;
- (void)showBluetoothAccessoryPickerWithNameFilter:(id)arg1 completion:(id /* block */)arg2;
- (void)startDestinationSharingForUUID:(id)arg1;
- (void)startIPAccessoryDiscovery;
- (void)startLocationForConnectedAccessories;
- (void)stopDestinationSharingForUUID:(id)arg1;
- (void)stopIPAccessoryDiscovery;
- (void)stopLocationForConnectedAccessories;
- (void)unregisterForLocalNotifications;
- (void)updateAccessoryInfo:(id)arg1;
- (void)vehicleStatusUpdate:(id)arg1 forAccessoryUUID:(id)arg2;
- (void)wakeAccessoryWithToken:(id)arg1;

@end

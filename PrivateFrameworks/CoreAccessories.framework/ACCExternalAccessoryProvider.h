/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
 */

@interface ACCExternalAccessoryProvider : NSObject <ACCExternalAccessoryXPCClientProtocol> {
    int  _clientCapabilities;
    NSMutableSet * _currentlyConnectedAccessories;
    <ACCExternalAccessoryProviderProtocol> * _delegate;
    NSDictionary * _eaClientRegistrationInfo;
    <ACCExternalAccessoryXPCServerProtocol> * _remoteObject;
    NSXPCConnection * _serverConnection;
}

@property (nonatomic) int clientCapabilities;
@property (nonatomic, retain) NSMutableSet *currentlyConnectedAccessories;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ACCExternalAccessoryProviderProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *eaClientRegistrationInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <ACCExternalAccessoryXPCServerProtocol> *remoteObject;
@property (nonatomic, retain) NSXPCConnection *serverConnection;
@property (readonly) Class superclass;

+ (id)accessoryDictionaryForLogging:(id)arg1;

- (void).cxx_destruct;
- (void)ExternalAccessoryArrived:(id)arg1;
- (void)ExternalAccessoryLeft:(id)arg1;
- (void)_constructClientRegistrationInfo;
- (id)_findAccessoryForPrimaryUUID:(id)arg1;
- (void)_removeAccessoryForPrimaryUUID:(id)arg1;
- (void)_removeAllAccessories;
- (void)accessoryCloseExternalAccessorySession:(id)arg1;
- (int)clientCapabilities;
- (void)closeExternalAccessorySession:(id)arg1;
- (void)connectToServer:(bool)arg1;
- (void)createExternalAccessorySessionForProtocol:(id)arg1 accessoryUUID:(id)arg2 withEASessionReply:(id /* block */)arg3;
- (id)currentVehicleInfo:(id)arg1;
- (id)currentlyConnectedAccessories;
- (void)dealloc;
- (id)delegate;
- (void)destinationInformation:(id)arg1 forUUID:(id)arg2;
- (void)destinationSharingStatus:(bool)arg1 forDestinationUUID:(id)arg2 supportedParams:(id)arg3 forUUID:(id)arg4;
- (id)eaClientRegistrationInfo;
- (void)enqueueLocationNMEASentence:(id)arg1 forUUID:(id)arg2;
- (void)handleIncomingExternalAccessoryData:(id)arg1 forEASessionIdentifier:(id)arg2 withReply:(id /* block */)arg3;
- (id)initWithDelegate:(id)arg1 capabilities:(int)arg2;
- (void)openSocketForAccessoryToApp:(id)arg1;
- (void)openSocketForAppToAccessory:(id)arg1;
- (id)remoteObject;
- (void)requestAccessoryWifiCredentials:(id)arg1;
- (void)resumeEASessionData:(id)arg1;
- (void)sendDeviceIdentifierNotification:(id)arg1 usbIdentifier:(id)arg2 forUUID:(id)arg3;
- (void)sendGPRMCDataStatus:(bool)arg1 ValueV:(bool)arg2 ValueX:(bool)arg3 forAccessoryUUID:(id)arg4;
- (void)sendNMEAFilterList:(id)arg1 forAccessoryUUID:(id)arg2;
- (void)sendOutgoingExternalAccessoryData:(id)arg1 forEASessionIdentifier:(id)arg2 withReply:(id /* block */)arg3;
- (id)serverConnection;
- (void)setClientCapabilities:(int)arg1;
- (void)setCurrentlyConnectedAccessories:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEaClientRegistrationInfo:(id)arg1;
- (void)setRemoteObject:(id)arg1;
- (void)setServerConnection:(id)arg1;
- (void)startDestinationSharingForUUID:(id)arg1;
- (void)startLocationInformationForAccessoryUUID:(id)arg1;
- (void)stopDestinationSharingForUUID:(id)arg1;
- (void)stopLocationInformationForAccessoryUUID:(id)arg1;
- (void)updateAccessoryInfo:(id)arg1 forUUID:(id)arg2;
- (void)vehicleStatusUpdate:(id)arg1 forUUID:(id)arg2;

@end

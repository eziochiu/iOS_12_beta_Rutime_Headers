/* made by EzioChiu
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@interface EAAccessoryInternal : NSObject {
    id /* block */  _WiFiCredentialsCompletionBlock;
    NSDictionary * _audioPorts;
    NSString * _bonjourName;
    NSArray * _cameraComponents;
    unsigned int  _capabilities;
    NSData * _certData;
    NSData * _certSerial;
    int  _classType;
    bool  _connected;
    unsigned int  _connectionID;
    NSString * _coreAccessoryPrimaryUUID;
    bool  _createdByCoreAccessories;
    <EAAccessoryDelegate> * _delegate;
    NSString * _dockType;
    NSMutableArray * _enqueuedNMEASentences;
    unsigned int  _eqIndex;
    NSArray * _eqNames;
    NSString * _firmwareRevisionActive;
    NSString * _firmwareRevisionPending;
    NSString * _hardwareRevision;
    bool  _hasIPConnection;
    bool  _isAvailableOverBonjour;
    NSLock * _locationLock;
    int  _locationSentenceTypesMask;
    NSString * _macAddress;
    NSString * _manufacturer;
    NSString * _modelNumber;
    NSString * _name;
    bool  _notPresentInIAPAccessoriesArray;
    id /* block */  _pairingCompletionBlock;
    bool  _pointOfInterestHandoffEnabled;
    NSString * _preferredApp;
    NSDictionary * _protocols;
    NSString * _serialNumber;
    NSMutableArray * _sessionsList;
    NSDictionary * _vehicleInfoInitialData;
    NSDictionary * _vehicleInfoSupportedTypes;
}

@property (copy) id /* block */ WiFiCredentialsCompletionBlock;
@property (nonatomic, retain) NSDictionary *audioPorts;
@property (nonatomic, copy) NSString *bonjourName;
@property (nonatomic, retain) NSArray *cameraComponents;
@property (nonatomic) unsigned int capabilities;
@property (nonatomic, copy) NSData *certData;
@property (nonatomic, copy) NSData *certSerial;
@property (nonatomic) int classType;
@property (nonatomic) bool connected;
@property (nonatomic) unsigned int connectionID;
@property (nonatomic, copy) NSString *coreAccessoryPrimaryUUID;
@property bool createdByCoreAccessories;
@property (nonatomic) <EAAccessoryDelegate> *delegate;
@property (nonatomic, copy) NSString *dockType;
@property (nonatomic, retain) NSMutableArray *enqueuedNMEASentences;
@property (nonatomic) unsigned int eqIndex;
@property (nonatomic, retain) NSArray *eqNames;
@property (nonatomic, copy) NSString *firmwareRevisionActive;
@property (nonatomic, copy) NSString *firmwareRevisionPending;
@property (nonatomic, copy) NSString *hardwareRevision;
@property (nonatomic) bool hasIPConnection;
@property (nonatomic) bool isAvailableOverBonjour;
@property (nonatomic) int locationSentenceTypesMask;
@property (nonatomic, copy) NSString *macAddress;
@property (nonatomic, copy) NSString *manufacturer;
@property (nonatomic, copy) NSString *modelNumber;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool notPresentInIAPAccessoriesArray;
@property (copy) id /* block */ pairingCompletionBlock;
@property bool pointOfInterestHandoffEnabled;
@property (nonatomic, copy) NSString *preferredApp;
@property (nonatomic, retain) NSDictionary *protocols;
@property (nonatomic, copy) NSString *serialNumber;
@property (nonatomic, readonly) NSArray *sessionsList;
@property (nonatomic, retain) NSDictionary *vehicleInfoInitialData;
@property (nonatomic, retain) NSDictionary *vehicleInfoSupportedTypes;

- (id /* block */)WiFiCredentialsCompletionBlock;
- (void)addSession:(id)arg1;
- (id)audioPorts;
- (id)bonjourName;
- (id)cameraComponents;
- (unsigned int)capabilities;
- (id)certData;
- (id)certSerial;
- (int)classType;
- (bool)connected;
- (unsigned int)connectionID;
- (id)coreAccessoryPrimaryUUID;
- (bool)createdByCoreAccessories;
- (void)dealloc;
- (id)delegate;
- (id)dockType;
- (id)enqueuedNMEASentences;
- (unsigned int)eqIndex;
- (id)eqNames;
- (id)firmwareRevisionActive;
- (id)firmwareRevisionPending;
- (id)hardwareRevision;
- (bool)hasIPConnection;
- (id)init;
- (bool)isAvailableOverBonjour;
- (int)locationSentenceTypesMask;
- (id)macAddress;
- (id)manufacturer;
- (id)modelNumber;
- (id)name;
- (bool)notPresentInIAPAccessoriesArray;
- (id /* block */)pairingCompletionBlock;
- (bool)pointOfInterestHandoffEnabled;
- (id)preferredApp;
- (id)protocols;
- (void)removeSession:(id)arg1;
- (id)serialNumber;
- (id)sessionsList;
- (void)setAudioPorts:(id)arg1;
- (void)setBonjourName:(id)arg1;
- (void)setCameraComponents:(id)arg1;
- (void)setCapabilities:(unsigned int)arg1;
- (void)setCertData:(id)arg1;
- (void)setCertSerial:(id)arg1;
- (void)setClassType:(int)arg1;
- (void)setConnected:(bool)arg1;
- (void)setConnectionID:(unsigned int)arg1;
- (void)setCoreAccessoryPrimaryUUID:(id)arg1;
- (void)setCreatedByCoreAccessories:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDockType:(id)arg1;
- (void)setEnqueuedNMEASentences:(id)arg1;
- (void)setEqIndex:(unsigned int)arg1;
- (void)setEqNames:(id)arg1;
- (void)setFirmwareRevisionActive:(id)arg1;
- (void)setFirmwareRevisionPending:(id)arg1;
- (void)setHardwareRevision:(id)arg1;
- (void)setHasIPConnection:(bool)arg1;
- (void)setIsAvailableOverBonjour:(bool)arg1;
- (void)setLocationSentenceTypesMask:(int)arg1;
- (void)setMacAddress:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModelNumber:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNotPresentInIAPAccessoriesArray:(bool)arg1;
- (void)setPairingCompletionBlock:(id /* block */)arg1;
- (void)setPointOfInterestHandoffEnabled:(bool)arg1;
- (void)setPreferredApp:(id)arg1;
- (void)setProtocols:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setVehicleInfoInitialData:(id)arg1;
- (void)setVehicleInfoSupportedTypes:(id)arg1;
- (void)setWiFiCredentialsCompletionBlock:(id /* block */)arg1;
- (id)vehicleInfoInitialData;
- (id)vehicleInfoSupportedTypes;

@end

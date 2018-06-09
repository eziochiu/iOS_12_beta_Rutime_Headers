/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CRVehicleAccessory : NSObject {
    EAAccessory * _accessory;
    NSArray * _accessoryProtocols;
    NSString * _bluetoothAddress;
    NSData * _certificateSerialNumber;
    NSNumber * _connectionID;
    bool  _supportsUSBCarPlay;
    bool  _supportsWiredBluetoothPairing;
    bool  _supportsWirelessCarPlay;
    NSString * _vehicleName;
}

@property (nonatomic) EAAccessory *accessory;
@property (nonatomic, retain) NSArray *accessoryProtocols;
@property (nonatomic, retain) NSString *bluetoothAddress;
@property (nonatomic, retain) NSData *certificateSerialNumber;
@property (nonatomic, retain) NSNumber *connectionID;
@property (nonatomic) bool supportsUSBCarPlay;
@property (nonatomic) bool supportsWiredBluetoothPairing;
@property (nonatomic) bool supportsWirelessCarPlay;
@property (nonatomic, retain) NSString *vehicleName;

- (void).cxx_destruct;
- (bool)_updateName;
- (id)accessory;
- (id)accessoryProtocols;
- (id)analyticsDescription;
- (void)beginWiredBluetoothPairing:(id /* block */)arg1;
- (id)bluetoothAddress;
- (id)certificateSerialNumber;
- (id)connectionID;
- (id)description;
- (id)displayName;
- (bool)isBluetoothConnected;
- (id)radarDescription;
- (void)requestWiFiCredentials;
- (void)sendDeviceTransportIdentifiers;
- (void)setAccessory:(id)arg1;
- (void)setAccessoryProtocols:(id)arg1;
- (void)setBluetoothAddress:(id)arg1;
- (void)setCertificateSerialNumber:(id)arg1;
- (void)setConnectionID:(id)arg1;
- (void)setSupportsUSBCarPlay:(bool)arg1;
- (void)setSupportsWiredBluetoothPairing:(bool)arg1;
- (void)setSupportsWirelessCarPlay:(bool)arg1;
- (void)setVehicleName:(id)arg1;
- (bool)supportsUSBCarPlay;
- (bool)supportsWiredBluetoothPairing;
- (bool)supportsWirelessCarPlay;
- (id)vehicleName;

@end

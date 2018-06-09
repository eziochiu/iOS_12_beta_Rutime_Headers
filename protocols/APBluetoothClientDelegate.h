/* made by EzioChiu.
 */

@protocol APBluetoothClientDelegate <NSObject>

@required

- (void)airPlaySolo:(APBluetoothClient *)arg1 foundDevice:(NSUUID *)arg2 withData:(NSDictionary *)arg3;
- (void)airPlaySoloDidUpdateState:(APBluetoothClient *)arg1;

@optional

- (void)airPlaySolo:(APBluetoothClient *)arg1 didLosePeer:(NSUUID *)arg2 withData:(NSDictionary *)arg3;
- (void)airPlaySolo:(APBluetoothClient *)arg1 didStartTrackingPeer:(NSUUID *)arg2 withData:(NSDictionary *)arg3 error:(NSError *)arg4;
- (void)airPlaySolo:(APBluetoothClient *)arg1 didStopTrackingPeer:(NSUUID *)arg2 withData:(NSDictionary *)arg3;
- (void)airPlaySolo:(APBluetoothClient *)arg1 failedToStartAdvertisingWithError:(NSError *)arg2;
- (void)airPlaySolo:(APBluetoothClient *)arg1 failedToStartScanningWithError:(NSError *)arg2;
- (void)airPlaySoloAdvertisingPending:(APBluetoothClient *)arg1;
- (void)airPlaySoloStartedAdvertising:(APBluetoothClient *)arg1;
- (void)airPlaySoloStartedScanning:(APBluetoothClient *)arg1;
- (void)airPlaySoloStoppedAdvertising:(APBluetoothClient *)arg1;
- (void)airPlaySoloStoppedScanning:(APBluetoothClient *)arg1;

@end

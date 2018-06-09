/* made by EzioChiu.
 */

@protocol WPPairingDelegate <NSObject>

@required

- (void)pairingDidUpdateState:(WPPairing *)arg1;

@optional

- (void)pairing:(WPPairing *)arg1 failedToStartScanningWithError:(NSError *)arg2;
- (bool)pairing:(WPPairing *)arg1 foundDevice:(NSString *)arg2 payload:(NSData *)arg3 rssi:(NSNumber *)arg4;
- (void)pairing:(WPPairing *)arg1 foundDevice:(NSUUID *)arg2 payload:(NSData *)arg3 rssi:(NSNumber *)arg4 peerInfo:(NSDictionary *)arg5;
- (void)pairingStartedScanning:(WPPairing *)arg1;
- (void)pairingStoppedScanning:(WPPairing *)arg1;

@end

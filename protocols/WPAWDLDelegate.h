/* made by EzioChiu.
 */

@protocol WPAWDLDelegate <NSObject>

@required

- (void)awdlDidUpdateState:(WPAWDL *)arg1;

@optional

- (void)awdl:(WPAWDL *)arg1 failedToStartAdvertisingWithError:(NSError *)arg2;
- (void)awdl:(WPAWDL *)arg1 failedToStartScanningWithError:(NSError *)arg2;
- (bool)awdl:(WPAWDL *)arg1 foundDevice:(NSData *)arg2;
- (void)awdl:(WPAWDL *)arg1 foundDevice:(NSData *)arg2 rssi:(NSNumber *)arg3;
- (void)awdlAdvertisingPending:(WPAWDL *)arg1;
- (void)awdlStartedAdvertising:(WPAWDL *)arg1;
- (void)awdlStartedScanning:(WPAWDL *)arg1;
- (void)awdlStoppedAdvertising:(WPAWDL *)arg1;
- (void)awdlStoppedScanning:(WPAWDL *)arg1;

@end

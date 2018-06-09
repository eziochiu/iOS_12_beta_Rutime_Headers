/* made by EzioChiu.
 */

@protocol WPNearbyDelegate <NSObject>

@required

- (void)nearbyDidUpdateState:(WPNearby *)arg1;

@optional

- (void)nearby:(WPNearby *)arg1 didConnectToPeer:(NSUUID *)arg2 error:(NSError *)arg3;
- (void)nearby:(WPNearby *)arg1 didConnectToPeer:(NSUUID *)arg2 transport:(long long)arg3 error:(NSError *)arg4;
- (void)nearby:(WPNearby *)arg1 didDeferAdvertisingType:(long long)arg2;
- (void)nearby:(WPNearby *)arg1 didDisconnectFromPeer:(NSUUID *)arg2 error:(NSError *)arg3;
- (void)nearby:(WPNearby *)arg1 didDiscoverType:(long long)arg2 withData:(NSData *)arg3 fromPeer:(NSUUID *)arg4;
- (void)nearby:(WPNearby *)arg1 didDiscoverType:(long long)arg2 withData:(NSData *)arg3 fromPeer:(NSUUID *)arg4 peerInfo:(NSDictionary *)arg5;
- (void)nearby:(WPNearby *)arg1 didFailToStartAdvertisingOfType:(long long)arg2 withError:(NSError *)arg3;
- (void)nearby:(WPNearby *)arg1 didFailToStartScanningForType:(long long)arg2 withError:(NSError *)arg3;
- (void)nearby:(WPNearby *)arg1 didFindPeer:(NSUUID *)arg2 type:(long long)arg3;
- (void)nearby:(WPNearby *)arg1 didLosePeer:(NSUUID *)arg2 type:(long long)arg3;
- (void)nearby:(WPNearby *)arg1 didReceiveData:(NSData *)arg2 fromPeer:(NSUUID *)arg3;
- (void)nearby:(WPNearby *)arg1 didSendData:(NSData *)arg2 toPeer:(NSUUID *)arg3 error:(NSError *)arg4;
- (void)nearby:(WPNearby *)arg1 didStartAdvertisingType:(long long)arg2;
- (void)nearby:(WPNearby *)arg1 didStartScanningForType:(long long)arg2;
- (void)nearby:(WPNearby *)arg1 didStartTrackingPeer:(NSUUID *)arg2 type:(long long)arg3 error:(NSError *)arg4;
- (void)nearby:(WPNearby *)arg1 didStopAdvertisingType:(long long)arg2;
- (void)nearby:(WPNearby *)arg1 didStopScanningForType:(long long)arg2;
- (void)nearby:(WPNearby *)arg1 didStopTrackingPeer:(NSUUID *)arg2 type:(long long)arg3;
- (void)nearbyDidChangeBluetoothBandwidthState:(WPNearby *)arg1;

@end

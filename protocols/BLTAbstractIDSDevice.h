/* made by EzioChiu.
 */

@protocol BLTAbstractIDSDevice <NSObject>

@required

- (bool)isCloudReachable;
- (bool)isConnected;
- (bool)isDefaultPairedDevice;
- (bool)isNearby;

@end

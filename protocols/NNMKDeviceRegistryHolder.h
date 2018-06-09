/* made by EzioChiu.
 */

@protocol NNMKDeviceRegistryHolder <NSObject>

@required

- (NNMKDeviceSyncRegistry *)currentDeviceRegistry;
- (bool)pairedDeviceSupportsMultipleMailboxes;

@end

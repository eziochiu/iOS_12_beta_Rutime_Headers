/* made by EzioChiu.
 */

@protocol WLSourceDevicesDelegate

@required

- (void)sourceDeviceController:(WLSourceDevicesController *)arg1 didDiscoverDevice:(WLSourceDevice *)arg2;
- (void)wifiAndDeviceDiscoveryDidGetInterrupted;

@end

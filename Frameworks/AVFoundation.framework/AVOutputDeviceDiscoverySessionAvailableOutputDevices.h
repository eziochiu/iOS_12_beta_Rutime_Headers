/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOutputDeviceDiscoverySessionAvailableOutputDevices : NSObject {
    AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal * _availableOutputDevices;
}

@property (nonatomic, readonly) NSArray *otherDevices;
@property (nonatomic, readonly) NSArray *recentlyUsedDevices;

+ (id)outputDeviceDiscoverySessionAvailableOutputDevicesWithAvailableFigEndpoints:(id)arg1;

- (void)_loadOutputDevices;
- (void)dealloc;
- (unsigned long long)hash;
- (id)impl;
- (id)init;
- (id)initWithOutputDeviceDiscoverySessionAvailableOutputDevicesImpl:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)otherDevices;
- (id)recentlyUsedDevices;

@end

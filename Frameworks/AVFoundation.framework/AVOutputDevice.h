/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOutputDevice : NSObject {
    AVOutputDeviceInternal * _outputDevice;
}

@property (nonatomic, readonly) NSString *deviceID;
@property (nonatomic, readonly) long long deviceSubType;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly) NSString *firmwareVersion;
@property (nonatomic, readonly) NSData *identifyingMACAddress;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly) NSString *modelID;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *serialNumber;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

+ (void)initialize;
+ (id)outputDeviceWithFigEndpoint:(struct OpaqueFigEndpoint { }*)arg1;
+ (id)outputDeviceWithFigEndpoint:(struct OpaqueFigEndpoint { }*)arg1 routingContextFactory:(id)arg2;
+ (id)outputDeviceWithFigEndpoint:(struct OpaqueFigEndpoint { }*)arg1 volumeController:(struct OpaqueFigVolumeControllerState { }*)arg2;
+ (id)outputDeviceWithRouteDescriptor:(struct __CFDictionary { }*)arg1;
+ (id)outputDeviceWithRouteDescriptor:(struct __CFDictionary { }*)arg1 routeDiscoverer:(struct OpaqueFigRouteDiscoverer { }*)arg2;
+ (id)outputDeviceWithRouteDescriptor:(struct __CFDictionary { }*)arg1 routingContextFactory:(id)arg2;
+ (id)outputDeviceWithRouteDescriptor:(struct __CFDictionary { }*)arg1 volumeController:(struct OpaqueFigVolumeControllerState { }*)arg2;
+ (bool)prefersRouteDescriptors;
+ (id)sharedLocalDevice;

- (id)ID;
- (id)airPlayProperties;
- (bool)automaticallyAllowsConnectionsFromPeersInHomeGroup;
- (float)batteryLevel;
- (bool)canAccessAppleMusic;
- (bool)canAccessRemoteAssets;
- (bool)canAccessiCloudMusicLibrary;
- (bool)canBeGroupLeader;
- (bool)canBeGrouped;
- (bool)canCommunicateWithAllLogicalDeviceMembers;
- (bool)canFetchMediaDataFromSender;
- (bool)canPlayEncryptedProgressiveDownloadAssets;
- (bool)canRelayCommunicationChannel;
- (bool)canSetVolume;
- (void)configureUsingBlock:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)configureUsingBlock:(id /* block */)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)connectedPairedDevices;
- (void)dealloc;
- (id)description;
- (unsigned long long)deviceFeatures;
- (id)deviceID;
- (long long)deviceSubType;
- (long long)deviceType;
- (id)figEndpointOutputImpl;
- (id)firmwareVersion;
- (double)frecencyScore;
- (bool)groupContainsGroupLeader;
- (id)groupID;
- (bool)hasBatteryLevel;
- (unsigned long long)hash;
- (id)identifyingMACAddress;
- (id)impl;
- (id)init;
- (id)initWithOutputDeviceImpl:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isGroupLeader;
- (bool)isInUseByPairedDevice;
- (bool)isLogicalDeviceLeader;
- (id)logicalDeviceID;
- (id)manufacturer;
- (id)modelID;
- (id)modelSpecificInformation;
- (id)name;
- (bool)onlyAllowsConnectionsFromPeersInHomeGroup;
- (void)outputDeviceImplDidChangeCanChangeVolume:(id)arg1;
- (void)outputDeviceImplDidChangeVolume:(id)arg1;
- (bool)participatesInGroupPlayback;
- (bool)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (bool)requiresAuthorization;
- (id)serialNumber;
- (void)setSecondDisplayEnabled:(bool)arg1;
- (void)setVolume:(float)arg1;
- (bool)supportsBufferedAirPlay;
- (void)updateFrecencyScore;
- (float)volume;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (bool)shouldRestrictConnectionWithUserPrivilege:(long long)arg1;

@end

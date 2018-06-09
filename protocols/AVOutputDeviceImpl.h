/* made by EzioChiu.
 */

@protocol AVOutputDeviceImpl <NSObject>

@required

- (NSString *)ID;
- (NSDictionary *)airPlayProperties;
- (bool)automaticallyAllowsConnectionsFromPeersInHomeGroup;
- (NSNumber *)batteryLevel;
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
- (NSNumber *)caseBatteryLevel;
- (void)configureUsingBlock:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 16: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <AVOutputDeviceConfigurationModification> *, void*, NSDictionary *, id /* block */, void*, void, id /* block */, int, <AVOutputDeviceConfigurationRetrieval> *, NSString *, NSError *, void*
- (NSArray *)connectedPairedDevices;
- (unsigned long long)deviceFeatures;
- (long long)deviceSubType;
- (long long)deviceType;
- (NSString *)firmwareVersion;
- (bool)groupContainsGroupLeader;
- (NSString *)groupID;
- (NSData *)identifyingMACAddress;
- (bool)isGroupLeader;
- (bool)isInUseByPairedDevice;
- (bool)isLogicalDeviceLeader;
- (NSNumber *)leftBatteryLevel;
- (NSString *)logicalDeviceID;
- (NSString *)manufacturer;
- (NSString *)modelID;
- (NSString *)name;
- (bool)onlyAllowsConnectionsFromPeersInHomeGroup;
- (AVOutputDevice *)parentOutputDevice;
- (bool)participatesInGroupPlayback;
- (bool)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (bool)requiresAuthorization;
- (NSNumber *)rightBatteryLevel;
- (NSString *)serialNumber;
- (void)setParentOutputDevice:(AVOutputDevice *)arg1;
- (void)setSecondDisplayEnabled:(bool)arg1;
- (void)setVolume:(float)arg1;
- (bool)supportsBufferedAirPlay;
- (float)volume;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVOutputDeviceRoute : MPAVRoute {
    void * _logicalLeaderOutputDevice;
    NSArray * _outputDevices;
}

@property (getter=isGroupLeader, nonatomic, readonly) bool groupLeader;
@property (nonatomic, readonly) void*logicalLeaderOutputDevice;
@property (nonatomic, readonly) NSArray *outputDevices;

+ (id)localDeviceUID;
+ (id)localOutputDeviceLocalizedName;
+ (void*)logicalLeaderFromOutputDevices:(id)arg1;
+ (long long)pickableRouteTypeForOutputDevice:(void*)arg1;

- (void).cxx_destruct;
- (bool)_anyOutputDevicePassesMRFunction:(int (*)arg1;
- (bool)_anyOutputDevicePassesTest:(id /* block */)arg1;
- (bool)canAccessRemoteAssets;
- (bool)canFetchMediaDataFromSender;
- (bool)canPlayEncryptedProgressiveDownloadAssets;
- (id)description;
- (id)groupUID;
- (id)initWithOutputDevices:(id)arg1;
- (bool)isAppleTVRoute;
- (bool)isCarplayRoute;
- (bool)isDeviceRoute;
- (bool)isDeviceSpeakerRoute;
- (bool)isGroupLeader;
- (bool)isHomePodRoute;
- (bool)isPickedOnPairedDevice;
- (bool)isProxyGroupPlayer;
- (bool)isStereoPair;
- (bool)isVolumeControlAvailable;
- (void*)logicalLeaderOutputDevice;
- (id)outputDevices;
- (long long)pickableRouteType;
- (id)playingPairedDeviceName;
- (bool)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (id)productIdentifier;
- (bool)requiresPassword;
- (id)routeName;
- (long long)routeSubtype;
- (long long)routeType;
- (id)routeUID;
- (bool)supportsGrouping;
- (bool)supportsWirelessDisplay;

@end

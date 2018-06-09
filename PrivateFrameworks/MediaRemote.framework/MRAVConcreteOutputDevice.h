/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVConcreteOutputDevice : MRAVOutputDevice {
    NSData * _MACAddress;
    NSObject<OS_dispatch_queue> * _accessSerialQueue;
    AVOutputDevice * _avOutputDevice;
    NSString * _firmwareVersion;
    NSString * _groupID;
    NSString * _logicalDeviceID;
    NSString * _modelID;
    NSDictionary * _modelSpecificInfo;
    bool  _overrideGroupID;
    NSString * _playingPairedDeviceName;
    MRAVOutputDeviceSourceInfo * _sourceInfo;
    NSString * _uid;
}

@property (setter=setAVOutputDevice:, nonatomic, retain) AVOutputDevice *avOutputDevice;
@property (nonatomic, retain) MRAVOutputDeviceSourceInfo *sourceInfo;

- (void).cxx_destruct;
- (id)MACAddress;
- (bool)_isOutputDevice:(id)arg1 belongToOutputContext:(id)arg2;
- (void)_onqueue_clearCachedAVOutputDeviceProperties;
- (id)_outputContext;
- (id)_playingPairedDeviceNameForAVOutputDevice:(id)arg1;
- (id)avOutputDevice;
- (float)batteryLevel;
- (bool)canAccessAppleMusic;
- (bool)canAccessRemoteAssets;
- (bool)canAccessiCloudMusicLibrary;
- (bool)canFetchMediaDataFromSender;
- (bool)canPlayEncryptedProgressiveDownloadAssets;
- (bool)canRelayCommunicationChannel;
- (unsigned int)deviceSubtype;
- (unsigned int)deviceType;
- (id)firmwareVersion;
- (bool)groupContainsGroupLeader;
- (id)groupID;
- (bool)hasBatteryLevel;
- (id)initWithAVOutputDevice:(id)arg1 sourceInfo:(id)arg2;
- (bool)isAirPlayReceiverSessionActive;
- (bool)isDeviceGroupable;
- (bool)isGroupLeader;
- (bool)isGroupable;
- (bool)isLocalDevice;
- (bool)isPickedOnPairedDevice;
- (bool)isProxyGroupPlayer;
- (bool)isRemoteControllable;
- (bool)isVolumeControlAvailable;
- (id)logicalDeviceID;
- (id)modelID;
- (id)modelSpecificInfo;
- (id)name;
- (id)playingPairedDeviceName;
- (bool)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (bool)requiresAuthorization;
- (void)setAVOutputDevice:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setSourceInfo:(id)arg1;
- (void)setVolume:(float)arg1;
- (id)sourceInfo;
- (bool)supportsBufferedAirPlay;
- (bool)supportsExternalScreen;
- (id)uid;
- (float)volume;

@end
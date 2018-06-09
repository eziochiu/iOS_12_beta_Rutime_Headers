/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRoute : NSObject <NSSecureCoding> {
    NSArray * _auxiliaryDevices;
    NSDictionary * _avRouteDescription;
    MPAVBatteryLevel * _batteryLevel;
    bool  _canAccessRemoteAssets;
    bool  _canFetchMediaDataFromSender;
    bool  _canPlayEncryptedProgressiveDownloadAssets;
    bool  _carplayRoute;
    MPAVRouteConnection * _connection;
    long long  _displayRouteType;
    void * _externalDevice;
    NSString * _groupUID;
    bool  _homePodRoute;
    long long  _pickableRouteType;
    bool  _picked;
    bool  _pickedOnPairedDevice;
    bool  _playingOnPairedDevice;
    NSString * _playingPairedDeviceName;
    bool  _presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
    NSString * _productIdentifier;
    bool  _requiresPassword;
    NSString * _routeName;
    long long  _routeSubtype;
    long long  _routeType;
    NSString * _routeUID;
    MPAVRoute * _wirelessDisplayRoute;
}

@property (getter=isAirPlayingToDevice, nonatomic, readonly) bool airPlayingToDevice;
@property (getter=isAirpodsRoute, nonatomic, readonly) bool airpodsRoute;
@property (getter=isAppleTVRoute, nonatomic, readonly) bool appleTVRoute;
@property (nonatomic, readonly) NSArray *auxiliaryDevices;
@property (nonatomic, readonly) NSDictionary *avRouteDescription;
@property (getter=isB238Route, nonatomic, readonly) bool b238Route;
@property (nonatomic, readonly) MPAVBatteryLevel *batteryLevel;
@property (getter=isBeatsSoloRoute, nonatomic, readonly) bool beatsSoloRoute;
@property (getter=isBeatsStudioRoute, nonatomic, readonly) bool beatsStudioRoute;
@property (getter=isBeatsXRoute, nonatomic, readonly) bool beatsXRoute;
@property (nonatomic, readonly) bool canAccessRemoteAssets;
@property (nonatomic, readonly) bool canFetchMediaDataFromSender;
@property (nonatomic, readonly) bool canPlayEncryptedProgressiveDownloadAssets;
@property (getter=isCarplayRoute, nonatomic, readonly) bool carplayRoute;
@property (nonatomic, readonly) MPAVRouteConnection *connection;
@property (nonatomic, readonly) NSString *designatedGroupLeaderName;
@property (getter=isDeviceSpeakerRoute, nonatomic, readonly) bool deviceSpeakerRoute;
@property (getter=isDisplayedAsPicked, nonatomic, readonly) bool displayAsPicked;
@property (nonatomic) long long displayRouteType;
@property (getter=_externalDevice, nonatomic, readonly) void*externalDevice;
@property (nonatomic, readonly) NSString *groupUID;
@property (getter=isHomePodRoute, nonatomic, readonly) bool homePodRoute;
@property (nonatomic, readonly) bool isDeviceRoute;
@property (nonatomic, readonly) long long passwordType;
@property (nonatomic, readonly) long long pickableRouteType;
@property (getter=isPicked, nonatomic) bool picked;
@property (getter=isPickedOnPairedDevice, nonatomic, readonly) bool pickedOnPairedDevice;
@property (getter=isPlayingOnPairedDevice, nonatomic, readonly) bool playingOnPairedDevice;
@property (nonatomic, readonly) NSString *playingPairedDeviceName;
@property (getter=isPowerbeatsRoute, nonatomic, readonly) bool powerbeatsRoute;
@property (nonatomic, readonly) bool presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
@property (nonatomic, readonly) NSString *productIdentifier;
@property (getter=isProxyGroupPlayer, nonatomic, readonly) bool proxyGroupPlayer;
@property (nonatomic, readonly) bool requiresPassword;
@property (nonatomic, copy) NSString *routeName;
@property (nonatomic, readonly) NSArray *routeNames;
@property (nonatomic, readonly) long long routeSubtype;
@property (nonatomic, readonly) long long routeType;
@property (nonatomic, readonly) NSString *routeUID;
@property (getter=isRoutingToWirelessDevice, nonatomic, readonly) bool routingToWirelessDevice;
@property (getter=isSmartAudio, nonatomic, readonly) bool smartAudio;
@property (getter=isStereoPair, nonatomic, readonly) bool stereoPair;
@property (nonatomic, readonly) bool supportsGrouping;
@property (nonatomic, readonly) bool supportsRemoteControl;
@property (nonatomic, readonly) bool supportsWirelessDisplay;
@property (getter=isVolumeControlAvailable, nonatomic, readonly) bool volumeControlAvailable;
@property (getter=isW1Route, nonatomic, readonly) bool w1Route;
@property (nonatomic, retain) MPAVRoute *wirelessDisplayRoute;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void*)_externalDevice;
- (id)auxiliaryDevices;
- (id)avRouteDescription;
- (id)batteryLevel;
- (bool)canAccessRemoteAssets;
- (bool)canFetchMediaDataFromSender;
- (bool)canPlayEncryptedProgressiveDownloadAssets;
- (id)connection;
- (id)debugDescription;
- (id)description;
- (id)designatedGroupLeaderName;
- (long long)displayRouteType;
- (void)encodeWithCoder:(id)arg1;
- (id)groupUID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isAirPlayingToDevice;
- (bool)isAirpodsRoute;
- (bool)isAppleTVRoute;
- (bool)isB238Route;
- (bool)isBeatsSoloRoute;
- (bool)isBeatsStudioRoute;
- (bool)isBeatsXRoute;
- (bool)isCarplayRoute;
- (bool)isDeviceRoute;
- (bool)isDeviceSpeakerRoute;
- (bool)isDisplayedAsPicked;
- (bool)isEqual:(id)arg1;
- (bool)isHomePodRoute;
- (bool)isPicked;
- (bool)isPickedOnPairedDevice;
- (bool)isPlayingOnPairedDevice;
- (bool)isPowerbeatsRoute;
- (bool)isProxyGroupPlayer;
- (bool)isRoutingToWirelessDevice;
- (bool)isSmartAudio;
- (bool)isStereoPair;
- (bool)isVolumeControlAvailable;
- (bool)isW1Route;
- (long long)passwordType;
- (long long)pickableRouteType;
- (id)playingPairedDeviceName;
- (bool)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (id)productIdentifier;
- (bool)requiresPassword;
- (id)routeName;
- (id)routeNames;
- (long long)routeSubtype;
- (long long)routeType;
- (id)routeUID;
- (void)setAVRouteDescription:(id)arg1;
- (void)setDisplayRouteType:(long long)arg1;
- (void)setPicked:(bool)arg1;
- (void)setRouteName:(id)arg1;
- (void)setWirelessDisplayRoute:(id)arg1;
- (bool)supportsGrouping;
- (bool)supportsRemoteControl;
- (bool)supportsWirelessDisplay;
- (id)wirelessDisplayRoute;

// Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos

- (long long)rc_audioRouteType;
- (bool)rc_shouldExpectFaceContact;

@end

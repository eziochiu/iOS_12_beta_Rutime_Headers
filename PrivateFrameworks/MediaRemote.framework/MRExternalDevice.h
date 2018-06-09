/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRExternalDevice : NSObject {
    unsigned int  _connectionState;
    bool  _usingSystemPairing;
    bool  _valid;
}

@property (nonatomic, readonly) unsigned int connectionState;
@property (nonatomic, readonly) _MROriginProtobuf *customOrigin;
@property (nonatomic, readonly) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property (nonatomic, readonly) NSString *hostName;
@property (nonatomic, readonly) NSString *name;
@property (getter=isPaired, nonatomic, readonly) bool paired;
@property (nonatomic, readonly) long long port;
@property (nonatomic, readonly) MRSupportedProtocolMessages *supportedMessages;
@property (getter=isUsingSystemPairing, nonatomic) bool usingSystemPairing;
@property (getter=isValid, nonatomic, readonly) bool valid;
@property (nonatomic) bool wantsNowPlayingArtworkNotifications;
@property (nonatomic) bool wantsNowPlayingNotifications;
@property (nonatomic) bool wantsOutputDeviceNotifications;
@property (nonatomic) bool wantsVolumeNotifications;

- (id)_init;
- (void)connectWithOptions:(unsigned int)arg1;
- (unsigned int)connectionState;
- (id)currentClientUpdatesConfigMessage;
- (id)customOrigin;
- (id)deviceInfo;
- (void)disconnect:(id)arg1;
- (id)errorForCurrentState;
- (id)hostName;
- (bool)isPaired;
- (bool)isUsingSystemPairing;
- (bool)isValid;
- (void)modifyOutputContextOfType:(unsigned int)arg1 addingDeviceUIDs:(id)arg2 removingDeviceUIDs:(id)arg3 settingDeviceUIDs:(id)arg4 withReplyQueue:(id)arg5 completion:(id /* block */)arg6;
- (id)name;
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)outputDeviceVolumeControlCapabilities:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)ping:(double)arg1 callback:(id /* block */)arg2 withQueue:(id)arg3;
- (long long)port;
- (void)sendClientUpdatesConfigMessage;
- (void)sendCustomData:(id)arg1 withName:(id)arg2;
- (void)setConnectionStateCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setCustomDataCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setNameCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setOutputDeviceVolume:(float)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)setPairingAllowedCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setPairingCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setUsingSystemPairing:(bool)arg1;
- (void)setVolumeCallback:(id /* block */)arg1 withQueue:(id)arg2;
- (void)setWantsNowPlayingArtworkNotifications:(bool)arg1;
- (void)setWantsNowPlayingNotifications:(bool)arg1;
- (void)setWantsOutputDeviceNotifications:(bool)arg1;
- (void)setWantsVolumeNotifications:(bool)arg1;
- (id)supportedMessages;
- (void)unpair;
- (bool)wantsNowPlayingArtworkNotifications;
- (bool)wantsNowPlayingNotifications;
- (bool)wantsOutputDeviceNotifications;
- (bool)wantsVolumeNotifications;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRExternalClientConnection : MRProtocolClientConnection {
    bool  _cryptoEnabled;
    MRCryptoPairingSession * _cryptoSession;
    bool  _registeredKeyboardUpdates;
    bool  _registeredToNowPlayingUpdates;
    bool  _registeredToOutputDeviceUpdates;
    bool  _registeredToVolumeUpdates;
    unsigned int  _voiceRecordingState;
}

@property (nonatomic) bool cryptoEnabled;
@property (nonatomic, retain) MRCryptoPairingSession *cryptoSession;
@property (nonatomic) bool registeredKeyboardUpdates;
@property (nonatomic) bool registeredToNowPlayingUpdates;
@property (nonatomic) bool registeredToOutputDeviceUpdates;
@property (nonatomic) bool registeredToVolumeUpdates;
@property (nonatomic) unsigned int voiceRecordingState;

- (void).cxx_destruct;
- (bool)cryptoEnabled;
- (id)cryptoSession;
- (id)decryptData:(id)arg1 error:(id*)arg2;
- (id)encryptDataForMessage:(id)arg1;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2 runLoop:(id)arg3;
- (bool)registeredKeyboardUpdates;
- (bool)registeredToNowPlayingUpdates;
- (bool)registeredToOutputDeviceUpdates;
- (bool)registeredToVolumeUpdates;
- (void)setCryptoEnabled:(bool)arg1;
- (void)setCryptoSession:(id)arg1;
- (void)setRegisteredKeyboardUpdates:(bool)arg1;
- (void)setRegisteredToNowPlayingUpdates:(bool)arg1;
- (void)setRegisteredToOutputDeviceUpdates:(bool)arg1;
- (void)setRegisteredToVolumeUpdates:(bool)arg1;
- (void)setVoiceRecordingState:(unsigned int)arg1;
- (unsigned int)voiceRecordingState;

@end

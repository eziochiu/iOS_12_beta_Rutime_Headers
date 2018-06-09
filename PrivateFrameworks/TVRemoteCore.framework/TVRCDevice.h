/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface TVRCDevice : NSObject {
    <TVRCDeviceDelegate> * _delegate;
    _TVRCDeviceState * _deviceState;
    NSString * _identifier;
    TVRCKeyboardController * _keyboardController;
    NSString * _name;
    TVRCVoiceRecorder * _voiceRecorder;
}

@property (nonatomic, readonly) long long connectionState;
@property (nonatomic) <TVRCDeviceDelegate> *delegate;
@property (nonatomic, retain) _TVRCDeviceState *deviceState;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) TVRCKeyboardController *keyboardController;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long pairingCapability;
@property (nonatomic, readonly, copy) NSSet *supportedButtons;
@property (nonatomic, readonly) long long touchProcessorKind;
@property (nonatomic, retain) TVRCVoiceRecorder *voiceRecorder;

- (void).cxx_destruct;
- (void)_deviceEncounteredAuthChallengeType:(long long)arg1 codeToEnterOnDevice:(id)arg2;
- (void)_deviceUpdatedState:(id)arg1;
- (void)_disconnectDeviceDueToConnectionInterruption;
- (void)_sendRTIDataPayload:(id)arg1;
- (void)connect;
- (long long)connectionState;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)deviceState;
- (void)disconnect;
- (id)identifier;
- (id)initWithDeviceIdentifier:(id)arg1;
- (bool)isInEditingSession;
- (id)keyboardController;
- (id)name;
- (unsigned long long)pairingCapability;
- (void)sendButtonEvent:(id)arg1;
- (void)sendGameControllerEvent:(id)arg1;
- (void)sendTouchEvent:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceState:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKeyboardController:(id)arg1;
- (void)setName:(id)arg1;
- (void)setVoiceRecorder:(id)arg1;
- (id)supportedButtons;
- (long long)touchProcessorKind;
- (id)voiceRecorder;

@end

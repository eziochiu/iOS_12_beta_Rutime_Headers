/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRXDevice : NSObject {
    long long  _connectionState;
    <_TVRXDeviceDelegate> * _delegate;
    NSString * _identifier;
    <_TVRCDeviceImpl> * _impl;
    NSString * _name;
    NSSet * _supportedButtons;
}

@property (nonatomic, readonly) long long connectionState;
@property (nonatomic) <_TVRXDeviceDelegate> *delegate;
@property (nonatomic, readonly) _TVRXDeviceDescriptor *descriptor;
@property (nonatomic, copy) NSString *identifier;
@property (getter=_impl, setter=_setImpl:, nonatomic, retain) <_TVRCDeviceImpl> *impl;
@property (nonatomic, readonly) _TVRXKeyboardController *keyboardController;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long pairingCapability;
@property (nonatomic, copy) NSSet *supportedButtons;
@property (nonatomic, readonly) _TVRXVoiceRecorder *voiceRecorder;

- (void).cxx_destruct;
- (void)_applyButtonEventSideEffects:(id)arg1;
- (bool)_authenticationIsSupported;
- (void)_connectionAttemptSucceeded;
- (void)_disconnected:(long long)arg1 error:(id)arg2;
- (void)_encounteredAuthenticationChallenge:(id)arg1;
- (id)_impl;
- (id)_init;
- (void)_setDeviceName:(id)arg1;
- (void)_setImpl:(id)arg1;
- (void)_setSupportedButtons:(id)arg1;
- (void)connect;
- (long long)connectionState;
- (id)delegate;
- (id)description;
- (id)descriptor;
- (void)disconnect;
- (id)identifier;
- (id)keyboardController;
- (id)name;
- (unsigned long long)pairingCapability;
- (void)sendButtonEvent:(id)arg1;
- (void)sendGameControllerEvent:(id)arg1;
- (void)sendTouchEvent:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSupportedButtons:(id)arg1;
- (id)supportedButtons;
- (id)voiceRecorder;

@end

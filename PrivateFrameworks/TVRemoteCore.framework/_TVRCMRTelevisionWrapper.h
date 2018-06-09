/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRCMRTelevisionWrapper : NSObject {
    void * _television;
}

@property (nonatomic, readonly, copy) _TVRCMROriginWrapper *customOrigin;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) bool isPairingAllowed;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *softwareVersion;
@property (nonatomic, readonly) unsigned int voiceRecordingState;

+ (void)deletePairedDevice:(id)arg1;
+ (id)wrapperWithTelevision:(void*)arg1;

- (void)clearText;
- (void)connect;
- (id)customOrigin;
- (void)dealloc;
- (void)deleteBackward;
- (id)description;
- (void)disconnect;
- (void)getCurrentRTISourceSession:(id /* block */)arg1;
- (void)getTextEditingSession:(id /* block */)arg1;
- (id)identifier;
- (id)initWithTelevision:(void*)arg1;
- (void)insertText:(id)arg1;
- (bool)isPairingAllowed;
- (id)name;
- (void)registerGameControllerDevice:(id /* block */)arg1;
- (void)registerVirtualTouchDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)registerVirtualVoiceInputDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)sendAudioData:(id)arg1 withDeviceID:(unsigned int)arg2;
- (void)sendButtonEvent:(struct _MRHIDButtonEvent { unsigned int x1; unsigned int x2; bool x3; })arg1;
- (void)sendGameControllerButtonEventWithButton:(unsigned long long)arg1 isDown:(bool)arg2 controllerID:(unsigned long long)arg3;
- (void)sendGameControllerDigitizerEvent:(id)arg1 withControllerID:(unsigned long long)arg2;
- (void)sendTouchEvent:(struct _MRHIDTouchEvent { union _MRHIDPoint { struct { float x_1_2_1; float x_1_2_2; } x_1_1_1; float x_1_1_2[2]; } x1; unsigned int x2; unsigned long long x3; unsigned int x4; })arg1 withDeviceID:(unsigned long long)arg2;
- (void)setConnectionStateHandler:(id /* block */)arg1;
- (void)setGameControllerInputModeHandler:(id /* block */)arg1;
- (void)setNameChangedHandler:(id /* block */)arg1;
- (void)setPairingHandler:(id /* block */)arg1;
- (void)setRTISessionHandler:(id /* block */)arg1;
- (void)setText:(id)arg1;
- (void)setTextEditingHandler:(id /* block */)arg1;
- (void)setVoiceRecordingStateHandler:(id /* block */)arg1;
- (void)setWantsNowPlayingUpdates:(bool)arg1;
- (void)setWantsVolumeControlAvailabilityUpdates:(bool)arg1;
- (id)softwareVersion;
- (void)unregisterGameControllerDevice:(unsigned long long)arg1;
- (unsigned int)voiceRecordingState;

@end

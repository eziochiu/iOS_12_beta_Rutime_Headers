/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCameraAudioManager : NSObject {
    HMCameraProfile * _cameraProfile;
    HMCameraStream * _cameraStream;
    HFCharacteristicValueManager * _valueManager;
}

@property (nonatomic, retain) HMCameraProfile *cameraProfile;
@property (nonatomic, retain) HMCameraStream *cameraStream;
@property (getter=isIncomingAudioEnabled, nonatomic, readonly) bool incomingAudioEnabled;
@property (getter=isOutgoingAudioEnabled, nonatomic, readonly) bool outgoingAudioEnabled;
@property (nonatomic, retain) HFCharacteristicValueManager *valueManager;

- (void).cxx_destruct;
- (id)_enableAudioIfNecessaryForAudioControl:(id)arg1 minVolume:(float)arg2;
- (id)_readValuesForCharacteristics:(id)arg1;
- (id)_updateAudioStreamSetting:(unsigned long long)arg1;
- (id)_writeValuesForCharacteristics:(id)arg1;
- (unsigned long long)audioStreamSetting;
- (id)cameraProfile;
- (id)cameraStream;
- (id)enableRemoteMicrophoneIfNecessary;
- (id)enableRemoteSpeakerIfNecessary;
- (id)initWithCameraProfile:(id)arg1 cameraStream:(id)arg2 valueManager:(id)arg3;
- (bool)isIncomingAudioEnabled;
- (bool)isOutgoingAudioEnabled;
- (void)setCameraProfile:(id)arg1;
- (void)setCameraStream:(id)arg1;
- (id)setIncomingAudioEnabled:(bool)arg1;
- (id)setOutgoingAudioEnabled:(bool)arg1;
- (void)setValueManager:(id)arg1;
- (id)valueManager;

@end

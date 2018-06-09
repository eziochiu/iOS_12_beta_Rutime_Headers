/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface _HMCameraAudioControl : _HMCameraControl {
    HMCharacteristic * _mute;
    HMCharacteristic * _volume;
}

@property (nonatomic, readonly) HMCharacteristic *mute;
@property (nonatomic, readonly) HMCharacteristic *volume;

- (void).cxx_destruct;
- (id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3;
- (id)mute;
- (id)volume;

@end

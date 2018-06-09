/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface MGWrapper : NSObject

+ (id)sharedMGWrapper;

- (bool)MGIsDeviceOneOfType:(long long)arg1;
- (bool)MGIsDeviceOneOfTypes:(id)arg1;
- (id)deviceClass;
- (id)deviceClassiPad;
- (id)deviceClassiPhone;
- (long long)getSimulatorDevice;
- (bool)isDeviceIPad;
- (bool)isHeySiriAlwaysOn;
- (bool)isRunningOnSimulator;
- (bool)supportsEducationalVideos;
- (bool)supportsSideButtonActivation;

@end

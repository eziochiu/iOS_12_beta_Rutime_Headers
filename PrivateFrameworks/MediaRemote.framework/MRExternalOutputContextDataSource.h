/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRExternalOutputContextDataSource : MROutputContextDataSource {
    float  _masterVolume;
    unsigned int  _masterVolumeControlCapabilities;
    NSMutableArray * _outputDevices;
    NSString * _uniqueIdentifier;
}

- (void).cxx_destruct;
- (float)_calculateMasterVolume;
- (unsigned int)_calculateMasterVolumeCapabilities;
- (void)_reevaluateMasterVolume;
- (void)_reevaluateMasterVolumeControlCapabilities;
- (id)initWithUniqueIdentifier:(id)arg1;
- (id)outputDevices;
- (void)removeAllOutputDevices;
- (void)removeOutputDevices:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateOutputDevices:(id)arg1;
- (void)updateVolume:(float)arg1 outputDeviceUID:(id)arg2;
- (void)updateVolumeControlCapabilities:(unsigned int)arg1 outputDeviceUID:(id)arg2;
- (float)volume;
- (unsigned int)volumeControlCapabilities;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MROutputContextController : MROutputContextDataSource {
    float  _localVolume;
    unsigned int  _localVolumeControlCapabilities;
    bool  _localVolumeControlCapabilitiesInitialized;
    bool  _localVolumeInitialized;
    float  _masterVolume;
    unsigned int  _masterVolumeControlCapabilities;
    MRAVOutputContext * _outputContext;
    NSMutableDictionary * _outputDeviceVolume;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, readonly) NSString *localDeviceUID;
@property (nonatomic) float localVolume;
@property (nonatomic) unsigned int localVolumeControlCapabilities;

- (void).cxx_destruct;
- (void)_handleLocalDeviceVolumeControlCapabilitiesDidChangeNotification:(id)arg1;
- (void)_handleLocalDeviceVolumeDidChangeNotification:(id)arg1;
- (void)_handleOutputDeviceAddedNotification:(id)arg1;
- (void)_handleOutputDeviceRemovedNotification:(id)arg1;
- (void)_handleOutputDeviceVolumeControlCapabilitiesDidChangeNotification:(id)arg1;
- (void)_handleOutputDeviceVolumeDidChangeNotification:(id)arg1;
- (void)_inititalizeVolume;
- (float)_onSerialQueue_calculateMasterVolume;
- (unsigned int)_onSerialQueue_calculateMasterVolumeCapabilities;
- (bool)_onSerialQueue_isLocalOutputDevice:(id)arg1;
- (id)_onSerialQueue_localOutputDevice;
- (void)_onSerialQueue_reevaluateMasterVolume;
- (void)_onSerialQueue_reevaluateMasterVolumeControlCapabilities;
- (void)_registerNotifications;
- (void)dealloc;
- (id)description;
- (id)initWithOutputContext:(id)arg1;
- (id)localDeviceUID;
- (float)localVolume;
- (unsigned int)localVolumeControlCapabilities;
- (id)outputDevices;
- (void)setLocalVolume:(float)arg1;
- (void)setLocalVolumeControlCapabilities:(unsigned int)arg1;
- (id)setVolume:(float)arg1 outputDeviceUID:(id)arg2;
- (id)uniqueIdentifier;
- (float)volume;
- (unsigned int)volumeControlCapabilities;
- (unsigned int)volumeControlCapabilitiesForOutputDeviceUID:(id)arg1;
- (float)volumeForOutputDeviceUID:(id)arg1;

@end

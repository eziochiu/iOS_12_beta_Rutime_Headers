/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MROutputContextDataSource : NSObject {
    <MROutputContextDataSourceDelegate> * _delegate;
    NSArray * _outputDevices;
    NSString * _uniqueIdentifier;
    float  _volume;
    unsigned int  _volumeControlCapabilities;
}

@property (nonatomic) <MROutputContextDataSourceDelegate> *delegate;
@property (nonatomic, readonly) bool isAirPlaying;
@property (nonatomic, readonly) NSArray *outputDevices;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) float volume;
@property (nonatomic, readonly) unsigned int volumeControlCapabilities;

- (void).cxx_destruct;
- (id)delegate;
- (id)description;
- (bool)isAirPlaying;
- (void)notifyOutputDeviceAdded:(id)arg1;
- (void)notifyOutputDeviceRemoved:(id)arg1;
- (void)notifyVolumeCapabilitiesDidChange:(unsigned int)arg1 outputDevice:(id)arg2;
- (void)notifyVolumeDidChange:(float)arg1 outputDevice:(id)arg2;
- (id)outputDeviceForUID:(id)arg1;
- (id)outputDevices;
- (void)setDelegate:(id)arg1;
- (id)uniqueIdentifier;
- (float)volume;
- (unsigned int)volumeControlCapabilities;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRSetVolumeMessage : MRProtocolMessage

@property (nonatomic, readonly) NSString *outputDeviceUID;
@property (nonatomic, readonly) float volume;

- (id)initWithVolume:(float)arg1;
- (id)initWithVolume:(float)arg1 outputDeviceUID:(id)arg2;
- (id)outputDeviceUID;
- (unsigned long long)type;
- (float)volume;

@end

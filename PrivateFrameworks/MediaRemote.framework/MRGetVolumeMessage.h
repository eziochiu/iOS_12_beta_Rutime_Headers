/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRGetVolumeMessage : MRProtocolMessage

@property (nonatomic, readonly) NSString *outputDeviceUID;

- (id)init;
- (id)initWithOutputDeviceUID:(id)arg1;
- (id)outputDeviceUID;
- (unsigned long long)type;

@end

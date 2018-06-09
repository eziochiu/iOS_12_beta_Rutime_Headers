/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRRemoveOutputDevicesMessage : MRProtocolMessage

@property (nonatomic, readonly) NSArray *outputDeviceUIDs;

- (id)initWithOutputDeviceUIDs:(id)arg1;
- (id)outputDeviceUIDs;
- (unsigned long long)type;

@end

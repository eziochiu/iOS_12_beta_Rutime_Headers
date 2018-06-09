/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRRegisterHIDDeviceMessage : MRProtocolMessage {
    MRVirtualTouchDeviceDescriptor * _deviceDescriptor;
}

@property (nonatomic, readonly, copy) MRVirtualTouchDeviceDescriptor *deviceDescriptor;

- (void).cxx_destruct;
- (id)deviceDescriptor;
- (id)initWithDeviceDescriptor:(id)arg1;
- (unsigned long long)type;

@end
/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRUpdateOutputDevicesMessage : MRProtocolMessage {
    NSArray * _outputDevices;
}

@property (nonatomic, readonly) NSArray *outputDevices;

- (void).cxx_destruct;
- (id)initWithOutputDevices:(id)arg1;
- (id)outputDevices;
- (unsigned long long)type;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVOutputContextTransport : MRExternalDeviceTransport {
    AVOutputDevice * _avOutputDevice;
    _MRDeviceInfoMessageProtobuf * _deviceInfo;
    NSError * _error;
    MRAVInputStream * _inputStream;
    AVOutputContext * _outputContext;
    MRAVOutputDevice * _outputDevice;
    MRAVOutputStream * _outputStream;
    NSObject<OS_dispatch_queue> * _serialQueue;
    unsigned long long  _state;
    bool  _useSystemAuthenticationPrompt;
}

@property (nonatomic, readonly) AVOutputDevice *avOutputDevice;
@property (nonatomic, readonly) MRAVOutputDevice *outputDevice;

- (void).cxx_destruct;
- (void)_destroyRemoteControlContext;
- (id)_onQueue_createRemoteControlContextWithID:(id)arg1;
- (void)_onQueue_initializeOutputContext;
- (void)_onQueue_resetStreams;
- (void)_outputContextDevicesDidChangeNotification:(id)arg1;
- (void)_registerNotificationsForOutputContext:(id)arg1;
- (void)_unregisterNotificationsForOutputContext:(id)arg1;
- (id)avOutputDevice;
- (void)dealloc;
- (id)description;
- (id)deviceInfo;
- (id)error;
- (bool)getInputStream:(id*)arg1 outputStream:(id*)arg2;
- (id)hostname;
- (id)initWithOutputDevice:(id)arg1 avOutputDevice:(id)arg2 connectionType:(long long)arg3;
- (id)name;
- (id)outputDevice;
- (long long)port;
- (bool)requiresCustomPairing;
- (void)reset;
- (void)setShouldUseSystemAuthenticationPrompt:(bool)arg1;
- (bool)shouldUseSystemAuthenticationPrompt;
- (id)uid;

@end

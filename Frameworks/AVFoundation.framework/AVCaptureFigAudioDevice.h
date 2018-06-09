/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureFigAudioDevice : AVCaptureDevice {
    NSDictionary * _attributes;
    struct OpaqueFigCaptureSource { } * _fcs;
    NSObject<OS_dispatch_queue> * _fcsQueue;
    bool  _isConnected;
    bool  _levelMeteringEnabled;
    NSString * _localizedName;
    NSObject<OS_dispatch_semaphore> * _serverConnectionDiedSemaphore;
    AVWeakReference * _weakReference;
}

+ (id)_devices;
+ (void)_reconnectDevices:(id)arg1;
+ (void)initialize;

- (id)_copyFigCaptureSourceProperty:(struct __CFString { }*)arg1;
- (void)_handleNotification:(struct __CFString { }*)arg1 payload:(id)arg2;
- (id)_initWithFigCaptureSource:(struct OpaqueFigCaptureSource { }*)arg1;
- (void)_reconnectToFigCaptureSource:(struct OpaqueFigCaptureSource { }*)arg1;
- (void)_setFigCaptureSource:(struct OpaqueFigCaptureSource { }*)arg1;
- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id)arg1;
- (void)audioInputDevicesDidChangeHandler:(id)arg1;
- (void)dealloc;
- (struct OpaqueCMClock { }*)deviceClock;
- (id)deviceType;
- (struct OpaqueFigCaptureSource { }*)figCaptureSource;
- (id)figCaptureSourceAudioSettingsForSessionPreset:(id)arg1;
- (bool)hasMediaType:(id)arg1;
- (id)init;
- (bool)isConnected;
- (bool)isInUseByAnotherApplication;
- (id)localizedName;
- (id)modelID;
- (bool)startUsingDevice:(id*)arg1;
- (void)stopUsingDevice;
- (bool)supportsAVCaptureSessionPreset:(id)arg1;
- (id)uniqueID;

@end

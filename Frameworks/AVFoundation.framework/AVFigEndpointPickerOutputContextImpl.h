/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigEndpointPickerOutputContextImpl : NSObject <AVOutputContextImpl> {
    struct __CFString { } * _contextUUID;
    struct OpaqueFigEndpointPicker { } * _endpointPicker;
    unsigned long long  _featureForCurrentPicker;
    bool  _isSystemPicker;
    AVOutputContext * _parentContext;
    NSObject<OS_dispatch_queue> * _pickerQueue;
    AVWeakReference * _weakReference;
}

@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly, copy) NSString *associatedAudioDeviceID;
@property (readonly) bool canSetVolume;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVOutputContextCommunicationChannel *outgoingCommunicationChannel;
@property (nonatomic, readonly) NSString *outputContextType;
@property (nonatomic, readonly) AVOutputDevice *outputDevice;
@property (readonly) NSArray *outputDevices;
@property AVOutputContext *parentOutputContext;
@property (readonly) bool providesControlForAllVolumeFeatures;
@property (readonly) Class superclass;
@property (readonly) bool supportsMultipleOutputDevices;
@property (readonly) float volume;

+ (id)auxiliaryOutputContext;
+ (struct OpaqueFigEndpointPicker { }*)copySystemVideoPicker;
+ (id)iTunesAudioContext;
+ (void)initialize;
+ (bool)outputContextExistsWithRemoteOutputDevice;
+ (id)outputContextImplForControllingOutputDeviceGroupWithID:(id)arg1 options:(id)arg2;
+ (id)outputContextImplForID:(id)arg1;
+ (id)platformDependentScreenOrVideoContext;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (id)sharedAudioPresentationOutputContext;
+ (id)sharedSystemAudioContext;
+ (id)sharedSystemScreenContext;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ID;
- (void)_addFigEndpointPickerNotifications;
- (int)_configureFigEndpointPickerWithFeature:(unsigned long long)arg1 options:(id)arg2;
- (void)_handlePickerServerConnectionDiedNotification;
- (void)_removeFigEndpointPickerNotifications;
- (void)addOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)associatedAudioDeviceID;
- (bool)canSetVolume;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)endpointPickerUUID;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextUUID:(id)arg1;
- (id)initWithFeature:(unsigned long long)arg1 options:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)muteAllOutputDevicesWithCompletionHandler:(id /* block */)arg1;
- (id)openCommunicationChannelWithOptions:(id)arg1 error:(id*)arg2;
- (id)outgoingCommunicationChannel;
- (void)outputContextDidChangeApplicationProcessID:(id)arg1;
- (id)outputContextType;
- (id)outputDevice;
- (id)outputDevices;
- (id)parentOutputContext;
- (void)pausePlaybackOnAllOutputDevicesWithCompletionHandler:(id /* block */)arg1;
- (bool)providesControlForAllVolumeFeatures;
- (void)removeOutputDevice:(id)arg1;
- (void)setOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setOutputDevices:(id)arg1;
- (void)setParentOutputContext:(id)arg1;
- (void)setVolume:(float)arg1;
- (bool)supportsMultipleOutputDevices;
- (float)volume;

@end

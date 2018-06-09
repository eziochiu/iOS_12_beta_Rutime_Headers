/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOutputContext : NSObject <NSSecureCoding> {
    AVOutputContextInternal * _outputContext;
}

@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) struct OpaqueFigRoutingContext { }*figRoutingContext;

+ (id)allOutputContextImplClasses;
+ (id)auxiliaryOutputContext;
+ (id /* block */)commChannelUUIDCommunicationChannelManagerCreator;
+ (id)currentRoutingContextFactory;
+ (id /* block */)defaultCommunicationChannelManagerCreator;
+ (Class)defaultOutputContextImplClass;
+ (id)iTunesAudioContext;
+ (void)initialize;
+ (id)outputContext;
+ (bool)outputContextExistsWithRemoteOutputDevice;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)arg1;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)arg1 options:(id)arg2;
+ (id)outputContextForID:(id)arg1;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)arg1;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)arg1 communicationChannelManagerCreator:(id /* block */)arg2;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)arg1 outputDeviceTranslator:(id)arg2;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)arg1 volumeController:(struct OpaqueFigVolumeControllerState { }*)arg2;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (void)resetRoutingContextFactoryForQueue:(id)arg1;
+ (void)setRoutingContextFactory:(id)arg1 forQueue:(id)arg2;
+ (id)sharedAudioPresentationOutputContext;
+ (id)sharedSystemAudioContext;
+ (id)sharedSystemScreenContext;
+ (bool)supportsSecureCoding;

- (id)ID;
- (void)addOutputDevice:(id)arg1;
- (void)addOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (int)applicationProcessID;
- (id)associatedAudioDeviceID;
- (bool)canSetVolume;
- (id)communicationChannelDelegate;
- (id)contextID;
- (void)dealloc;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (struct OpaqueFigRoutingContext { }*)figRoutingContext;
- (unsigned long long)hash;
- (id)impl;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOutputContextImpl:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)muteAllOutputDevicesWithCompletionHandler:(id /* block */)arg1;
- (id)openCommunicationChannelWithOptions:(id)arg1 error:(id*)arg2;
- (id)outgoingCommunicationChannel;
- (void)outputContextImpl:(id)arg1 didCloseCommunicationChannel:(id)arg2;
- (void)outputContextImpl:(id)arg1 didExpireWithReplacement:(id)arg2;
- (void)outputContextImpl:(id)arg1 didInitiateDestinationChange:(id)arg2;
- (void)outputContextImpl:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3;
- (void)outputContextImplDidChangeCanSetVolume:(id)arg1;
- (void)outputContextImplDidChangeGlobalOutputDeviceConfiguration:(id)arg1;
- (void)outputContextImplDidChangeOutputDevice:(id)arg1;
- (void)outputContextImplDidChangeOutputDevices:(id)arg1;
- (void)outputContextImplDidChangeProvidesControlForAllVolumeFeatures:(id)arg1;
- (void)outputContextImplDidChangeVolume:(id)arg1;
- (void)outputContextImplOutgoingCommunicationChannelDidBecomeAvailable:(id)arg1;
- (id)outputContextType;
- (id)outputDevice;
- (unsigned long long)outputDeviceFeatures;
- (id)outputDevices;
- (void)pausePlaybackOnAllOutputDevicesWithCompletionHandler:(id /* block */)arg1;
- (bool)providesControlForAllVolumeFeatures;
- (void)removeOutputDevice:(id)arg1;
- (void)setApplicationProcessID:(int)arg1;
- (void)setCommunicationChannelDelegate:(id)arg1;
- (bool)setOutputDevice:(id)arg1 forFeatures:(unsigned long long)arg2;
- (void)setOutputDevice:(id)arg1 options:(id)arg2;
- (void)setOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setOutputDevices:(id)arg1;
- (void)setVolume:(float)arg1;
- (bool)supportsMultipleOutputDevices;
- (float)volume;

@end

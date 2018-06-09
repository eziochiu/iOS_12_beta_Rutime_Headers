/* made by EzioChiu.
 */

@protocol AVOutputContextImpl <NSObject, NSSecureCoding>

@required

+ (id)auxiliaryOutputContext;
+ (id)iTunesAudioContext;
+ (bool)outputContextExistsWithRemoteOutputDevice;
+ (id)outputContextImplForControllingOutputDeviceGroupWithID:(NSString *)arg1 options:(NSDictionary *)arg2;
+ (id)outputContextImplForID:(NSString *)arg1;
+ (id)platformDependentScreenOrVideoContext;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (id)sharedAudioPresentationOutputContext;
+ (id)sharedSystemAudioContext;
+ (id)sharedSystemScreenContext;

- (NSString *)ID;
- (void)addOutputDevice:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: AVOutputDevice *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AVOutputContextDestinationChange *, void*
- (NSString *)associatedAudioDeviceID;
- (bool)canSetVolume;
- (void)muteAllOutputDevicesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (AVOutputContextCommunicationChannel *)openCommunicationChannelWithOptions:(NSDictionary *)arg1 error:(id*)arg2;
- (AVOutputContextCommunicationChannel *)outgoingCommunicationChannel;
- (void)outputContextDidChangeApplicationProcessID:(AVOutputContext *)arg1;
- (NSString *)outputContextType;
- (AVOutputDevice *)outputDevice;
- (NSArray *)outputDevices;
- (AVOutputContext *)parentOutputContext;
- (void)pausePlaybackOnAllOutputDevicesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)providesControlForAllVolumeFeatures;
- (void)removeOutputDevice:(AVOutputDevice *)arg1;
- (void)setOutputDevice:(void *)arg1 options:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: AVOutputDevice *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AVOutputContextDestinationChange *, void*
- (void)setOutputDevices:(NSArray *)arg1;
- (void)setParentOutputContext:(AVOutputContext *)arg1;
- (void)setVolume:(float)arg1;
- (bool)supportsMultipleOutputDevices;
- (float)volume;

@end

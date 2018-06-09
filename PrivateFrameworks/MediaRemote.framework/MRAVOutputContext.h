/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVOutputContext : NSObject {
    bool  _attemptingLogicalDeviceRecovery;
    AVOutputContext * _avOutputContext;
    bool  _handleDiscoverySessionOutputDevicesChangedScheduled;
    bool  _handleOutputDeviceChangedScheduled;
    bool  _handleOutputDevicesChangedScheduled;
    bool  _isVolumeControlAvailable;
    MRAVOutputDeviceSourceInfo * _outputDeviceSourceInfo;
    NSArray * _outputDevices;
    NSMutableArray * _pendingModifications;
    bool  _postOutputDeviceChangedScheduled;
    bool  _postOutputDevicesChangedScheduled;
    NSObject<OS_dispatch_queue> * _serialQueue;
    unsigned int  _type;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) AVOutputContext *avOutputContext;
@property (nonatomic, copy) NSArray *outputDevices;
@property (nonatomic, readonly) bool supportsVolumeControl;
@property (nonatomic, readonly) unsigned int type;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic) float volume;
@property (getter=isVolumeControlAvailable, nonatomic, readonly) bool volumeControlAvailable;

+ (void)_initializeAVFNotificationForwarding;
+ (id)_notificationQueue;
+ (id)_sharedOutputContextFromType:(unsigned int)arg1;
+ (id)createOutputContextWithUniqueIdentifier:(id)arg1;
+ (id)sharedAudioPresentationContext;
+ (id)sharedSystemAudioContext;
+ (id)sharedSystemScreenContext;

- (void).cxx_destruct;
- (void)_clearAnyCompletedModifications;
- (void)_commitModification:(id)arg1;
- (bool)_contextSupportsMultipleDevices;
- (void)_handleDiscoverySessionOutputDevicesDidChangeNotification:(id)arg1;
- (void)_handleOutputDeviceCanSetVolumeDidChangeNotification:(id)arg1;
- (void)_handleOutputDeviceDidChangeNotification:(id)arg1;
- (void)_handleOutputDeviceSupportsVolumeDidChangeNotification:(id)arg1;
- (void)_handleOutputDeviceVolumeDidChangeNotification:(id)arg1;
- (void)_handleOutputDevicesDidChangeNotification:(id)arg1;
- (void)_outputContextChangeInitiatedNotification:(id)arg1;
- (id)_pendingModifications;
- (void)_registerNotifications;
- (void)_reloadOutputDevicesForInitialLoad:(bool)arg1;
- (void)_scheduleOutputContextDeviceDidChangeNotification;
- (void)_scheduleOutputContextDevicesDidChangeNotification;
- (void)_unregisterNotifications;
- (void)addOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(id /* block */)arg3;
- (void)attemptLogicalDeviceRecovery;
- (id)avOutputContext;
- (void)dealloc;
- (id)description;
- (id)initWithAVOutputContext:(id)arg1 type:(unsigned int)arg2;
- (bool)isVolumeControlAvailable;
- (id)localDevice;
- (id)outputDevices;
- (void)removeAllOutputDevicesWithCallbackQueue:(id)arg1 block:(id /* block */)arg2;
- (void)removeOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(id /* block */)arg3;
- (void)setOutputDevices:(id)arg1;
- (void)setOutputDevices:(id)arg1 withCallbackQueue:(id)arg2 block:(id /* block */)arg3;
- (void)setOutputDevices:(id)arg1 withPassword:(id)arg2 callbackQueue:(id)arg3 block:(id /* block */)arg4;
- (void)setVolume:(float)arg1;
- (bool)supportsVolumeControl;
- (unsigned int)type;
- (id)uniqueIdentifier;
- (float)volume;

@end

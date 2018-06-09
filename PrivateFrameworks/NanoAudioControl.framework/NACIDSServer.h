/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface NACIDSServer : NSObject <IDSServiceDelegate, MPAVRoutingControllerDelegate, MPVolumeControllerDelegate> {
    float  _hapticIntensity;
    long long  _hapticState;
    NACEventThrottler * _hapticThrottler;
    IDSService * _idsService;
    bool  _isSystemMuted;
    NSMutableDictionary * _messageRecords;
    bool  _prominentHapticEnabled;
    NSMutableDictionary * _proxyVolumeObservers;
    NACRunAssertion * _proxyVolumeRunAssertion;
    NSMutableDictionary * _routesObservers;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _shouldObserveHapticState;
    bool  _shouldObserveSystemMutedState;
    bool  _shouldPickRouteAfterFetching;
    int  _systemMuteToken;
    NSMutableDictionary * _systemVolumeObservers;
    NACRunAssertion * _systemVolumeRunAssertion;
    NSArray * _volumeAudioCategories;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginObservingHapticState;
- (void)_beginObservingProxyVolumeForTarget:(id)arg1 withEndpointRoute:(id)arg2;
- (void)_beginObservingSystemMutedState;
- (void)_beginObservingSystemVolume;
- (void)_cancelProxyVolumeObservationForTarget:(id)arg1;
- (void)_cancelRouteObservationForCategory:(id)arg1;
- (void)_cancelSystemVolumeObservation;
- (void)_handleBeginObservingAudioRoutes:(id)arg1;
- (void)_handleBeginObservingProxyVolumeForTarget:(id)arg1;
- (void)_handleBeginObservingSystemVolume;
- (void)_handleBeginObservingVolume:(id)arg1;
- (void)_handleEndObservingAudioRoutes:(id)arg1;
- (void)_handleEndObservingVolume:(id)arg1;
- (void)_handlePickAudioRoute:(id)arg1;
- (void)_handleSetHapticIntensity:(id)arg1;
- (void)_handleSetHapticState:(id)arg1;
- (void)_handleSetMuted:(id)arg1;
- (void)_handleSetProminentHapticEnabled:(id)arg1;
- (void)_handleSetSystemMuted:(id)arg1;
- (void)_handleSetVolume:(id)arg1;
- (void)_hapticIntensityDidChangeNotification:(id)arg1;
- (bool)_hasRequestedVolumeAtLeastOnce;
- (void)_sendCurrentObservingSystemVolumeValues;
- (void)_sendEUVolumeLimit:(float)arg1 target:(id)arg2;
- (void)_sendHapticState:(long long)arg1;
- (void)_sendMessage:(id)arg1 type:(long long)arg2 timeout:(double)arg3 queueOne:(id)arg4 retry:(bool)arg5;
- (void)_sendMutedState:(bool)arg1 target:(id)arg2;
- (void)_sendSystemMutedState:(bool)arg1;
- (void)_sendVolumeControlAvailability:(bool)arg1 target:(id)arg2;
- (void)_sendVolumeValue:(float)arg1 target:(id)arg2;
- (void)_sendVolumeWarningEnabled:(bool)arg1 target:(id)arg2;
- (void)_setRequestedVolumeAtLeastOnce;
- (bool)_shouldForceVolumeWarning;
- (id)_targetForVolumeController:(id)arg1;
- (void)_updateHapticIntensityValue;
- (void)_updateHapticState;
- (void)_updateProminentHapticState;
- (void)_updateSystemMutedState;
- (void)beginObservingHapticState;
- (void)beginObservingSystemMutedState;
- (void)dealloc;
- (id)initWithVolumeAudioCategories:(id)arg1;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)updateProminentHapticState;
- (void)volumeController:(id)arg1 EUVolumeLimitDidChange:(float)arg2;
- (void)volumeController:(id)arg1 mutedStateDidChange:(bool)arg2;
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(bool)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (void)volumeController:(id)arg1 volumeWarningStateDidChange:(long long)arg2;

@end

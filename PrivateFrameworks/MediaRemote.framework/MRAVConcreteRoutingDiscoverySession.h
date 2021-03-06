/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVConcreteRoutingDiscoverySession : MRAVRoutingDiscoverySession {
    int  _airplayActiveNotificationToken;
    AVOutputDeviceDiscoverySession * _avDiscoverySession;
    NSArray * _availableOutputDevices;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    unsigned int  _discoveryMode;
    unsigned int  _endpointFeatures;
    bool  _isLocalDeviceBeingAirplayedTo;
    NSString * _routingContextUID;
    bool  _scheduledAvailableEndpointsAndOutputDevicesReload;
    NSObject<OS_dispatch_queue> * _serialQueue;
    unsigned int  _targetAudioSessionID;
}

@property (nonatomic, readonly) NSArray *availableEndpoints;
@property (nonatomic, readonly) NSArray *availableOutputDevices;

- (void).cxx_destruct;
- (void)_availableOutputDevicesDidChangeNotification:(id)arg1;
- (void)_onQueue_reloadAvailableOutputDevices;
- (void)_scheduleAvailableEndpointsAndOutputDevicesReload;
- (id)availableEndpoints;
- (id)availableOutputDevices;
- (void)dealloc;
- (bool)devicePresenceDetected;
- (unsigned int)discoveryMode;
- (unsigned int)endpointFeatures;
- (id)initWithEndpointFeatures:(unsigned int)arg1;
- (id)routingContextUID;
- (void)setDiscoveryMode:(unsigned int)arg1;
- (void)setRoutingContextUID:(id)arg1;
- (void)setTargetAudioSessionID:(unsigned int)arg1;
- (unsigned int)targetAudioSessionID;

@end

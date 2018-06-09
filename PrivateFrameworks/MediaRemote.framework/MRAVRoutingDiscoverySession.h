/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVRoutingDiscoverySession : NSObject {
    bool  _alwaysAllowUpdates;
    struct NSMutableDictionary { Class x1; } * _endpointsChangedCallbacks;
    struct NSMutableDictionary { Class x1; } * _outputDevicesChangedCallbacks;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic) bool alwaysAllowUpdates;
@property (nonatomic, readonly) NSArray *availableEndpoints;
@property (nonatomic, readonly) NSArray *availableOutputDevices;
@property (nonatomic, readonly) bool devicePresenceDetected;
@property (nonatomic) unsigned int discoveryMode;
@property (nonatomic, readonly) unsigned int endpointFeatures;
@property (nonatomic, readonly) NSArray *endpointsChangedCallbacks;
@property (nonatomic, readonly) NSArray *outputDevicesChangedCallbacks;
@property (nonatomic, copy) NSString *routingContextUID;
@property (nonatomic) unsigned int targetAudioSessionID;

+ (id)discoverySessionWithEndpointFeatures:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)_init;
- (id)addEndpointsChangedCallback:(id /* block */)arg1;
- (id)addOutputDevicesChangedCallback:(id /* block */)arg1;
- (bool)alwaysAllowUpdates;
- (id)endpointsChangedCallbacks;
- (id)outputDevicesChangedCallbacks;
- (void)removeEndpointsChangedCallback:(id)arg1;
- (void)removeOutputDevicesChangedCallback:(id)arg1;
- (void)setAlwaysAllowUpdates:(bool)arg1;

@end

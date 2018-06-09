/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigRouteDiscovererOutputDeviceDiscoverySessionImpl : NSObject <AVOutputDeviceDiscoverySessionImpl> {
    struct OpaqueFigRouteDiscoverer { } * _discoverer;
    AVOutputDeviceDiscoverySession * _parentSession;
    id /* block */  _routeDiscovererCreator;
    AVWeakReference * _weakObserver;
}

@property (nonatomic, readonly) AVOutputDeviceDiscoverySessionAvailableOutputDevices *availableOutputDevicesObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool devicePresenceDetected;
@property (readonly) unsigned long long hash;
@property AVOutputDeviceDiscoverySession *parentOutputDeviceDiscoverySession;
@property (nonatomic, readonly) struct OpaqueFigRouteDiscoverer { }*routeDiscoverer;
@property (readonly) Class superclass;
@property (nonatomic, retain) AVAudioSession *targetAudioSession;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_availableRoutesChanged;
- (void)_routePresentChanged;
- (void)_serverDied;
- (id)availableOutputDevicesObject;
- (void)dealloc;
- (bool)devicePresenceDetected;
- (id)init;
- (id)initWithFigRouteDiscovererCreator:(id /* block */)arg1;
- (void)outputDeviceDiscoverySessionDidChangeDiscoveryMode:(id)arg1;
- (id)parentOutputDeviceDiscoverySession;
- (struct OpaqueFigRouteDiscoverer { }*)routeDiscoverer;
- (void)setParentOutputDeviceDiscoverySession:(id)arg1;
- (void)setTargetAudioSession:(id)arg1;
- (id)targetAudioSession;

@end

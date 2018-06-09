/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface NACRoutingControllerProxy : NSObject <NACRoutingController> {
    NSArray * _availableAudioRoutes;
    NSString * _category;
    <NACRoutingControllerDelegate> * _delegate;
    bool  _isObserving;
    NACAudioRoute * _pickedRoute;
    NACXPCClient * _xpcClient;
}

@property (nonatomic, readonly) NSArray *availableAudioRoutes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NACRoutingControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NACAudioRoute *pickedRoute;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)_audioRoutesDidChange;
- (id)availableAudioRoutes;
- (void)beginObservingRoutes;
- (void)dealloc;
- (id)delegate;
- (void)endObservingRoutes;
- (id)initWithAudioCategory:(id)arg1;
- (void)pickAudioRoute:(id)arg1;
- (id)pickedRoute;
- (void)setDelegate:(id)arg1;

@end

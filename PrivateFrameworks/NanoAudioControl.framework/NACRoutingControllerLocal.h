/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface NACRoutingControllerLocal : NSObject <MPAVRoutingControllerDelegate, NACRoutingController> {
    NSString * _audioCategory;
    <NACRoutingControllerDelegate> * _delegate;
    MPAVRoutingController * _routingController;
}

@property (nonatomic, readonly) NSArray *availableAudioRoutes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NACRoutingControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NACAudioRoute *pickedRoute;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)availableAudioRoutes;
- (void)beginObservingRoutes;
- (id)delegate;
- (void)endObservingRoutes;
- (id)initWithAudioCategory:(id)arg1;
- (void)pickAudioRoute:(id)arg1;
- (id)pickedRoute;
- (void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setDelegate:(id)arg1;

@end

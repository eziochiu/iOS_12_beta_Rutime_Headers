/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBExternalSceneLayerHostView : FBSceneLayerHostView <FBSceneMonitorDelegate> {
    FBSceneHostManager * _hostManager;
    UIView<FBSceneHostView> * _hostView;
    FBSceneMonitor * _monitor;
    FBScene * _parentScene;
    NSString * _requester;
    FBScene * _targetScene;
    NSString * _targetSceneID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) FBScene *targetScene;

- (void).cxx_destruct;
- (void)_updateHostingState;
- (void)_updateTargetScene;
- (void)dealloc;
- (id)initWithSceneLayer:(id)arg1 parentScene:(id)arg2;
- (void)sceneMonitor:(id)arg1 pairingStatusDidChangeForExternalSceneIDs:(id)arg2;
- (id)targetScene;

@end

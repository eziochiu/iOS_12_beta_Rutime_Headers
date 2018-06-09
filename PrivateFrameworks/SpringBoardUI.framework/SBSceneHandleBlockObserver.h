/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBSceneHandleBlockObserver : NSObject <BSInvalidatable, SBSceneHandleObserver> {
    NSMutableDictionary * _createBlocks;
    NSMutableDictionary * _destroyBlocks;
    NSMutableDictionary * _didUpdateClientSettingsBlocks;
    NSMutableDictionary * _didUpdateContentStateBlocks;
    NSMutableDictionary * _didUpdatePairingStatusBlocks;
    NSMutableDictionary * _didUpdateSettingsBlocks;
    bool  _invalidated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (id)observeCreate:(id /* block */)arg1;
- (id)observeDestroy:(id /* block */)arg1;
- (id)observeDidUpdateClientSettings:(id /* block */)arg1;
- (id)observeDidUpdateContentState:(id /* block */)arg1;
- (id)observeDidUpdatePairingStatusForExternalIdentifiers:(id /* block */)arg1;
- (id)observeDidUpdateSettings:(id /* block */)arg1;
- (void)removeObserverForToken:(id)arg1;
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneHandle:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3;
- (void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2;
- (void)sceneHandle:(id)arg1 didUpdatePairingStatusForExternalSceneIdentifiers:(id)arg2;
- (void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3;

@end

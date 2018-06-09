/* made by EzioChiu.
 */

@protocol FBWorkspaceServerSceneEventHandler <NSObject>

@required

- (void)sceneAttachLayer:(FBSWorkspaceSceneLayerEvent *)arg1;
- (void)sceneDetachLayer:(FBSWorkspaceSceneLayerEvent *)arg1;
- (void)sceneDidReceiveActions:(FBSWorkspaceSceneActionsEvent *)arg1;
- (void)sceneDidReceiveMessage:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: FBSWorkspaceSceneMessageEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSWorkspaceSceneMessageEvent *, void*
- (void)sceneDidUpdateClientSettings:(FBSWorkspaceSceneClientSettingsChangedEvent *)arg1;
- (void)sceneUpdateLayer:(FBSWorkspaceSceneLayerEvent *)arg1;

@end

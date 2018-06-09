/* made by EzioChiu.
 */

@protocol FBWorkspaceServerDelegate <NSObject>

@required

- (void)server:(FBWorkspaceServer *)arg1 handleConnectEvent:(FBSWorkspaceConnectEvent *)arg2;
- (void)server:(void *)arg1 handleCreateSceneRequest:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: FBWorkspaceServer *, FBSWorkspaceCreateSceneRequestEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBScene *, void*
- (void)server:(void *)arg1 handleDestroySceneRequest:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 7: FBWorkspaceServer *, FBSWorkspaceDestroySceneRequestEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end

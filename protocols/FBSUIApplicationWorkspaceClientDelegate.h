/* made by EzioChiu.
 */

@protocol FBSUIApplicationWorkspaceClientDelegate <FBSWorkspaceClientDelegate>

@required

- (void)client:(FBSWorkspaceClient *)arg1 handleExit:(FBSUIApplicationExitEvent *)arg2;
- (void)client:(void *)arg1 handleLaunch:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: FBSWorkspaceClient *, FBSUIApplicationLaunchEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSUIApplicationLaunchResponseEvent *, void*
- (void)clientHandleAssertionExpirationImminent:(FBSWorkspaceClient *)arg1;

@end

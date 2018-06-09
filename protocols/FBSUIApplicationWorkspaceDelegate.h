/* made by EzioChiu.
 */

@protocol FBSUIApplicationWorkspaceDelegate <FBSWorkspaceDelegate>

@required

- (void)workspace:(void *)arg1 didLaunchWithCompletion:(void *)arg2; // needs 2 arg types, found 7: FBSUIApplicationWorkspace *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FBSUIApplicationLaunchResponse *, void*
- (void)workspaceShouldExit:(FBSUIApplicationWorkspace *)arg1;

@optional

- (void)workspaceNoteAssertionExpirationImminent:(FBSUIApplicationWorkspace *)arg1;
- (void)workspaceShouldExit:(FBSUIApplicationWorkspace *)arg1 withTransitionContext:(FBSSceneTransitionContext *)arg2;

@end

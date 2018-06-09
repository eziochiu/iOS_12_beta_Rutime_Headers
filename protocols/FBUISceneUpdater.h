/* made by EzioChiu.
 */

@protocol FBUISceneUpdater

@required

- (UIView *)contentView;
- (void)sendActions:(NSSet *)arg1;
- (void)updateSettings:(void *)arg1 withTransitionContext:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: FBSSceneSettings *, FBSSceneTransitionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end

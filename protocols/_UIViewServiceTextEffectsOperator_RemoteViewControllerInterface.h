/* made by EzioChiu.
 */

@protocol _UIViewServiceTextEffectsOperator_RemoteViewControllerInterface <_UIViewServiceDeputy_UIViewServiceInterface, _UIViewServiceUIBehaviorInterface>

@required

- (void)__createHostedTextEffectsWithReplyHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _UIHostedWindowHostingHandle *, _UIHostedWindowHostingHandle *, _UIHostedWindowHostingHandle *, void*
- (void)__hostDidEnterBackground;
- (void)__hostViewWillAppear:(bool)arg1;
- (void)__hostViewWillDisappear:(bool)arg1;
- (void)__hostWillEnterForeground;
- (void)__setHostAllowedNotifications:(NSArray *)arg1;
- (void)__setNextAutomaticOrderOutDirection:(int)arg1 duration:(double)arg2;
- (void)__setSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)__setSceneSize:(struct CGSize { double x1; double x2; })arg1;
- (void)__setWindowOffset:(struct CGPoint { double x1; double x2; })arg1;

@end

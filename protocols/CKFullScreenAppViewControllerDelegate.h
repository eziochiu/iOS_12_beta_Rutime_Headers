/* made by EzioChiu.
 */

@protocol CKFullScreenAppViewControllerDelegate <NSObject>

@optional

- (void)fullscreenAppViewController:(id <CKFullScreenAppViewControllerProtocol>)arg1 hasUpdatedLastTouchDate:(NSDate *)arg2;
- (void)fullscreenAppViewController:(id <CKFullScreenAppViewControllerProtocol>)arg1 wantsToSwitchToPlugin:(IMBalloonPlugin *)arg2 datasource:(IMBalloonPluginDataSource *)arg3;
- (double)fullscreenAppViewControllerCollapsedContentHeight:(id <CKFullScreenAppViewControllerProtocol>)arg1;
- (void)fullscreenAppViewControllerDidTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (void)fullscreenAppViewControllerSwitcherDidSelectAppManager:(id <CKFullScreenAppViewControllerProtocol>)arg1;
- (void)fullscreenAppViewControllerSwitcherDidSelectAppStore:(id <CKFullScreenAppViewControllerProtocol>)arg1;
- (void)fullscreenAppViewControllerWantsToCollapse:(id <CKFullScreenAppViewControllerProtocol>)arg1;
- (bool)shouldAlwaysShowAppTitle;

@end

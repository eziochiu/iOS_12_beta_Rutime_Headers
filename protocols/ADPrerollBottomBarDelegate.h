/* made by EzioChiu.
 */

@protocol ADPrerollBottomBarDelegate <NSObject>

@required

- (void)bottomBarActionButtonTapped:(ADPrerollBottomBar *)arg1;
- (void)bottomBarPauseButtonTapped:(ADPrerollBottomBar *)arg1;
- (void)bottomBarPlayButtonTapped:(ADPrerollBottomBar *)arg1;
- (void)bottomBarSkipButtonTapped:(ADPrerollBottomBar *)arg1;

@end
